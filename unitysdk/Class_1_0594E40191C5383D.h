#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5111A21FA8B904B1;
class Class_2_0C6C16B1BEC73D49;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0594E40191C5383D_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x1A895990)
#define CLASS_1_0594E40191C5383D_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x1A8959B0)
#define CLASS_1_0594E40191C5383D_METHOD_1_58BA0C8308C8127F_OFFSET UNITYSDK_OFFSET(0x1A8959A0)
#define CLASS_1_0594E40191C5383D_METHOD_1_5D060AEFC9F7D9B8_OFFSET UNITYSDK_OFFSET(0x1A8959C0)
#define CLASS_1_0594E40191C5383D_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x1A895940)
#define CLASS_1_0594E40191C5383D__CTOR_OFFSET UNITYSDK_OFFSET(0x1A895710)

inline static constexpr unsigned int Class_1_0594E40191C5383D_TypeDefinitionIndex = 70179;

class Class_1_0594E40191C5383D : public ::System::Object
{
public:
	::Class_2_0C6C16B1BEC73D49* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_5111A21FA8B904B1*>* Field_1_1; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_5111A21FA8B904B1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5111A21FA8B904B1*>*))((::PBYTE)hIl2Cpp + CLASS_1_0594E40191C5383D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0594E40191C5383D_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::Class_2_0C6C16B1BEC73D49* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_0C6C16B1BEC73D49*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0594E40191C5383D_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_1_58BA0C8308C8127F(::Class_2_0C6C16B1BEC73D49* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C6C16B1BEC73D49*))((::PBYTE)hIl2Cpp + CLASS_1_0594E40191C5383D_METHOD_1_58BA0C8308C8127F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_5111A21FA8B904B1*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5111A21FA8B904B1*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0594E40191C5383D_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::Void Method_1_5D060AEFC9F7D9B8(::System::Collections::Generic::List_1<::Class_1_5111A21FA8B904B1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_5111A21FA8B904B1*>*))((::PBYTE)hIl2Cpp + CLASS_1_0594E40191C5383D_METHOD_1_5D060AEFC9F7D9B8_OFFSET))(this, a1);
	}
};
