#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5BE136E515AF9A61;

#define CLASS_1_AC00AF6C29094205_DISPOSE_OFFSET UNITYSDK_OFFSET(0x180C9F40)
#define CLASS_1_AC00AF6C29094205_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x180CA030)
#define CLASS_1_AC00AF6C29094205_METHOD_1_D25CFA28E8C200FE_OFFSET UNITYSDK_OFFSET(0x180CA120)
#define CLASS_1_AC00AF6C29094205_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x180CA380)
#define CLASS_1_AC00AF6C29094205_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x180CA370)
#define CLASS_1_AC00AF6C29094205__CTOR_OFFSET UNITYSDK_OFFSET(0x180C9F30)

inline static constexpr unsigned int Class_1_AC00AF6C29094205_TypeDefinitionIndex = 40036;

class Class_1_AC00AF6C29094205 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_5BE136E515AF9A61*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::Boolean Field_1_3; // 0x1D

	::System::Void _ctor(::Il2CppArray<::Class_1_5BE136E515AF9A61*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_5BE136E515AF9A61*>*))((::PBYTE)hIl2Cpp + CLASS_1_AC00AF6C29094205__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC00AF6C29094205_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC00AF6C29094205_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_D25CFA28E8C200FE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AC00AF6C29094205_METHOD_1_D25CFA28E8C200FE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC00AF6C29094205_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AC00AF6C29094205_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
