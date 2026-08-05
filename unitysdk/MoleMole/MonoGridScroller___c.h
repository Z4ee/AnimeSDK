#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_MONOGRIDSCROLLER___C_METHOD_1_82ECC72D992D12DD_OFFSET UNITYSDK_OFFSET(0x11D4D590)
#define MOLEMOLE_MONOGRIDSCROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11D4D540)
#define MOLEMOLE_MONOGRIDSCROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11D4D580)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGridScroller___c_TypeDefinitionIndex = 87765;

	class MonoGridScroller___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Int32>** StaticGet___9__89_0()
		{
			return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MonoGridScroller___c_TypeDefinitionIndex)->GetStaticField(0x4C3E0);
		}
		static ::MoleMole::MonoGridScroller___c** StaticGet___9()
		{
			return (::MoleMole::MonoGridScroller___c**)Il2CppClass::FromTypeDefinitionIndex(MonoGridScroller___c_TypeDefinitionIndex)->GetStaticField(0x4C3E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 Method_1_82ECC72D992D12DD(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER___C_METHOD_1_82ECC72D992D12DD_OFFSET))(this, a1, a2);
		}
	};
}
