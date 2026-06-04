#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2A1BB8EAC9D2CDE7.h"

class Class_0_16E4307DCC419505_68;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_3_60C32E1812D076AE_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x10C8CD10)
#define CLASS_3_60C32E1812D076AE_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x10C8CD80)
#define CLASS_3_60C32E1812D076AE__CTOR_OFFSET UNITYSDK_OFFSET(0x10C8CE30)
#define CLASS_3_60C32E1812D076AE___IFIXBASEPROXY_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x10C8CEF0)
#define CLASS_3_60C32E1812D076AE___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x10C8CF50)
#define CLASS_3_60C32E1812D076AE___N__0_OFFSET UNITYSDK_OFFSET(0x10C8CE60)

inline static constexpr unsigned int Class_3_60C32E1812D076AE_TypeDefinitionIndex = 55612;

class Class_3_60C32E1812D076AE : public ::Class_2_2A1BB8EAC9D2CDE7
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60C32E1812D076AE__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60C32E1812D076AE_GETTYPENAME_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60C32E1812D076AE_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>* __n__0()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60C32E1812D076AE___N__0_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60C32E1812D076AE___IFIXBASEPROXY_GETTYPENAME_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>* __iFixBaseProxy_OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_68*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_60C32E1812D076AE___IFIXBASEPROXY_ONENUMBLOCKITEMS_OFFSET))(this);
	}
};
