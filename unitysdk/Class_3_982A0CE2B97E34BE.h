#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5D2387066E2BACFE.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_3_982A0CE2B97E34BE_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xC7BBF00)
#define CLASS_3_982A0CE2B97E34BE_METHOD_3_442FB31BA698F929_OFFSET UNITYSDK_OFFSET(0xC7BC1D0)
#define CLASS_3_982A0CE2B97E34BE_METHOD_3_CA1744CA167C6AAE_OFFSET UNITYSDK_OFFSET(0xC7BBF70)
#define CLASS_3_982A0CE2B97E34BE__CTOR_OFFSET UNITYSDK_OFFSET(0xC7BC290)

inline static constexpr unsigned int Class_3_982A0CE2B97E34BE_TypeDefinitionIndex = 59632;

class Class_3_982A0CE2B97E34BE : public ::Class_2_5D2387066E2BACFE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_982A0CE2B97E34BE__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_982A0CE2B97E34BE_GETTYPENAME_OFFSET))(this);
	}

	::System::Boolean Method_3_CA1744CA167C6AAE(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_982A0CE2B97E34BE_METHOD_3_CA1744CA167C6AAE_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>* Method_3_442FB31BA698F929(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Tuple_2<::System::String*, ::System::Boolean>*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_982A0CE2B97E34BE_METHOD_3_442FB31BA698F929_OFFSET))(this, a1);
	}
};
