#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_62DA72730C4B8385.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class Observable_1; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class Image; }

#define CLASS_1_E46D7F120BA0B3EB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1522B980)

inline static constexpr unsigned int Class_1_E46D7F120BA0B3EB_TypeDefinitionIndex = 50255;

class Class_1_E46D7F120BA0B3EB : public ::System::Object
{
public:
	static ::System::Action_2<::UnityEngine::UI::Image*, ::UnityEngine::Sprite*>** StaticGet_LHJNPBNNNHP()
	{
		return (::System::Action_2<::UnityEngine::UI::Image*, ::UnityEngine::Sprite*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E46D7F120BA0B3EB_TypeDefinitionIndex)->GetStaticField(0x60560);
	}
	static ::System::Action_2<::UnityEngine::UI::Image*, ::UnityEngine::Texture*>** StaticGet_IGPFGLJCKND()
	{
		return (::System::Action_2<::UnityEngine::UI::Image*, ::UnityEngine::Texture*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E46D7F120BA0B3EB_TypeDefinitionIndex)->GetStaticField(0x60568);
	}
	static ::System::Action_2<::UnityEngine::UI::Image*, ::UnityEngine::Material*>** StaticGet_KPEODNAINME()
	{
		return (::System::Action_2<::UnityEngine::UI::Image*, ::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E46D7F120BA0B3EB_TypeDefinitionIndex)->GetStaticField(0x60570);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E46D7F120BA0B3EB__CCTOR_OFFSET))();
	}
};
