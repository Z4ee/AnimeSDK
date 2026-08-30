#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8885F8F36A0762BF.h"

class Class_0_16E4307DCC419505_87;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_3_9E501D3882FC1680_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x18707060)
#define CLASS_3_9E501D3882FC1680_ONENUMBLOCKITEMS_OFFSET UNITYSDK_OFFSET(0x187070D0)
#define CLASS_3_9E501D3882FC1680__CTOR_OFFSET UNITYSDK_OFFSET(0x18707180)
#define CLASS_3_9E501D3882FC1680___N__0_OFFSET UNITYSDK_OFFSET(0x187071B0)

inline static constexpr unsigned int Class_3_9E501D3882FC1680_TypeDefinitionIndex = 59637;

class Class_3_9E501D3882FC1680 : public ::Class_2_8885F8F36A0762BF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E501D3882FC1680__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E501D3882FC1680_GETTYPENAME_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>* OnEnumBlockItems()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E501D3882FC1680_ONENUMBLOCKITEMS_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>* __n__0()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_87*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9E501D3882FC1680___N__0_OFFSET))(this);
	}
};
