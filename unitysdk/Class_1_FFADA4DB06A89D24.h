#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_1_FFADA4DB06A89D24_CLEAR_OFFSET UNITYSDK_OFFSET(0x16762760)
#define CLASS_1_FFADA4DB06A89D24__CTOR_OFFSET UNITYSDK_OFFSET(0x16762800)

inline static constexpr unsigned int Class_1_FFADA4DB06A89D24_TypeDefinitionIndex = 33051;

class Class_1_FFADA4DB06A89D24 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFADA4DB06A89D24__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFADA4DB06A89D24_CLEAR_OFFSET))(this);
	}
};
