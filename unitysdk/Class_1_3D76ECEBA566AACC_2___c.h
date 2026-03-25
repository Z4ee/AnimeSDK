#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_3D76ECEBA566AACC_2___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x166BA0A0)
#define CLASS_1_3D76ECEBA566AACC_2___C__CTOR_OFFSET UNITYSDK_OFFSET(0x166BA0E0)
#define CLASS_1_3D76ECEBA566AACC_2___C___TRIGGERNEWWEATHEREFFECT_B__9_0_OFFSET UNITYSDK_OFFSET(0x166BA0F0)

inline static constexpr unsigned int Class_1_3D76ECEBA566AACC_2___c_TypeDefinitionIndex = 28590;

class Class_1_3D76ECEBA566AACC_2___c : public ::System::Object
{
public:
	static ::Class_1_3D76ECEBA566AACC_2___c** StaticGet___9()
	{
		return (::Class_1_3D76ECEBA566AACC_2___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D76ECEBA566AACC_2___c_TypeDefinitionIndex)->GetStaticField(0x2B300);
	}
	static ::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>** StaticGet___9__9_0()
	{
		return (::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D76ECEBA566AACC_2___c_TypeDefinitionIndex)->GetStaticField(0x2B308);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D76ECEBA566AACC_2___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D76ECEBA566AACC_2___C__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint __TriggerNewWeatherEffect_b__9_0(::System::UInt32 x)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3D76ECEBA566AACC_2___C___TRIGGERNEWWEATHEREFFECT_B__9_0_OFFSET))(this, x);
	}
};
