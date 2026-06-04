#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLETRIGGERINFO_METHOD_2_10F1DFB757B4CD9D_OFFSET UNITYSDK_OFFSET(0x1976EAB0)
#define RPG_GAMECORE_FREESTYLETRIGGERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1976ECC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FreeStyleTriggerInfo_TypeDefinitionIndex = 16077;

	class FreeStyleTriggerInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* CharacterID; // 0x10
		::System::UInt32 MotionID; // 0x18
		::System::Single MinLoopTime; // 0x1C
		::System::Single MaxLoopTime; // 0x20
		::System::Single Weight; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_10F1DFB757B4CD9D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FreeStyleTriggerInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FreeStyleTriggerInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLETRIGGERINFO_METHOD_2_10F1DFB757B4CD9D_OFFSET))(a1, a2);
		}
	};
}
