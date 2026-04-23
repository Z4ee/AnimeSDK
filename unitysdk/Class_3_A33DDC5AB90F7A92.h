#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_974C6A58562BEDDD.h"

namespace System { class String; }

#define CLASS_3_A33DDC5AB90F7A92_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xEC97BF0)
#define CLASS_3_A33DDC5AB90F7A92_METHOD_3_2B3250E65C1E5B84_OFFSET UNITYSDK_OFFSET(0xEC97EC0)
#define CLASS_3_A33DDC5AB90F7A92_METHOD_3_3E58295989E22B1D_OFFSET UNITYSDK_OFFSET(0xEC97C60)
#define CLASS_3_A33DDC5AB90F7A92__CTOR_OFFSET UNITYSDK_OFFSET(0xEC97E20)
#define CLASS_3_A33DDC5AB90F7A92___IFIXBASEPROXY_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xEC97E50)

inline static constexpr unsigned int Class_3_A33DDC5AB90F7A92_TypeDefinitionIndex = 54884;

class Class_3_A33DDC5AB90F7A92 : public ::Class_2_974C6A58562BEDDD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A33DDC5AB90F7A92__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A33DDC5AB90F7A92_GETTYPENAME_OFFSET))(this);
	}

	::System::Boolean Method_3_3E58295989E22B1D(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A33DDC5AB90F7A92_METHOD_3_3E58295989E22B1D_OFFSET))(this, a1, a2);
	}

	::System::String* __iFixBaseProxy_GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A33DDC5AB90F7A92___IFIXBASEPROXY_GETTYPENAME_OFFSET))(this);
	}

	::System::Boolean Method_3_2B3250E65C1E5B84(::System::String* P0, ::System::String* P1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_A33DDC5AB90F7A92_METHOD_3_2B3250E65C1E5B84_OFFSET))(this, P0, P1);
	}
};
