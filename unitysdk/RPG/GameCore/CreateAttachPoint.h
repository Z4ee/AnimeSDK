#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CREATEATTACHPOINT_METHOD_3_472A246AE5EB2A34_OFFSET UNITYSDK_OFFSET(0x1D5E06E0)
#define RPG_GAMECORE_CREATEATTACHPOINT_METHOD_3_735591DD0FAC868F_OFFSET UNITYSDK_OFFSET(0x1D5E0640)
#define RPG_GAMECORE_CREATEATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E06A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateAttachPoint_TypeDefinitionIndex = 23193;

	class CreateAttachPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SourcePointName; // 0x20
		::System::String* NewPointName; // 0x28
		::RPG::MVector3 Posffset; // 0x30
		::RPG::MVector3 RotOffset; // 0x3C
		::System::Boolean FollowSourcePoint; // 0x48
		::System::String* SourceBoneName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEATTACHPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_735591DD0FAC868F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateAttachPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateAttachPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEATTACHPOINT_METHOD_3_735591DD0FAC868F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_472A246AE5EB2A34(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CreateAttachPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CreateAttachPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEATTACHPOINT_METHOD_3_472A246AE5EB2A34_OFFSET))(a1, a2);
		}
	};
}
