#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Text { class StringBuilder; }

#define RPG_GAMECORE_DYNAMICVALUE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D62C450)
#define RPG_GAMECORE_DYNAMICVALUE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D62C480)
#define RPG_GAMECORE_DYNAMICVALUE___C___CCTOR_B__80_0_OFFSET UNITYSDK_OFFSET(0x1D62C490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicValue___c_TypeDefinitionIndex = 10842;

	class DynamicValue___c : public ::System::Object
	{
	public:
		static ::RPG::GameCore::DynamicValue___c** StaticGet___9()
		{
			return (::RPG::GameCore::DynamicValue___c**)Il2CppClass::FromTypeDefinitionIndex(DynamicValue___c_TypeDefinitionIndex)->GetStaticField(0x22CD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE___C__CTOR_OFFSET))(this);
		}

		::System::Text::StringBuilder* __cctor_b__80_0()
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DYNAMICVALUE___C___CCTOR_B__80_0_OFFSET))(this);
		}
	};
}
