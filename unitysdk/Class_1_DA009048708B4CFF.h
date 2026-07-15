#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5BE136E515AF9A61_1;

#define CLASS_1_DA009048708B4CFF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AE2B700)
#define CLASS_1_DA009048708B4CFF_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1AE2B7F0)
#define CLASS_1_DA009048708B4CFF_METHOD_1_D25CFA28E8C200FE_OFFSET UNITYSDK_OFFSET(0x1AE2B8E0)
#define CLASS_1_DA009048708B4CFF_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1AE2BB40)
#define CLASS_1_DA009048708B4CFF_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1AE2BB30)
#define CLASS_1_DA009048708B4CFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE2B6F0)

inline static constexpr unsigned int Class_1_DA009048708B4CFF_TypeDefinitionIndex = 40300;

class Class_1_DA009048708B4CFF : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_5BE136E515AF9A61_1*>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::Boolean Field_1_3; // 0x1D

	::System::Void _ctor(::Il2CppArray<::Class_1_5BE136E515AF9A61_1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_5BE136E515AF9A61_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_DA009048708B4CFF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA009048708B4CFF_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA009048708B4CFF_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_D25CFA28E8C200FE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DA009048708B4CFF_METHOD_1_D25CFA28E8C200FE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA009048708B4CFF_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA009048708B4CFF_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
