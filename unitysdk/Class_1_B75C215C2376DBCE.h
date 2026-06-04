#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_62355CAF578E9139.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1030;
class Class_1_AB817CB39E494C61;
class Class_1_DDDB57AA67C3A9EA;
class Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B75C215C2376DBCE_GET_ITEMDATAS_OFFSET UNITYSDK_OFFSET(0x145FBC70)
#define CLASS_1_B75C215C2376DBCE_METHOD_1_0EB28B1F0846B4BC_OFFSET UNITYSDK_OFFSET(0x145FB2C0)
#define CLASS_1_B75C215C2376DBCE_METHOD_1_225C8D590632358C_OFFSET UNITYSDK_OFFSET(0x145FB800)
#define CLASS_1_B75C215C2376DBCE_METHOD_1_390623AF74E8C979_OFFSET UNITYSDK_OFFSET(0x145FB3E0)
#define CLASS_1_B75C215C2376DBCE_METHOD_1_59760BD7F2ED7128_OFFSET UNITYSDK_OFFSET(0x145FB670)
#define CLASS_1_B75C215C2376DBCE_METHOD_1_A99EF338505A0EA9_OFFSET UNITYSDK_OFFSET(0x145FB780)
#define CLASS_1_B75C215C2376DBCE_SET_ITEMDATAS_OFFSET UNITYSDK_OFFSET(0x145FBC80)
#define CLASS_1_B75C215C2376DBCE__CTOR_OFFSET UNITYSDK_OFFSET(0x145FB3D0)

inline static constexpr unsigned int Class_1_B75C215C2376DBCE_TypeDefinitionIndex = 67426;

class Class_1_B75C215C2376DBCE : public ::System::Object
{
public:
	::Class_1_AB817CB39E494C61* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* _ItemDatas_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B75C215C2376DBCE__CTOR_OFFSET))(this);
	}

	static ::Class_1_B75C215C2376DBCE* Method_1_0EB28B1F0846B4BC(::Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C* a1)
	{
		return ((::Class_1_B75C215C2376DBCE*(*)(::Class_2_6B57C0CB1CF5E075_Class_1_6B4516C2BEC1D29C*))((::PBYTE)hIl2Cpp + CLASS_1_B75C215C2376DBCE_METHOD_1_0EB28B1F0846B4BC_OFFSET))(a1);
	}

	::System::Void Method_1_390623AF74E8C979(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_B75C215C2376DBCE_METHOD_1_390623AF74E8C979_OFFSET))(this, a1);
	}

	::System::Void Method_1_59760BD7F2ED7128(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_B75C215C2376DBCE_METHOD_1_59760BD7F2ED7128_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A99EF338505A0EA9(::Class_1_DDDB57AA67C3A9EA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_DDDB57AA67C3A9EA*))((::PBYTE)hIl2Cpp + CLASS_1_B75C215C2376DBCE_METHOD_1_A99EF338505A0EA9_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1030*>* Method_1_225C8D590632358C(::System::Collections::Generic::List_1<::Struct_2_62355CAF578E9139>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1030*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_62355CAF578E9139>*))((::PBYTE)hIl2Cpp + CLASS_1_B75C215C2376DBCE_METHOD_1_225C8D590632358C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* get_ItemDatas()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B75C215C2376DBCE_GET_ITEMDATAS_OFFSET))(this);
	}

	::System::Void set_ItemDatas(::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_DDDB57AA67C3A9EA*>*))((::PBYTE)hIl2Cpp + CLASS_1_B75C215C2376DBCE_SET_ITEMDATAS_OFFSET))(this, a1);
	}
};
