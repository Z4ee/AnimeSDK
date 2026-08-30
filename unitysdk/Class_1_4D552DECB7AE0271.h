#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4D552DECB7AE0271_METHOD_1_AFF44E8DA5190FF5_OFFSET UNITYSDK_OFFSET(0x1A018980)
#define CLASS_1_4D552DECB7AE0271__CTOR_OFFSET UNITYSDK_OFFSET(0x1A018BF0)

inline static constexpr unsigned int Class_1_4D552DECB7AE0271_TypeDefinitionIndex = 73735;

class Class_1_4D552DECB7AE0271 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* CNJBGEPCEHN; // 0x10
	::System::String* CDMFNHJGGKF; // 0x18
	::UnityEngine::Vector3 OFIPHAJEPGA; // 0x20
	::UnityEngine::Vector3 CFJPCKOJMDH; // 0x2C
	::UnityEngine::Vector3 LGOCDNKCPMJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D552DECB7AE0271__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_AFF44E8DA5190FF5(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D552DECB7AE0271_METHOD_1_AFF44E8DA5190FF5_OFFSET))(this, a1);
	}
};
