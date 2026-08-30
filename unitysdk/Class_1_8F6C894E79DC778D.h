#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraEntranceAnchorConfig; }
namespace RPG::Client::Prop { class ChimeraGameObjectBuilder; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_8F6C894E79DC778D_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x15730730)
#define CLASS_1_8F6C894E79DC778D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15730F80)
#define CLASS_1_8F6C894E79DC778D__CCTOR_OFFSET UNITYSDK_OFFSET(0x15730FF0)
#define CLASS_1_8F6C894E79DC778D__CTOR_OFFSET UNITYSDK_OFFSET(0x157306D0)

inline static constexpr unsigned int Class_1_8F6C894E79DC778D_TypeDefinitionIndex = 78015;

class Class_1_8F6C894E79DC778D : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_EKKFGDBABLD()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F6C894E79DC778D_TypeDefinitionIndex)->GetStaticField(0xD2E0);
	}
	static ::System::Int32* StaticGet_FCBMOJDECKL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F6C894E79DC778D_TypeDefinitionIndex)->GetStaticField(0xD2E4);
	}
	// static const ::System::String* OGPHPKMGMKG; // 0x0
	::UnityEngine::Transform* KJMDDAHEODL; // 0x10
	::UnityEngine::Animator* APPGGMLEPLN; // 0x18
	::UnityEngine::GameObject* MIDIOOAFHDM; // 0x20
	::RPG::Client::Prop::ChimeraEntranceAnchorConfig* IGHAHBNLIJA; // 0x28
	::RPG::Client::Prop::ChimeraGameObjectBuilder* LIOJKFIGGIJ; // 0x30
	::UnityEngine::GameObject* INCICLMMBFL; // 0x38

	::System::Void _ctor(::RPG::Client::Prop::ChimeraEntranceAnchorConfig* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraEntranceAnchorConfig*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_8F6C894E79DC778D__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F6C894E79DC778D__CCTOR_OFFSET))();
	}

	::System::Void Method_1_3CCA0B8A31B650A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F6C894E79DC778D_METHOD_1_3CCA0B8A31B650A8_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F6C894E79DC778D_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
