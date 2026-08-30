#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Font; }

inline static constexpr unsigned int Class_1_AE06DCDD59A8E087___O_TypeDefinitionIndex = 72602;

class Class_1_AE06DCDD59A8E087___O : public ::System::Object
{
public:
	static ::System::Action_1<::UnityEngine::Font*>** StaticGet__0____OnFontTextureRebuilt()
	{
		return (::System::Action_1<::UnityEngine::Font*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AE06DCDD59A8E087___O_TypeDefinitionIndex)->GetStaticField(0x615D0);
	}
};
