#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ToggleButton; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_TOGGLEBUTTONGROUP___C__ANYTOGGLESON_B__3_0_OFFSET UNITYSDK_OFFSET(0xCA7C8B0)
#define RPG_CLIENT_TOGGLEBUTTONGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA7C860)
#define RPG_CLIENT_TOGGLEBUTTONGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCA7C8A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ToggleButtonGroup___c_TypeDefinitionIndex = 67916;

	class ToggleButtonGroup___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::RPG::Client::ToggleButton*>** StaticGet___9__3_0()
		{
			return (::System::Predicate_1<::RPG::Client::ToggleButton*>**)Il2CppClass::FromTypeDefinitionIndex(ToggleButtonGroup___c_TypeDefinitionIndex)->GetStaticField(0x552E0);
		}
		static ::RPG::Client::ToggleButtonGroup___c** StaticGet___9()
		{
			return (::RPG::Client::ToggleButtonGroup___c**)Il2CppClass::FromTypeDefinitionIndex(ToggleButtonGroup___c_TypeDefinitionIndex)->GetStaticField(0x552E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _AnyTogglesOn_b__3_0(::RPG::Client::ToggleButton* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ToggleButton*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOGGLEBUTTONGROUP___C__ANYTOGGLESON_B__3_0_OFFSET))(this, a1);
		}
	};
}
