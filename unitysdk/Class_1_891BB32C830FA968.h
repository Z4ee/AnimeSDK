#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Texture2D; }

#define CLASS_1_891BB32C830FA968_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16177EF0)
#define CLASS_1_891BB32C830FA968_METHOD_1_DB16135CE8B84AE4_OFFSET UNITYSDK_OFFSET(0x16177E50)
#define CLASS_1_891BB32C830FA968__CTOR_OFFSET UNITYSDK_OFFSET(0x16177EE0)

inline static constexpr unsigned int Class_1_891BB32C830FA968_TypeDefinitionIndex = 59567;

class Class_1_891BB32C830FA968 : public ::System::Object
{
public:
	::UnityEngine::Texture2D* Field_1_0; // 0x10
	::UnityEngine::Vector2 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_891BB32C830FA968__CTOR_OFFSET))(this);
	}

	static ::Class_1_891BB32C830FA968* Method_1_DB16135CE8B84AE4(::UnityEngine::Texture2D* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::Class_1_891BB32C830FA968*(*)(::UnityEngine::Texture2D*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_891BB32C830FA968_METHOD_1_DB16135CE8B84AE4_OFFSET))(a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_891BB32C830FA968_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
