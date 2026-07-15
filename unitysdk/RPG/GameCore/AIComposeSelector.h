#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
#include "unitysdk/RPG/GameCore/AISelectorComposeType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AICOMPOSESELECTOR_METHOD_3_13E768942A8B1625_OFFSET UNITYSDK_OFFSET(0x1B9F2EE0)
#define RPG_GAMECORE_AICOMPOSESELECTOR_METHOD_3_C6ECFC54CB4EA422_OFFSET UNITYSDK_OFFSET(0x1B9F2EA0)
#define RPG_GAMECORE_AICOMPOSESELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F2ED0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIComposeSelector_TypeDefinitionIndex = 14985;

	class AIComposeSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::RPG::GameCore::AISelectorComposeType ComposeType; // 0x10
		::Il2CppArray<::RPG::GameCore::AISelector*>* SelectorList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICOMPOSESELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C6ECFC54CB4EA422(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIComposeSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIComposeSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICOMPOSESELECTOR_METHOD_3_C6ECFC54CB4EA422_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_13E768942A8B1625(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIComposeSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIComposeSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICOMPOSESELECTOR_METHOD_3_13E768942A8B1625_OFFSET))(a1, a2);
		}
	};
}
