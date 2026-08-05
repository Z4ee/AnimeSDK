#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EA257C4B28E4CC0D.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

#define CLASS_2_6FA4D523E6578E0F_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x100CF9E0)
#define CLASS_2_6FA4D523E6578E0F_METHOD_2_C2A779DE6AED579A_OFFSET UNITYSDK_OFFSET(0x100CFEC0)
#define CLASS_2_6FA4D523E6578E0F_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x100CFE20)
#define CLASS_2_6FA4D523E6578E0F__CTOR_OFFSET UNITYSDK_OFFSET(0x100CFE10)

inline static constexpr unsigned int Class_2_6FA4D523E6578E0F_TypeDefinitionIndex = 92443;

class Class_2_6FA4D523E6578E0F : public ::Class_1_EA257C4B28E4CC0D
{
public:
	// static const ::System::Single Field_2_6; // 0x0
	::Il2CppArray<::Struct_2_E614D3B245F96744>* Field_2_2; // 0x40
	::System::Boolean Field_2_7; // 0x48
	::System::Int32 Field_2_1; // 0x4C
	::System::Single Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA4D523E6578E0F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA4D523E6578E0F_METHOD_2_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FA4D523E6578E0F_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_C2A779DE6AED579A(::System::Single a1, ::Il2CppArray<::Struct_2_E614D3B245F96744>* a2, ::System::Boolean a3, ::Struct_2_E614D3B245F96744 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::Struct_2_E614D3B245F96744>*, ::System::Boolean, ::Struct_2_E614D3B245F96744))((::PBYTE)hIl2Cpp + CLASS_2_6FA4D523E6578E0F_METHOD_2_C2A779DE6AED579A_OFFSET))(this, a1, a2, a3, a4);
	}
};
