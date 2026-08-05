#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_31B7AED3AFE3150D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D918220)
#define CLASS_1_31B7AED3AFE3150D_METHOD_1_2B53809722D5B0C4_OFFSET UNITYSDK_OFFSET(0x1D918300)
#define CLASS_1_31B7AED3AFE3150D_METHOD_1_72728CE6ED9E87CA_OFFSET UNITYSDK_OFFSET(0x1D906DD0)
#define CLASS_1_31B7AED3AFE3150D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9185B0)

inline static constexpr unsigned int Class_1_31B7AED3AFE3150D_TypeDefinitionIndex = 35258;

class Class_1_31B7AED3AFE3150D : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::IDisposable*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31B7AED3AFE3150D__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31B7AED3AFE3150D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2B53809722D5B0C4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_31B7AED3AFE3150D_METHOD_1_2B53809722D5B0C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_72728CE6ED9E87CA(::System::IDisposable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IDisposable*))((::PBYTE)hIl2Cpp + CLASS_1_31B7AED3AFE3150D_METHOD_1_72728CE6ED9E87CA_OFFSET))(this, a1);
	}
};
