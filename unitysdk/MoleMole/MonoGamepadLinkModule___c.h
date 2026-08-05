#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_MONOGAMEPADLINKMODULE___C_METHOD_1_19AD88039E2EEBF8_OFFSET UNITYSDK_OFFSET(0x179168A0)
#define MOLEMOLE_MONOGAMEPADLINKMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17916850)
#define MOLEMOLE_MONOGAMEPADLINKMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17916890)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadLinkModule___c_TypeDefinitionIndex = 82505;

	class MonoGamepadLinkModule___c : public ::System::Object
	{
	public:
		static ::MoleMole::MonoGamepadLinkModule___c** StaticGet___9()
		{
			return (::MoleMole::MonoGamepadLinkModule___c**)Il2CppClass::FromTypeDefinitionIndex(MonoGamepadLinkModule___c_TypeDefinitionIndex)->GetStaticField(0x427E0);
		}
		static ::System::Comparison_1<::System::Single>** StaticGet___9__132_0()
		{
			return (::System::Comparison_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MonoGamepadLinkModule___c_TypeDefinitionIndex)->GetStaticField(0x427E8);
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
