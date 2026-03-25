#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_94;
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0BA5D98E0F73DDB8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1837AE80)
#define CLASS_1_0BA5D98E0F73DDB8__CTOR_OFFSET UNITYSDK_OFFSET(0x1837AF30)

inline static constexpr unsigned int Class_1_0BA5D98E0F73DDB8_TypeDefinitionIndex = 34008;

class Class_1_0BA5D98E0F73DDB8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_43BD383C98B4C0C5_94*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BA5D98E0F73DDB8__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BA5D98E0F73DDB8_DISPOSE_OFFSET))(this);
	}
};
