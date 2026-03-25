#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F5FBDA629A1B439F.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_AB1E9F29BD504EC6_CLEAR_OFFSET UNITYSDK_OFFSET(0x8853490)
#define CLASS_1_AB1E9F29BD504EC6_GET_PRECISION_OFFSET UNITYSDK_OFFSET(0x8853880)
#define CLASS_1_AB1E9F29BD504EC6_METHOD_1_61D184BC8FA63250_OFFSET UNITYSDK_OFFSET(0x88534E0)
#define CLASS_1_AB1E9F29BD504EC6_METHOD_1_A10567177DDE0779_OFFSET UNITYSDK_OFFSET(0x8853820)
#define CLASS_1_AB1E9F29BD504EC6_METHOD_1_BAD919AA5E7DD49E_OFFSET UNITYSDK_OFFSET(0x8853630)
#define CLASS_1_AB1E9F29BD504EC6_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x8853410)
#define CLASS_1_AB1E9F29BD504EC6_SET_PRECISION_OFFSET UNITYSDK_OFFSET(0x8853890)
#define CLASS_1_AB1E9F29BD504EC6__CCTOR_OFFSET UNITYSDK_OFFSET(0x88538B0)
#define CLASS_1_AB1E9F29BD504EC6__CTOR_OFFSET UNITYSDK_OFFSET(0x88538A0)

inline static constexpr unsigned int Class_1_AB1E9F29BD504EC6_TypeDefinitionIndex = 60154;

class Class_1_AB1E9F29BD504EC6 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB1E9F29BD504EC6_TypeDefinitionIndex)->GetStaticField(0x48E50);
	}
	::System::Int32 _Precision_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB1E9F29BD504EC6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB1E9F29BD504EC6__CCTOR_OFFSET))();
	}

	::System::Void Method_1_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB1E9F29BD504EC6_METHOD_1_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB1E9F29BD504EC6_CLEAR_OFFSET))(this);
	}

	::System::String* Method_1_61D184BC8FA63250(::System::Object* a1, ::Struct_2_F5FBDA629A1B439F a2)
	{
		return ((::System::String*(*)(::PVOID, ::System::Object*, ::Struct_2_F5FBDA629A1B439F))((::PBYTE)hIl2Cpp + CLASS_1_AB1E9F29BD504EC6_METHOD_1_61D184BC8FA63250_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_1_BAD919AA5E7DD49E(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB1E9F29BD504EC6_METHOD_1_BAD919AA5E7DD49E_OFFSET))(a1);
	}

	static ::System::String* Method_1_A10567177DDE0779(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB1E9F29BD504EC6_METHOD_1_A10567177DDE0779_OFFSET))(a1);
	}

	::System::Int32 get_Precision()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB1E9F29BD504EC6_GET_PRECISION_OFFSET))(this);
	}

	::System::Void set_Precision(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB1E9F29BD504EC6_SET_PRECISION_OFFSET))(this, value);
	}
};
