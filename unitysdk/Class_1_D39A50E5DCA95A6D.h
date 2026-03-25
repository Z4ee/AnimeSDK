#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_69;
class Class_1_1EC46AA8769DF299;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D39A50E5DCA95A6D_METHOD_1_00DB1B1197C37C43_OFFSET UNITYSDK_OFFSET(0x164F18C0)
#define CLASS_1_D39A50E5DCA95A6D_METHOD_1_3E0C0431E8452973_OFFSET UNITYSDK_OFFSET(0x164F1D00)
#define CLASS_1_D39A50E5DCA95A6D_METHOD_1_5730F915B88FB854_OFFSET UNITYSDK_OFFSET(0x164F1960)
#define CLASS_1_D39A50E5DCA95A6D_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x164F19F0)
#define CLASS_1_D39A50E5DCA95A6D_METHOD_1_D4718453C79689B9_1_OFFSET UNITYSDK_OFFSET(0x164F1BA0)
#define CLASS_1_D39A50E5DCA95A6D_METHOD_1_D4718453C79689B9_OFFSET UNITYSDK_OFFSET(0x164F1A40)
#define CLASS_1_D39A50E5DCA95A6D_METHOD_1_E070EB4E39E33718_OFFSET UNITYSDK_OFFSET(0x164F1D90)
#define CLASS_1_D39A50E5DCA95A6D__CTOR_OFFSET UNITYSDK_OFFSET(0x164F2190)

inline static constexpr unsigned int Class_1_D39A50E5DCA95A6D_TypeDefinitionIndex = 32070;

class Class_1_D39A50E5DCA95A6D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_1EC46AA8769DF299*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D39A50E5DCA95A6D__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_69* Method_1_00DB1B1197C37C43(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_69*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D39A50E5DCA95A6D_METHOD_1_00DB1B1197C37C43_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_69* Method_1_5730F915B88FB854(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_69*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D39A50E5DCA95A6D_METHOD_1_5730F915B88FB854_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D39A50E5DCA95A6D_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Boolean Method_1_D4718453C79689B9(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D39A50E5DCA95A6D_METHOD_1_D4718453C79689B9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D4718453C79689B9_1(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D39A50E5DCA95A6D_METHOD_1_D4718453C79689B9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E0C0431E8452973(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D39A50E5DCA95A6D_METHOD_1_3E0C0431E8452973_OFFSET))(this, a1);
	}

	static ::Class_1_D39A50E5DCA95A6D* Method_1_E070EB4E39E33718(::System::String* a1)
	{
		return ((::Class_1_D39A50E5DCA95A6D*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D39A50E5DCA95A6D_METHOD_1_E070EB4E39E33718_OFFSET))(a1);
	}
};
