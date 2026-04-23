#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_MODIFYENTITYBOOSTPOINT_METHOD_3_53FC66E92D791B32_OFFSET UNITYSDK_OFFSET(0x18B3D5A0)
#define RPG_GAMECORE_MODIFYENTITYBOOSTPOINT_METHOD_3_861B006073E793B5_OFFSET UNITYSDK_OFFSET(0x18B3D520)
#define RPG_GAMECORE_MODIFYENTITYBOOSTPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18B3D570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifyEntityBoostPoint_TypeDefinitionIndex = 21489;

	class ModifyEntityBoostPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::PropertyModifyFunction ModifyFunction; // 0x20
		::RPG::GameCore::DynamicFloat* ModifyValue; // 0x28
		::System::Boolean IsSilence; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYENTITYBOOSTPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_861B006073E793B5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyEntityBoostPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyEntityBoostPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYENTITYBOOSTPOINT_METHOD_3_861B006073E793B5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_53FC66E92D791B32(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ModifyEntityBoostPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ModifyEntityBoostPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFYENTITYBOOSTPOINT_METHOD_3_53FC66E92D791B32_OFFSET))(a1, a2);
		}
	};
}
