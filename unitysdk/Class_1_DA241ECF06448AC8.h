#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CLASS_1_DA241ECF06448AC8_CLEAR_OFFSET UNITYSDK_OFFSET(0x18BD0D40)
#define CLASS_1_DA241ECF06448AC8__CTOR_OFFSET UNITYSDK_OFFSET(0x18BD0DD0)

inline static constexpr unsigned int Class_1_DA241ECF06448AC8_TypeDefinitionIndex = 39609;

class Class_1_DA241ECF06448AC8 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA241ECF06448AC8__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DA241ECF06448AC8_CLEAR_OFFSET))(this);
	}
};
