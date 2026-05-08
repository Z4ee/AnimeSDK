#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_MONOGAMEPADLINKMODULE___C_METHOD_1_19AD88039E2EEBF8_OFFSET UNITYSDK_OFFSET(0x10BD2970)
#define MOLEMOLE_MONOGAMEPADLINKMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x10BD2920)
#define MOLEMOLE_MONOGAMEPADLINKMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x10BD2960)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadLinkModule___c_TypeDefinitionIndex = 52729;

	class MonoGamepadLinkModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Single>** StaticGet___9__115_0()
		{
			return (::System::Comparison_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoGamepadLinkModule___c_TypeDefinitionIndex)->GetStaticField(0x3EBD0);
		}
		static ::MoleMole::MonoGamepadLinkModule___c** StaticGet___9()
		{
			return (::MoleMole::MonoGamepadLinkModule___c**)Il2CppClass::FromTypeDefinitionIndex(MonoGamepadLinkModule___c_TypeDefinitionIndex)->GetStaticField(0x3EBD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADLINKMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADLINKMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 Method_1_19AD88039E2EEBF8(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADLINKMODULE___C_METHOD_1_19AD88039E2EEBF8_OFFSET))(this, a1, a2);
		}
	};
}
