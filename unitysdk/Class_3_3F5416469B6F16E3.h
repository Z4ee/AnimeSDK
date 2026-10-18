#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5D2387066E2BACFE.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_3_3F5416469B6F16E3_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xC748080)
#define CLASS_3_3F5416469B6F16E3_METHOD_3_442FB31BA698F929_OFFSET UNITYSDK_OFFSET(0xC7483A0)
#define CLASS_3_3F5416469B6F16E3_METHOD_3_FD054DA662551570_OFFSET UNITYSDK_OFFSET(0xC7480F0)
#define CLASS_3_3F5416469B6F16E3__CTOR_OFFSET UNITYSDK_OFFSET(0xC748460)

inline static constexpr unsigned int Class_3_3F5416469B6F16E3_TypeDefinitionIndex = 59487;

class Class_3_3F5416469B6F16E3 : public ::Class_2_5D2387066E2BACFE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F5416469B6F16E3__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3F5416469B6F16E3_GETTYPENAME_OFFSET))(this);
	}

	::System::Boolean Method_3_FD054DA662551570(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3F5416469B6F16E3_METHOD_3_FD054DA662551570_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_3_442FB31BA698F929(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3F5416469B6F16E3_METHOD_3_442FB31BA698F929_OFFSET))(this, a1);
	}
};
