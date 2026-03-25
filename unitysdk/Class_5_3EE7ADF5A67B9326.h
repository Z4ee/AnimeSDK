#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_BDA5D81D1FA3765D.h"
#include "unitysdk/UnityEngine/Color.h"

#define CLASS_5_3EE7ADF5A67B9326_METHOD_5_03688BC166BEA0A4_OFFSET UNITYSDK_OFFSET(0x87A6160)
#define CLASS_5_3EE7ADF5A67B9326_METHOD_5_781652AB1DC33016_OFFSET UNITYSDK_OFFSET(0x87A6280)
#define CLASS_5_3EE7ADF5A67B9326_METHOD_5_7E992C32908BE978_OFFSET UNITYSDK_OFFSET(0x87A63A0)
#define CLASS_5_3EE7ADF5A67B9326_METHOD_5_E7804A0288D2A012_OFFSET UNITYSDK_OFFSET(0x87A5F90)
#define CLASS_5_3EE7ADF5A67B9326__CTOR_OFFSET UNITYSDK_OFFSET(0x87A6130)

inline static constexpr unsigned int Class_5_3EE7ADF5A67B9326_TypeDefinitionIndex = 60229;

class Class_5_3EE7ADF5A67B9326 : public ::Class_4_BDA5D81D1FA3765D
{
public:
	// static const ::System::Single Field_5_0; // 0x0
	::System::Single Field_5_2; // 0x90
	::System::Single Field_5_4; // 0x94
	::System::Single Field_5_1; // 0x98
	::System::Single Field_5_3; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_3EE7ADF5A67B9326__CTOR_OFFSET))(this);
	}

	static ::Class_5_3EE7ADF5A67B9326* Method_5_E7804A0288D2A012(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::Class_5_3EE7ADF5A67B9326*(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_3EE7ADF5A67B9326_METHOD_5_E7804A0288D2A012_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::Class_5_3EE7ADF5A67B9326* Method_5_03688BC166BEA0A4(::System::Single a1, ::System::Single a2)
	{
		return ((::Class_5_3EE7ADF5A67B9326*(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_3EE7ADF5A67B9326_METHOD_5_03688BC166BEA0A4_OFFSET))(a1, a2);
	}

	::System::Void Method_5_781652AB1DC33016(::UnityEngine::Color a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_5_3EE7ADF5A67B9326_METHOD_5_781652AB1DC33016_OFFSET))(this, a1);
	}

	::System::Void Method_5_7E992C32908BE978(::UnityEngine::Color P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_5_3EE7ADF5A67B9326_METHOD_5_7E992C32908BE978_OFFSET))(this, P0);
	}
};
