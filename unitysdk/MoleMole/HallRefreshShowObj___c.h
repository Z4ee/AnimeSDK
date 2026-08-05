#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17907600)
#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17907640)
#define MOLEMOLE_HALLREFRESHSHOWOBJ___C__ONPROCESS_B__7_6_OFFSET UNITYSDK_OFFSET(0x17907650)

namespace MoleMole
{
	inline static constexpr unsigned int HallRefreshShowObj___c_TypeDefinitionIndex = 44139;

	class HallRefreshShowObj___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__7_6()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(HallRefreshShowObj___c_TypeDefinitionIndex)->GetStaticField(0x3CB80);
		}
		static ::MoleMole::HallRefreshShowObj___c** StaticGet___9()
		{
			return (::MoleMole::HallRefreshShowObj___c**)Il2CppClass::FromTypeDefinitionIndex(HallRefreshShowObj___c_TypeDefinitionIndex)->GetStaticField(0x3CB88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnProcess_b__7_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HALLREFRESHSHOWOBJ___C__ONPROCESS_B__7_6_OFFSET))(this);
		}
	};
}
