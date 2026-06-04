#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_72710C1D0F2BEFEA.h"

namespace System { class String; }

#define CLASS_3_90CC8B85CFA9144E_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xA96FDC0)
#define CLASS_3_90CC8B85CFA9144E_METHOD_3_38BAA9FE7B7CD721_OFFSET UNITYSDK_OFFSET(0xA970060)
#define CLASS_3_90CC8B85CFA9144E_METHOD_3_3E58295989E22B1D_OFFSET UNITYSDK_OFFSET(0xA96FE30)
#define CLASS_3_90CC8B85CFA9144E__CTOR_OFFSET UNITYSDK_OFFSET(0xA96FFD0)
#define CLASS_3_90CC8B85CFA9144E___IFIXBASEPROXY_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xA970000)

inline static constexpr unsigned int Class_3_90CC8B85CFA9144E_TypeDefinitionIndex = 55614;

class Class_3_90CC8B85CFA9144E : public ::Class_2_72710C1D0F2BEFEA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90CC8B85CFA9144E__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90CC8B85CFA9144E_GETTYPENAME_OFFSET))(this);
	}

	::System::Boolean Method_3_3E58295989E22B1D(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_90CC8B85CFA9144E_METHOD_3_3E58295989E22B1D_OFFSET))(this, a1, a2);
	}

	::System::String* __iFixBaseProxy_GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90CC8B85CFA9144E___IFIXBASEPROXY_GETTYPENAME_OFFSET))(this);
	}

	::System::Boolean Method_3_38BAA9FE7B7CD721(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_90CC8B85CFA9144E_METHOD_3_38BAA9FE7B7CD721_OFFSET))(this, a1, a2);
	}
};
