#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client { class MonoEffectPluginSDFText; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_F4BEAB0EB09FD636_METHOD_2_019433AA5F044915_OFFSET UNITYSDK_OFFSET(0x18A0B8D0)
#define CLASS_2_F4BEAB0EB09FD636_METHOD_2_449E836F38E59405_OFFSET UNITYSDK_OFFSET(0x18A0B770)
#define CLASS_2_F4BEAB0EB09FD636_METHOD_2_7720033AA8065E78_OFFSET UNITYSDK_OFFSET(0x18A0B3A0)
#define CLASS_2_F4BEAB0EB09FD636_METHOD_2_7ED424EA6209D8BC_OFFSET UNITYSDK_OFFSET(0x18A0B700)
#define CLASS_2_F4BEAB0EB09FD636__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A0BA60)
#define CLASS_2_F4BEAB0EB09FD636__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0BA50)

inline static constexpr unsigned int Class_2_F4BEAB0EB09FD636_TypeDefinitionIndex = 69864;

class Class_2_F4BEAB0EB09FD636 : public ::RPG::Client::BehaviorBase
{
public:
	static ::System::String** StaticGet_KMBKIHHGIJP()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_2_F4BEAB0EB09FD636_TypeDefinitionIndex)->GetStaticField(0x62880);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4BEAB0EB09FD636__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_F4BEAB0EB09FD636__CCTOR_OFFSET))();
	}

	::System::Void Method_2_7720033AA8065E78(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_F4BEAB0EB09FD636_METHOD_2_7720033AA8065E78_OFFSET))(this, a1);
	}

	::System::Void Method_2_449E836F38E59405(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_2_F4BEAB0EB09FD636_METHOD_2_449E836F38E59405_OFFSET))(this, a1);
	}

	::System::String* Method_2_019433AA5F044915()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4BEAB0EB09FD636_METHOD_2_019433AA5F044915_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginSDFText* Method_2_7ED424EA6209D8BC()
	{
		return ((::RPG::Client::MonoEffectPluginSDFText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F4BEAB0EB09FD636_METHOD_2_7ED424EA6209D8BC_OFFSET))(this);
	}
};
