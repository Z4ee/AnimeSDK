#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_CONFIG_CURVEMOVETRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C562B0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C562F0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT___C__ONPOSTENTITYREADY_B__18_0_OFFSET UNITYSDK_OFFSET(0x16C56300)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CurveMoveTrait___c_TypeDefinitionIndex = 85808;

	class CurveMoveTrait___c : public ::System::Object
	{
	public:
		static ::MoleMole::Config::CurveMoveTrait___c** StaticGet___9()
		{
			return (::MoleMole::Config::CurveMoveTrait___c**)Il2CppClass::FromTypeDefinitionIndex(CurveMoveTrait___c_TypeDefinitionIndex)->GetStaticField(0x46C50);
		}
		static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CurveMoveTrait___c_TypeDefinitionIndex)->GetStaticField(0x46C58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT___C__CTOR_OFFSET))(this);
		}

		::System::Single _OnPostEntityReady_b__18_0(::System::Int32 x)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT___C__ONPOSTENTITYREADY_B__18_0_OFFSET))(this, x);
		}
	};
}
