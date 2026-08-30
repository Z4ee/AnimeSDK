#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LGAMEENTITYREF_METHOD_2_5472FF12F81F7231_OFFSET UNITYSDK_OFFSET(0x1D1C73A0)
#define RPG_GAMECORE_LGAMEENTITYREF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1C74E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LGameEntityRef_TypeDefinitionIndex = 18676;

	class LGameEntityRef : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 ContainerID; // 0x14
		::System::UInt32 EntityID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LGAMEENTITYREF__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_5472FF12F81F7231(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LGameEntityRef*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LGameEntityRef*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LGAMEENTITYREF_METHOD_2_5472FF12F81F7231_OFFSET))(a1, a2);
		}
	};
}
