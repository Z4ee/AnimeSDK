#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F5FBDA629A1B439F.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_B2BE7DD8030FE481_CLEAR_OFFSET UNITYSDK_OFFSET(0x160D20D0)
#define CLASS_1_B2BE7DD8030FE481_GET_PRECISION_OFFSET UNITYSDK_OFFSET(0x160D2610)
#define CLASS_1_B2BE7DD8030FE481_METHOD_1_6F9CBAA646FD53ED_OFFSET UNITYSDK_OFFSET(0x160D2120)
#define CLASS_1_B2BE7DD8030FE481_METHOD_1_A392A2473EAD53B0_OFFSET UNITYSDK_OFFSET(0x160D2580)
#define CLASS_1_B2BE7DD8030FE481_METHOD_1_BAD919AA5E7DD49E_OFFSET UNITYSDK_OFFSET(0x160D2410)
#define CLASS_1_B2BE7DD8030FE481_METHOD_1_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x160D2030)
#define CLASS_1_B2BE7DD8030FE481_SET_PRECISION_OFFSET UNITYSDK_OFFSET(0x160D2620)
#define CLASS_1_B2BE7DD8030FE481__CCTOR_OFFSET UNITYSDK_OFFSET(0x160D2640)
#define CLASS_1_B2BE7DD8030FE481__CTOR_OFFSET UNITYSDK_OFFSET(0x160D2630)

inline static constexpr unsigned int Class_1_B2BE7DD8030FE481_TypeDefinitionIndex = 73283;

class Class_1_B2BE7DD8030FE481 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_AKGDJAPIODG()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B2BE7DD8030FE481_TypeDefinitionIndex)->GetStaticField(0x2D1B0);
	}
	::System::Int32 _Precision_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2BE7DD8030FE481__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B2BE7DD8030FE481__CCTOR_OFFSET))();
	}

	::System::Void Method_1_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B2BE7DD8030FE481_METHOD_1_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2BE7DD8030FE481_CLEAR_OFFSET))(this);
	}

	::System::String* Method_1_6F9CBAA646FD53ED(::System::Object* a1, ::Struct_2_F5FBDA629A1B439F a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Object*, ::Struct_2_F5FBDA629A1B439F))((::PBYTE)hIl2Cpp + CLASS_1_B2BE7DD8030FE481_METHOD_1_6F9CBAA646FD53ED_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_1_BAD919AA5E7DD49E(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B2BE7DD8030FE481_METHOD_1_BAD919AA5E7DD49E_OFFSET))(a1);
	}

	static ::System::String* Method_1_A392A2473EAD53B0(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B2BE7DD8030FE481_METHOD_1_A392A2473EAD53B0_OFFSET))(a1);
	}

	::System::Int32 get_Precision()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2BE7DD8030FE481_GET_PRECISION_OFFSET))(this);
	}

	::System::Void set_Precision(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B2BE7DD8030FE481_SET_PRECISION_OFFSET))(this, a1);
	}
};
