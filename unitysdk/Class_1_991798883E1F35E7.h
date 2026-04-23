#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_11064A0D75F7D72B;
class Class_1_9D53176EF8570D3B;
class Class_1_CC76D1702CC17C09_4;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_991798883E1F35E7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F84730)
#define CLASS_1_991798883E1F35E7_GET_PROPITEMS_OFFSET UNITYSDK_OFFSET(0x8F84D40)
#define CLASS_1_991798883E1F35E7_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x8F848F0)
#define CLASS_1_991798883E1F35E7_METHOD_1_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0x8F84A00)
#define CLASS_1_991798883E1F35E7_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x8F846E0)
#define CLASS_1_991798883E1F35E7_METHOD_1_6F7D09EFE0AA727D_OFFSET UNITYSDK_OFFSET(0x8F84580)
#define CLASS_1_991798883E1F35E7_METHOD_1_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x8F84950)
#define CLASS_1_991798883E1F35E7_METHOD_1_EE2957687AFE92A5_OFFSET UNITYSDK_OFFSET(0x8F84B10)
#define CLASS_1_991798883E1F35E7_METHOD_1_F624506052E4790C_OFFSET UNITYSDK_OFFSET(0x8F84640)
#define CLASS_1_991798883E1F35E7_SET_PROPITEMS_OFFSET UNITYSDK_OFFSET(0x8F84D50)
#define CLASS_1_991798883E1F35E7__CTOR_OFFSET UNITYSDK_OFFSET(0x8F84600)

inline static constexpr unsigned int Class_1_991798883E1F35E7_TypeDefinitionIndex = 65870;

class Class_1_991798883E1F35E7 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_9D53176EF8570D3B*>* _PropItems_k__BackingField; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_991798883E1F35E7__CTOR_OFFSET))(this);
	}

	static ::Class_1_991798883E1F35E7* Method_1_6F7D09EFE0AA727D(::System::Int32 a1)
	{
		return ((::Class_1_991798883E1F35E7*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_991798883E1F35E7_METHOD_1_6F7D09EFE0AA727D_OFFSET))(a1);
	}

	::System::Void Method_1_F624506052E4790C(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_991798883E1F35E7_METHOD_1_F624506052E4790C_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_991798883E1F35E7_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_991798883E1F35E7_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_991798883E1F35E7_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_70603E2AE56EBD6B(::Class_1_11064A0D75F7D72B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11064A0D75F7D72B*))((::PBYTE)hIl2Cpp + CLASS_1_991798883E1F35E7_METHOD_1_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::System::Void Method_1_369BB5E7FA6A1768(::Class_1_CC76D1702CC17C09_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC76D1702CC17C09_4*))((::PBYTE)hIl2Cpp + CLASS_1_991798883E1F35E7_METHOD_1_369BB5E7FA6A1768_OFFSET))(this, a1);
	}

	::System::Void Method_1_EE2957687AFE92A5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_991798883E1F35E7_METHOD_1_EE2957687AFE92A5_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_9D53176EF8570D3B*>* get_PropItems()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9D53176EF8570D3B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_991798883E1F35E7_GET_PROPITEMS_OFFSET))(this);
	}

	::System::Void set_PropItems(::System::Collections::Generic::List_1<::Class_1_9D53176EF8570D3B*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_9D53176EF8570D3B*>*))((::PBYTE)hIl2Cpp + CLASS_1_991798883E1F35E7_SET_PROPITEMS_OFFSET))(this, value);
	}
};
