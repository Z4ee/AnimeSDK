#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Font; }

inline static constexpr unsigned int Class_1_CBF2C494CAE64B6B___O_TypeDefinitionIndex = 69387;

class Class_1_CBF2C494CAE64B6B___O : public ::System::Object
{
public:
	static ::System::Action_1<::UnityEngine::Font*>** StaticGet__0____OnFontTextureRebuilt()
	{
		return (::System::Action_1<::UnityEngine::Font*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CBF2C494CAE64B6B___O_TypeDefinitionIndex)->GetStaticField(0x5A840);
	}
};
