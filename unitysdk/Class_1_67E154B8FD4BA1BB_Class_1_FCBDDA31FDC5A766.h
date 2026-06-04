#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9DA230C274FDC44F;

#define CLASS_1_67E154B8FD4BA1BB_CLASS_1_FCBDDA31FDC5A766_METHOD_1_1F365A6231C7C8C0_OFFSET UNITYSDK_OFFSET(0x19F13410)
#define CLASS_1_67E154B8FD4BA1BB_CLASS_1_FCBDDA31FDC5A766_METHOD_1_7F36B89A1FE2FA3E_OFFSET UNITYSDK_OFFSET(0x19F13420)
#define CLASS_1_67E154B8FD4BA1BB_CLASS_1_FCBDDA31FDC5A766_METHOD_1_CC34C309EBB23411_OFFSET UNITYSDK_OFFSET(0x19F12E50)
#define CLASS_1_67E154B8FD4BA1BB_CLASS_1_FCBDDA31FDC5A766__CTOR_OFFSET UNITYSDK_OFFSET(0x19F12E10)

inline static constexpr unsigned int Class_1_67E154B8FD4BA1BB_Class_1_FCBDDA31FDC5A766_TypeDefinitionIndex = 6641;

class Class_1_67E154B8FD4BA1BB_Class_1_FCBDDA31FDC5A766 : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x1C
	::System::Int32 Field_1_3; // 0x20

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_67E154B8FD4BA1BB_CLASS_1_FCBDDA31FDC5A766__CTOR_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Single>* Method_1_1F365A6231C7C8C0()
	{
		return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67E154B8FD4BA1BB_CLASS_1_FCBDDA31FDC5A766_METHOD_1_1F365A6231C7C8C0_OFFSET))(this);
	}

	::System::Boolean Method_1_7F36B89A1FE2FA3E(::Class_1_9DA230C274FDC44F* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4, ::System::Single& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9DA230C274FDC44F*, ::System::Single, ::System::Single, ::System::Int32, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_67E154B8FD4BA1BB_CLASS_1_FCBDDA31FDC5A766_METHOD_1_7F36B89A1FE2FA3E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_CC34C309EBB23411(::Class_1_9DA230C274FDC44F* a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9DA230C274FDC44F*, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_67E154B8FD4BA1BB_CLASS_1_FCBDDA31FDC5A766_METHOD_1_CC34C309EBB23411_OFFSET))(this, a1, a2, a3, a4);
	}
};
