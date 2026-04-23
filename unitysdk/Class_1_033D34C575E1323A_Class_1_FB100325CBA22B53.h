#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_033D34C575E1323A_CLASS_1_FB100325CBA22B53__CTOR_OFFSET UNITYSDK_OFFSET(0x9BC5980)

inline static constexpr unsigned int Class_1_033D34C575E1323A_Class_1_FB100325CBA22B53_TypeDefinitionIndex = 55124;

class Class_1_033D34C575E1323A_Class_1_FB100325CBA22B53 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x10
	::UnityEngine::GameObject* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_033D34C575E1323A_CLASS_1_FB100325CBA22B53__CTOR_OFFSET))(this);
	}
};
