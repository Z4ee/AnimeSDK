#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class IDisposable; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_2F3F220A3374AA4F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A634070)
#define CLASS_1_2F3F220A3374AA4F_METHOD_1_72728CE6ED9E87CA_OFFSET UNITYSDK_OFFSET(0x1A61C590)
#define CLASS_1_2F3F220A3374AA4F_METHOD_1_D4FF340FCC4EA34D_OFFSET UNITYSDK_OFFSET(0x1A634150)
#define CLASS_1_2F3F220A3374AA4F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6343E0)

inline static constexpr unsigned int Class_1_2F3F220A3374AA4F_TypeDefinitionIndex = 33033;

class Class_1_2F3F220A3374AA4F : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::IDisposable*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F3F220A3374AA4F__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F3F220A3374AA4F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D4FF340FCC4EA34D(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2F3F220A3374AA4F_METHOD_1_D4FF340FCC4EA34D_OFFSET))(this, a1);
	}

	::System::Void Method_1_72728CE6ED9E87CA(::System::IDisposable* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::IDisposable*))((::PBYTE)hIl2Cpp + CLASS_1_2F3F220A3374AA4F_METHOD_1_72728CE6ED9E87CA_OFFSET))(this, a1);
	}
};
