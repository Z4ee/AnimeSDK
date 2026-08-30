#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerable; }
namespace System::Collections { class IEnumerator; }

#define CLASS_1_BDC4D244B5328126_DISPOSE_OFFSET UNITYSDK_OFFSET(0x140B1420)
#define CLASS_1_BDC4D244B5328126__CTOR_OFFSET UNITYSDK_OFFSET(0x140B1220)

inline static constexpr unsigned int Class_1_BDC4D244B5328126_TypeDefinitionIndex = 40142;

class Class_1_BDC4D244B5328126 : public ::System::Object
{
public:
	::System::Collections::IEnumerator* HJLNGDPAMOD; // 0x10

	::System::Void _ctor(::System::Collections::IEnumerable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerable*))((::PBYTE)hIl2Cpp + CLASS_1_BDC4D244B5328126__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BDC4D244B5328126_DISPOSE_OFFSET))(this);
	}
};
