#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwitchRefBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_SWITCHREFGROUPPROPERTY_METHOD_3_2BC45E8A6A80D6D6_OFFSET UNITYSDK_OFFSET(0x1E152F10)
#define RPG_GAMECORE_SWITCHREFGROUPPROPERTY_METHOD_3_2C912E1B5ADFB413_OFFSET UNITYSDK_OFFSET(0x1E1535C0)
#define RPG_GAMECORE_SWITCHREFGROUPPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E152F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchRefGroupProperty_TypeDefinitionIndex = 17331;

	class SwitchRefGroupProperty : public ::RPG::GameCore::SwitchRefBase
	{
	public:
		::RPG::GameCore::DynamicString* PropertyName; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGROUPPROPERTY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2C912E1B5ADFB413(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefGroupProperty*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefGroupProperty*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGROUPPROPERTY_METHOD_3_2C912E1B5ADFB413_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2BC45E8A6A80D6D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwitchRefGroupProperty* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwitchRefGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHREFGROUPPROPERTY_METHOD_3_2BC45E8A6A80D6D6_OFFSET))(a1, a2);
		}
	};
}
