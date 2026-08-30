#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_46AC29DEBE45F8A8;
class Class_1_508B1A2F4F54A6A6;
class Class_1_B5CB9AB596223833;
class Class_1_C4C2ACF3D9655BEA;
class Class_1_C98B12E65C7C4800;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FF872820A2FF123B_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0x1C1A3B80)
#define CLASS_1_FF872820A2FF123B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1A3C30)

inline static constexpr unsigned int Class_1_FF872820A2FF123B_TypeDefinitionIndex = 35582;

class Class_1_FF872820A2FF123B : public ::System::Object
{
public:
	::Class_1_C4C2ACF3D9655BEA* MJGPGGNMDDC; // 0x10
	::Class_1_508B1A2F4F54A6A6* HHCFJMFDLAF; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_B5CB9AB596223833*>* GEGKCAOLMOH; // 0x20
	::Class_1_C98B12E65C7C4800* ADCPPJNMGJP; // 0x28
	::Class_1_46AC29DEBE45F8A8* GNLAGMCLFFI; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF872820A2FF123B__CTOR_OFFSET))(this);
	}

	::Class_1_B5CB9AB596223833* Method_1_CBBB30978BA34B92(::System::UInt32 a1)
	{
		return ((::Class_1_B5CB9AB596223833*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FF872820A2FF123B_METHOD_1_CBBB30978BA34B92_OFFSET))(this, a1);
	}
};
