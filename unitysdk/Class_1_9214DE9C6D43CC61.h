#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_085FD3B183D8BFB9.h"
#include "unitysdk/Struct_2_B86F99A3BD3D7B8F.h"
#include "unitysdk/Struct_2_E1E35FDEC0E1EDBB.h"
#include "unitysdk/Struct_2_F94D453A86612274.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

namespace System { class String; }

#define CLASS_1_9214DE9C6D43CC61_METHOD_1_021F70C5A12F106D_OFFSET UNITYSDK_OFFSET(0x1E4E29D0)
#define CLASS_1_9214DE9C6D43CC61_METHOD_1_4AFAB2FFE00C3023_OFFSET UNITYSDK_OFFSET(0x1E4E2AD0)
#define CLASS_1_9214DE9C6D43CC61_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1E4E29B0)
#define CLASS_1_9214DE9C6D43CC61__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4E23C0)

inline static constexpr unsigned int Class_1_9214DE9C6D43CC61_TypeDefinitionIndex = 29247;

class Class_1_9214DE9C6D43CC61 : public ::System::Object
{
public:
	::Il2CppArray<::Struct_2_B86F99A3BD3D7B8F>* Field_1_2; // 0x10
	::Il2CppArray<::System::UInt16>* Field_1_4; // 0x18
	::Il2CppArray<::Struct_2_085FD3B183D8BFB9>* Field_1_1; // 0x20
	::Il2CppArray<::Struct_2_E1E35FDEC0E1EDBB>* Field_1_6; // 0x28
	::Il2CppArray<::Struct_2_085FD3B183D8BFB9>* Field_1_7; // 0x30
	::Il2CppArray<::Struct_2_F94D453A86612274>* Field_1_5; // 0x38
	::Il2CppArray<::Struct_2_085FD3B183D8BFB9>* Field_1_0; // 0x40
	::System::UInt16 Field_1_11; // 0x48
	::System::Byte Field_1_10; // 0x4A

	::System::Void _ctor(::Il2CppArray<::Struct_2_B86F99A3BD3D7B8F>* a1, ::Il2CppArray<::Struct_2_085FD3B183D8BFB9>* a2, ::Il2CppArray<::Struct_2_085FD3B183D8BFB9>* a3, ::Il2CppArray<::Struct_2_085FD3B183D8BFB9>* a4, ::Il2CppArray<::Struct_2_E1E35FDEC0E1EDBB>* a5, ::Il2CppArray<::Struct_2_F94D453A86612274>* a6, ::Il2CppArray<::System::UInt16>* a7, ::System::UInt16 a8, ::Il2CppArray<::System::String*>* a9, ::Il2CppArray<::System::String*>* a10, ::Il2CppArray<::System::String*>* a11)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Struct_2_B86F99A3BD3D7B8F>*, ::Il2CppArray<::Struct_2_085FD3B183D8BFB9>*, ::Il2CppArray<::Struct_2_085FD3B183D8BFB9>*, ::Il2CppArray<::Struct_2_085FD3B183D8BFB9>*, ::Il2CppArray<::Struct_2_E1E35FDEC0E1EDBB>*, ::Il2CppArray<::Struct_2_F94D453A86612274>*, ::Il2CppArray<::System::UInt16>*, ::System::UInt16, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_9214DE9C6D43CC61__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9214DE9C6D43CC61_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Int32 Method_1_021F70C5A12F106D(::System::UInt16 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt16, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9214DE9C6D43CC61_METHOD_1_021F70C5A12F106D_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_4AFAB2FFE00C3023(::System::UInt16 a1, ::System::Span_1<::System::UInt16> a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt16, ::System::Span_1<::System::UInt16>))((::PBYTE)hIl2Cpp + CLASS_1_9214DE9C6D43CC61_METHOD_1_4AFAB2FFE00C3023_OFFSET))(this, a1, a2);
	}
};
