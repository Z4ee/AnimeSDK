#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_3D76ECEBA566AACC_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B11AD0)
#define CLASS_1_3D76ECEBA566AACC_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B11B10)
#define CLASS_1_3D76ECEBA566AACC_1___C___TRIGGERNEWWEATHEREFFECT_B__9_0_OFFSET UNITYSDK_OFFSET(0x17B11B20)

inline static constexpr unsigned int Class_1_3D76ECEBA566AACC_1___c_TypeDefinitionIndex = 34983;

class Class_1_3D76ECEBA566AACC_1___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D76ECEBA566AACC_1___c_TypeDefinitionIndex)->GetStaticField(0x55590);
	}
	static ::Class_1_3D76ECEBA566AACC_1___c** StaticGet___9()
	{
		return (::Class_1_3D76ECEBA566AACC_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D76ECEBA566AACC_1___c_TypeDefinitionIndex)->GetStaticField(0x55598);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D76ECEBA566AACC_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D76ECEBA566AACC_1___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint __TriggerNewWeatherEffect_b__9_0(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3D76ECEBA566AACC_1___C___TRIGGERNEWWEATHEREFFECT_B__9_0_OFFSET))(this, a1);
	}
};
