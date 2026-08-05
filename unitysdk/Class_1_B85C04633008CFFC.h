#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_671573D9438268DE.h"
#include "unitysdk/Struct_2_A4794E3F79A63BA9.h"
#include "unitysdk/Struct_2_CACFF48BCADAB4F5.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace System::Diagnostics { class Stopwatch; }

#define CLASS_1_B85C04633008CFFC_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x112A5890)
#define CLASS_1_B85C04633008CFFC_METHOD_1_80B6FFC1FC63D2BD_OFFSET UNITYSDK_OFFSET(0x112A59C0)
#define CLASS_1_B85C04633008CFFC_METHOD_1_8DD8CB30C2D54F4F_OFFSET UNITYSDK_OFFSET(0x112A5CD0)
#define CLASS_1_B85C04633008CFFC_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x112A5910)
#define CLASS_1_B85C04633008CFFC_METHOD_1_E9A2BDCFC89DBED6_OFFSET UNITYSDK_OFFSET(0x112A59A0)
#define CLASS_1_B85C04633008CFFC__CTOR_OFFSET UNITYSDK_OFFSET(0x112A56D0)

inline static constexpr unsigned int Class_1_B85C04633008CFFC_TypeDefinitionIndex = 73815;

class Class_1_B85C04633008CFFC : public ::System::Object
{
public:
	::System::Diagnostics::Stopwatch* Field_1_2; // 0x10
	::Struct_2_CACFF48BCADAB4F5<::System::Byte> Field_1_0; // 0x18
	::System::Collections::Generic::Queue_1<::Struct_2_671573D9438268DE>* Field_1_7; // 0x28
	::System::Random* Field_1_1; // 0x30
	::Struct_2_A4794E3F79A63BA9 Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B85C04633008CFFC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B85C04633008CFFC_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B85C04633008CFFC_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_1_80B6FFC1FC63D2BD(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B85C04633008CFFC_METHOD_1_80B6FFC1FC63D2BD_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int64 Method_1_E9A2BDCFC89DBED6()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B85C04633008CFFC_METHOD_1_E9A2BDCFC89DBED6_OFFSET))(this);
	}

	::System::Int32 Method_1_8DD8CB30C2D54F4F(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B85C04633008CFFC_METHOD_1_8DD8CB30C2D54F4F_OFFSET))(this, a1, a2, a3);
	}
};
