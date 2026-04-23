#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9DA230C274FDC44F;

#define CLASS_1_67E154B8FD4BA1BB_CLASS_1_662B76620AE6398F_METHOD_1_1F365A6231C7C8C0_OFFSET UNITYSDK_OFFSET(0x19206910)
#define CLASS_1_67E154B8FD4BA1BB_CLASS_1_662B76620AE6398F_METHOD_1_BC16818B1CFDA17F_OFFSET UNITYSDK_OFFSET(0x19206920)
#define CLASS_1_67E154B8FD4BA1BB_CLASS_1_662B76620AE6398F_METHOD_1_CC34C309EBB23411_OFFSET UNITYSDK_OFFSET(0x19206250)
#define CLASS_1_67E154B8FD4BA1BB_CLASS_1_662B76620AE6398F__CTOR_OFFSET UNITYSDK_OFFSET(0x19206200)

inline static constexpr unsigned int Class_1_67E154B8FD4BA1BB_Class_1_662B76620AE6398F_TypeDefinitionIndex = 8777;

class Class_1_67E154B8FD4BA1BB_Class_1_662B76620AE6398F : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* Field_1_2; // 0x10
	::System::Int32 Field_1_0; // 0x18
	::System::Single Field_1_3; // 0x1C
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_67E154B8FD4BA1BB_CLASS_1_662B76620AE6398F__CTOR_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Single>* Method_1_1F365A6231C7C8C0()
	{
		return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67E154B8FD4BA1BB_CLASS_1_662B76620AE6398F_METHOD_1_1F365A6231C7C8C0_OFFSET))(this);
	}

	::System::Boolean Method_1_BC16818B1CFDA17F(::Class_1_9DA230C274FDC44F* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Single& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9DA230C274FDC44F*, ::System::Single, ::System::Single, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_67E154B8FD4BA1BB_CLASS_1_662B76620AE6398F_METHOD_1_BC16818B1CFDA17F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_CC34C309EBB23411(::Class_1_9DA230C274FDC44F* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9DA230C274FDC44F*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_67E154B8FD4BA1BB_CLASS_1_662B76620AE6398F_METHOD_1_CC34C309EBB23411_OFFSET))(this, a1, a2, a3, a4);
	}
};
