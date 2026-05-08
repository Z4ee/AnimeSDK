#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_CONFIG_CURVEMOVETRAIT___C_METHOD_1_3A233B47D17C0190_OFFSET UNITYSDK_OFFSET(0x16B446B0)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B44660)
#define MOLEMOLE_CONFIG_CURVEMOVETRAIT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16B446A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CurveMoveTrait___c_TypeDefinitionIndex = 39875;

	class CurveMoveTrait___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Single>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CurveMoveTrait___c_TypeDefinitionIndex)->GetStaticField(0x402C0);
		}
		static ::MoleMole::Config::CurveMoveTrait___c** StaticGet___9()
		{
			return (::MoleMole::Config::CurveMoveTrait___c**)Il2CppClass::FromTypeDefinitionIndex(CurveMoveTrait___c_TypeDefinitionIndex)->GetStaticField(0x402C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT___C__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_3A233B47D17C0190(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CURVEMOVETRAIT___C_METHOD_1_3A233B47D17C0190_OFFSET))(this, a1);
		}
	};
}
