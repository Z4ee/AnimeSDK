#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_62355CAF578E9139.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1073;
class Class_1_AB817CB39E494C61;
class Class_1_DDDB57AA67C3A9EA;
class Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B284D3458611CEA4_1_GET_ITEMDATAS_OFFSET UNITYSDK_OFFSET(0x116635D0)
#define CLASS_1_B284D3458611CEA4_1_METHOD_1_04B5EDB18FECE00C_OFFSET UNITYSDK_OFFSET(0x11662FF0)
#define CLASS_1_B284D3458611CEA4_1_METHOD_1_0EB28B1F0846B4BC_OFFSET UNITYSDK_OFFSET(0x11662C40)
#define CLASS_1_B284D3458611CEA4_1_METHOD_1_225C8D590632358C_OFFSET UNITYSDK_OFFSET(0x11663100)
#define CLASS_1_B284D3458611CEA4_1_METHOD_1_53F8E7A039DF377D_OFFSET UNITYSDK_OFFSET(0x11662D60)
#define CLASS_1_B284D3458611CEA4_1_METHOD_1_A99EF338505A0EA9_OFFSET UNITYSDK_OFFSET(0x11663080)
#define CLASS_1_B284D3458611CEA4_1_SET_ITEMDATAS_OFFSET UNITYSDK_OFFSET(0x116635E0)
#define CLASS_1_B284D3458611CEA4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11662D50)

inline static constexpr unsigned int Class_1_B284D3458611CEA4_1_TypeDefinitionIndex = 68898;

class Class_1_B284D3458611CEA4_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* _ItemDatas_k__BackingField; // 0x10
	::Class_1_AB817CB39E494C61* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B284D3458611CEA4_1__CTOR_OFFSET))(this);
	}

	static ::Class_1_B284D3458611CEA4_1* Method_1_0EB28B1F0846B4BC(::Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C* a1)
	{
		return ((::Class_1_B284D3458611CEA4_1*(*)(::Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C*))((::PBYTE)hIl2Cpp + CLASS_1_B284D3458611CEA4_1_METHOD_1_0EB28B1F0846B4BC_OFFSET))(a1);
	}

	::System::Void Method_1_53F8E7A039DF377D(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_B284D3458611CEA4_1_METHOD_1_53F8E7A039DF377D_OFFSET))(this, a1);
	}

	::System::Void Method_1_04B5EDB18FECE00C(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_B284D3458611CEA4_1_METHOD_1_04B5EDB18FECE00C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A99EF338505A0EA9(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_B284D3458611CEA4_1_METHOD_1_A99EF338505A0EA9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1073*>* Method_1_225C8D590632358C(::System::Collections::Generic::List_1<::Struct_2_62355CAF578E9139>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1073*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_62355CAF578E9139>*))((::PBYTE)hIl2Cpp + CLASS_1_B284D3458611CEA4_1_METHOD_1_225C8D590632358C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* get_ItemDatas()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B284D3458611CEA4_1_GET_ITEMDATAS_OFFSET))(this);
	}

	::System::Void set_ItemDatas(::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*))((::PBYTE)hIl2Cpp + CLASS_1_B284D3458611CEA4_1_SET_ITEMDATAS_OFFSET))(this, a1);
	}
};
