#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4D552DECB7AE0271_METHOD_1_AFF44E8DA5190FF5_OFFSET UNITYSDK_OFFSET(0x1363F520)
#define CLASS_1_4D552DECB7AE0271__CTOR_OFFSET UNITYSDK_OFFSET(0x1363F790)

inline static constexpr unsigned int Class_1_4D552DECB7AE0271_TypeDefinitionIndex = 68926;

class Class_1_4D552DECB7AE0271 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_1_1; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_3; // 0x2C
	::UnityEngine::Vector3 Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D552DECB7AE0271__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_AFF44E8DA5190FF5(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D552DECB7AE0271_METHOD_1_AFF44E8DA5190FF5_OFFSET))(this, a1);
	}
};
