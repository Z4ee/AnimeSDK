#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_92EE12165BEE8114__CTOR_OFFSET UNITYSDK_OFFSET(0x1C43D460)

inline static constexpr unsigned int Class_1_92EE12165BEE8114_TypeDefinitionIndex = 42100;

class Class_1_92EE12165BEE8114 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* BJGAMICBIGO; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Vector3>* HADOLNPFLHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92EE12165BEE8114__CTOR_OFFSET))(this);
	}
};
