#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_11064A0D75F7D72B;
class Class_1_9D53176EF8570D3B;
class Class_1_CC76D1702CC17C09_4;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B6808D299FB635FC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1621B6B0)
#define CLASS_1_B6808D299FB635FC_GET_PROPITEMS_OFFSET UNITYSDK_OFFSET(0x1621BD20)
#define CLASS_1_B6808D299FB635FC_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1621B880)
#define CLASS_1_B6808D299FB635FC_METHOD_1_26851B7740A8223E_OFFSET UNITYSDK_OFFSET(0x1621BAE0)
#define CLASS_1_B6808D299FB635FC_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x1621B660)
#define CLASS_1_B6808D299FB635FC_METHOD_1_6F7D09EFE0AA727D_OFFSET UNITYSDK_OFFSET(0x1621B4B0)
#define CLASS_1_B6808D299FB635FC_METHOD_1_722E1524F560C8AF_OFFSET UNITYSDK_OFFSET(0x1621B9B0)
#define CLASS_1_B6808D299FB635FC_METHOD_1_AC088C028EF9B921_OFFSET UNITYSDK_OFFSET(0x1621B570)
#define CLASS_1_B6808D299FB635FC_METHOD_1_E484621534821291_OFFSET UNITYSDK_OFFSET(0x1621B8E0)
#define CLASS_1_B6808D299FB635FC_SET_PROPITEMS_OFFSET UNITYSDK_OFFSET(0x1621BD30)
#define CLASS_1_B6808D299FB635FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1621B530)

inline static constexpr unsigned int Class_1_B6808D299FB635FC_TypeDefinitionIndex = 68244;

class Class_1_B6808D299FB635FC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_9D53176EF8570D3B*>* _PropItems_k__BackingField; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6808D299FB635FC__CTOR_OFFSET))(this);
	}

	static ::Class_1_B6808D299FB635FC* Method_1_6F7D09EFE0AA727D(::System::Int32 a1)
	{
		return ((::Class_1_B6808D299FB635FC*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B6808D299FB635FC_METHOD_1_6F7D09EFE0AA727D_OFFSET))(a1);
	}

	::System::Void Method_1_AC088C028EF9B921(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B6808D299FB635FC_METHOD_1_AC088C028EF9B921_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B6808D299FB635FC_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6808D299FB635FC_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6808D299FB635FC_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_E484621534821291(::Class_1_11064A0D75F7D72B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_11064A0D75F7D72B*))((::PBYTE)hIl2Cpp + CLASS_1_B6808D299FB635FC_METHOD_1_E484621534821291_OFFSET))(this, a1);
	}

	::System::Void Method_1_722E1524F560C8AF(::Class_1_CC76D1702CC17C09_4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC76D1702CC17C09_4*))((::PBYTE)hIl2Cpp + CLASS_1_B6808D299FB635FC_METHOD_1_722E1524F560C8AF_OFFSET))(this, a1);
	}

	::System::Void Method_1_26851B7740A8223E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B6808D299FB635FC_METHOD_1_26851B7740A8223E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_9D53176EF8570D3B*>* get_PropItems()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_9D53176EF8570D3B*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6808D299FB635FC_GET_PROPITEMS_OFFSET))(this);
	}

	::System::Void set_PropItems(::System::Collections::Generic::List_1<::Class_1_9D53176EF8570D3B*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_9D53176EF8570D3B*>*))((::PBYTE)hIl2Cpp + CLASS_1_B6808D299FB635FC_SET_PROPITEMS_OFFSET))(this, a1);
	}
};
