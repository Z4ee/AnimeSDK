#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_7B2C949E9A2AA065.h"

class Class_0_16E4307DCC419505_69;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_3_2FC2494FD325AA4E_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xF3646B0)
#define CLASS_3_2FC2494FD325AA4E_METHOD_3_442FB31BA698F929_OFFSET UNITYSDK_OFFSET(0xF364900)
#define CLASS_3_2FC2494FD325AA4E_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xF3647D0)
#define CLASS_3_2FC2494FD325AA4E_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xF364720)
#define CLASS_3_2FC2494FD325AA4E__CTOR_OFFSET UNITYSDK_OFFSET(0xF3649C0)
#define CLASS_3_2FC2494FD325AA4E___IFIXBASEPROXY_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xF364A30)
#define CLASS_3_2FC2494FD325AA4E___IFIXBASEPROXY_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xF364B60)
#define CLASS_3_2FC2494FD325AA4E___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0xF364AA0)
#define CLASS_3_2FC2494FD325AA4E___N__0_OFFSET UNITYSDK_OFFSET(0xF3649F0)

inline static constexpr unsigned int Class_3_2FC2494FD325AA4E_TypeDefinitionIndex = 48134;

class Class_3_2FC2494FD325AA4E : public ::Class_2_7B2C949E9A2AA065
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FC2494FD325AA4E__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FC2494FD325AA4E_GETTYPENAME_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FC2494FD325AA4E_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FC2494FD325AA4E_ONALLSUCCEED_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_3_442FB31BA698F929(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2FC2494FD325AA4E_METHOD_3_442FB31BA698F929_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>* __n__0()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FC2494FD325AA4E___N__0_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FC2494FD325AA4E___IFIXBASEPROXY_GETTYPENAME_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>* __iFixBaseProxy_OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_69*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FC2494FD325AA4E___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FC2494FD325AA4E___IFIXBASEPROXY_ONALLSUCCEED_OFFSET))(this);
	}
};
