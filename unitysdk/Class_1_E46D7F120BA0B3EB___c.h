#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::UI { class Image; }

#define CLASS_1_E46D7F120BA0B3EB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17917380)
#define CLASS_1_E46D7F120BA0B3EB___C__CTOR_OFFSET UNITYSDK_OFFSET(0x179173C0)
#define CLASS_1_E46D7F120BA0B3EB___C___CCTOR_B__9_0_OFFSET UNITYSDK_OFFSET(0x179173D0)
#define CLASS_1_E46D7F120BA0B3EB___C___CCTOR_B__9_1_OFFSET UNITYSDK_OFFSET(0x179173F0)
#define CLASS_1_E46D7F120BA0B3EB___C___CCTOR_B__9_2_OFFSET UNITYSDK_OFFSET(0x17917410)

inline static constexpr unsigned int Class_1_E46D7F120BA0B3EB___c_TypeDefinitionIndex = 50258;

class Class_1_E46D7F120BA0B3EB___c : public ::System::Object
{
public:
	static ::Class_1_E46D7F120BA0B3EB___c** StaticGet___9()
	{
		return (::Class_1_E46D7F120BA0B3EB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E46D7F120BA0B3EB___c_TypeDefinitionIndex)->GetStaticField(0x5F250);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E46D7F120BA0B3EB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E46D7F120BA0B3EB___C__CTOR_OFFSET))(this);
	}

	::System::Void __cctor_b__9_0(::UnityEngine::UI::Image* a1, ::UnityEngine::Sprite* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + CLASS_1_E46D7F120BA0B3EB___C___CCTOR_B__9_0_OFFSET))(this, a1, a2);
	}

	::System::Void __cctor_b__9_1(::UnityEngine::UI::Image* a1, ::UnityEngine::Material* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_E46D7F120BA0B3EB___C___CCTOR_B__9_1_OFFSET))(this, a1, a2);
	}

	::System::Void __cctor_b__9_2(::UnityEngine::UI::Image* a1, ::UnityEngine::Texture* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_1_E46D7F120BA0B3EB___C___CCTOR_B__9_2_OFFSET))(this, a1, a2);
	}
};
