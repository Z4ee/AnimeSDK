#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraEntranceAnchorConfig; }
namespace RPG::Client::Prop { class ChimeraGameObjectBuilder; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_8F6C894E79DC778D_METHOD_1_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x97B3B60)
#define CLASS_1_8F6C894E79DC778D_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x97B43C0)
#define CLASS_1_8F6C894E79DC778D__CCTOR_OFFSET UNITYSDK_OFFSET(0x97B4430)
#define CLASS_1_8F6C894E79DC778D__CTOR_OFFSET UNITYSDK_OFFSET(0x97B3B00)

inline static constexpr unsigned int Class_1_8F6C894E79DC778D_TypeDefinitionIndex = 71982;

class Class_1_8F6C894E79DC778D : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F6C894E79DC778D_TypeDefinitionIndex)->GetStaticField(0x4C20);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F6C894E79DC778D_TypeDefinitionIndex)->GetStaticField(0x4C24);
	}
	// static const ::System::String* Field_1_8; // 0x0
	::UnityEngine::GameObject* Field_1_2; // 0x10
	::RPG::Client::Prop::ChimeraGameObjectBuilder* Field_1_7; // 0x18
	::RPG::Client::Prop::ChimeraEntranceAnchorConfig* Field_1_4; // 0x20
	::UnityEngine::Transform* Field_1_5; // 0x28
	::UnityEngine::GameObject* Field_1_3; // 0x30
	::UnityEngine::Animator* Field_1_6; // 0x38

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
