#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FreeStyleTriggerSimpleNodeInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLETRIGGERNODEINFO_METHOD_3_8B6511E48B1DECCE_OFFSET UNITYSDK_OFFSET(0x18933B70)
#define RPG_GAMECORE_FREESTYLETRIGGERNODEINFO_METHOD_3_EDADC79DB17BDB4C_OFFSET UNITYSDK_OFFSET(0x18933BF0)
#define RPG_GAMECORE_FREESTYLETRIGGERNODEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18933BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleTriggerNodeInfo_TypeDefinitionIndex = 16030;

	class FreeStyleTriggerNodeInfo : public ::RPG::GameCore::FreeStyleTriggerSimpleNodeInfo
	{
	public:
		::System::String* CharacterID; // 0x20
		::System::UInt32 MotionID; // 0x28
		::System::Single MinLoopTime; // 0x2C
		::System::Single MaxLoopTime; // 0x30
		::System::String* JumpNodeNameOnLoopMotion; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERNODEINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8B6511E48B1DECCE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleTriggerNodeInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleTriggerNodeInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERNODEINFO_METHOD_3_8B6511E48B1DECCE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EDADC79DB17BDB4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleTriggerNodeInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleTriggerNodeInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERNODEINFO_METHOD_3_EDADC79DB17BDB4C_OFFSET))(a1, a2);
		}
	};
}
