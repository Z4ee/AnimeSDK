#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NewsTickerViewportCheckResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define CLASS_1_63BA939E972C203B_METHOD_1_16B20891ACB7C509_OFFSET UNITYSDK_OFFSET(0x1750B8B0)
#define CLASS_1_63BA939E972C203B_METHOD_1_486AF1E6C0038D4C_OFFSET UNITYSDK_OFFSET(0x1750B8A0)
#define CLASS_1_63BA939E972C203B_METHOD_1_9CAC62CC2CEDE5B6_OFFSET UNITYSDK_OFFSET(0x1750BA60)
#define CLASS_1_63BA939E972C203B__CTOR_OFFSET UNITYSDK_OFFSET(0x1750BB90)

inline static constexpr unsigned int Class_1_63BA939E972C203B_TypeDefinitionIndex = 65916;

class Class_1_63BA939E972C203B : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_0; // 0x10
	::Il2CppArray<::UnityEngine::Vector3>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63BA939E972C203B__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector2 Method_1_486AF1E6C0038D4C()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63BA939E972C203B_METHOD_1_486AF1E6C0038D4C_OFFSET))(this);
	}

	::RPG::Client::NewsTickerViewportCheckResult Method_1_16B20891ACB7C509(::UnityEngine::RectTransform* a1, ::UnityEngine::RectTransform* a2)
	{
		return ((::RPG::Client::NewsTickerViewportCheckResult(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + CLASS_1_63BA939E972C203B_METHOD_1_16B20891ACB7C509_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector2 Method_1_9CAC62CC2CEDE5B6(::UnityEngine::RectTransform* a1, ::System::Single a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_63BA939E972C203B_METHOD_1_9CAC62CC2CEDE5B6_OFFSET))(this, a1, a2);
	}
};
