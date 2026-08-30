#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_22;
namespace System { class String; }

#define CLASS_1_529F447F0F49B163_METHOD_1_B18E93A312000B9E_1_OFFSET UNITYSDK_OFFSET(0x1E55C350)
#define CLASS_1_529F447F0F49B163_METHOD_1_B18E93A312000B9E_OFFSET UNITYSDK_OFFSET(0x1E55C310)
#define CLASS_1_529F447F0F49B163_SET_OFFSET UNITYSDK_OFFSET(0x1E55C150)
#define CLASS_1_529F447F0F49B163__CTOR_OFFSET UNITYSDK_OFFSET(0x1E55C390)

inline static constexpr unsigned int Class_1_529F447F0F49B163_TypeDefinitionIndex = 34550;

class Class_1_529F447F0F49B163 : public ::System::Object
{
public:
	::System::UInt32 GILCAMPLLLN; // 0x10
	::System::UInt32 NCKKCDFPCMF; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_529F447F0F49B163__CTOR_OFFSET))(this);
	}

	::System::Void Set(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_529F447F0F49B163_SET_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_B18E93A312000B9E(::Class_0_16E4307DCC419505_22* a1)
	{
		return ((::System::UInt32(*)(::Class_0_16E4307DCC419505_22*))((::PBYTE)hIl2Cpp + CLASS_1_529F447F0F49B163_METHOD_1_B18E93A312000B9E_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_B18E93A312000B9E_1(::Class_0_16E4307DCC419505_22* a1)
	{
		return ((::System::UInt32(*)(::Class_0_16E4307DCC419505_22*))((::PBYTE)hIl2Cpp + CLASS_1_529F447F0F49B163_METHOD_1_B18E93A312000B9E_1_OFFSET))(a1);
	}
};
