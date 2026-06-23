#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_1A42310AB81707A3.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_5B5E82918BC44D6E_4_METHOD_4_D30E794E50AB5F2A_OFFSET UNITYSDK_OFFSET(0x1D86CEE0)
#define CLASS_4_5B5E82918BC44D6E_4_METHOD_4_D9EB4C1735FE7829_OFFSET UNITYSDK_OFFSET(0x1D86CAF0)
#define CLASS_4_5B5E82918BC44D6E_4__CTOR_OFFSET UNITYSDK_OFFSET(0x1D86CED0)

inline static constexpr unsigned int Class_4_5B5E82918BC44D6E_4_TypeDefinitionIndex = 90962;

class Class_4_5B5E82918BC44D6E_4 : public ::Class_3_1A42310AB81707A3
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5B5E82918BC44D6E_4__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* Method_4_D9EB4C1735FE7829()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5B5E82918BC44D6E_4_METHOD_4_D9EB4C1735FE7829_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Type*>* Method_4_D30E794E50AB5F2A()
	{
		return ((::System::Collections::Generic::List_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_5B5E82918BC44D6E_4_METHOD_4_D30E794E50AB5F2A_OFFSET))(this);
	}
};
