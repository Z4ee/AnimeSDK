#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3487C21D96C73186.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_3_E09386B0C85F8D74_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xB2B92A0)
#define CLASS_3_E09386B0C85F8D74_METHOD_3_442FB31BA698F929_OFFSET UNITYSDK_OFFSET(0xB2B9570)
#define CLASS_3_E09386B0C85F8D74_METHOD_3_80AB9FE872522C40_OFFSET UNITYSDK_OFFSET(0xB2B9650)
#define CLASS_3_E09386B0C85F8D74_METHOD_3_CA1744CA167C6AAE_OFFSET UNITYSDK_OFFSET(0xB2B9310)
#define CLASS_3_E09386B0C85F8D74__CTOR_OFFSET UNITYSDK_OFFSET(0xB2B9630)
#define CLASS_3_E09386B0C85F8D74___IFIXBASEPROXY_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xB2B9640)

inline static constexpr unsigned int Class_3_E09386B0C85F8D74_TypeDefinitionIndex = 55607;

class Class_3_E09386B0C85F8D74 : public ::Class_2_3487C21D96C73186
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E09386B0C85F8D74__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E09386B0C85F8D74_GETTYPENAME_OFFSET))(this);
	}

	::System::Boolean Method_3_CA1744CA167C6AAE(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E09386B0C85F8D74_METHOD_3_CA1744CA167C6AAE_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_3_442FB31BA698F929(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_E09386B0C85F8D74_METHOD_3_442FB31BA698F929_OFFSET))(this, a1);
	}

	::System::String* __iFixBaseProxy_GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E09386B0C85F8D74___IFIXBASEPROXY_GETTYPENAME_OFFSET))(this);
	}

	::System::Boolean Method_3_80AB9FE872522C40(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E09386B0C85F8D74_METHOD_3_80AB9FE872522C40_OFFSET))(this, a1, a2);
	}
};
