#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTARGETDIRMOVE_METHOD_3_378E7CB9136C3B37_OFFSET UNITYSDK_OFFSET(0x176E20A0)
#define RPG_GAMECORE_SETTARGETDIRMOVE_METHOD_3_BDE2DCDC0D511B31_OFFSET UNITYSDK_OFFSET(0x176E2220)
#define RPG_GAMECORE_SETTARGETDIRMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x176E2170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetDirMove_TypeDefinitionIndex = 18452;

	class SetTargetDirMove : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* StartPosTarget; // 0x20
		::RPG::GameCore::TargetEvaluator* EndPosTarget; // 0x28
		::RPG::MVector3 StartOffset; // 0x30
		::RPG::GameCore::DynamicFloat* Speed; // 0x40
		::RPG::GameCore::DynamicFloat* Duration; // 0x48
		::RPG::GameCore::EntityPosAdaptionConfig* PosAdaption; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDIRMOVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_378E7CB9136C3B37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetDirMove*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetDirMove*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDIRMOVE_METHOD_3_378E7CB9136C3B37_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BDE2DCDC0D511B31(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTargetDirMove* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTargetDirMove*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETDIRMOVE_METHOD_3_BDE2DCDC0D511B31_OFFSET))(a1, a2);
		}
	};
}
