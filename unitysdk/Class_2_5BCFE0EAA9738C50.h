#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class MonoGameSceneObjectMap; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_2_5BCFE0EAA9738C50_METHOD_2_65367CC4DD011F4E_OFFSET UNITYSDK_OFFSET(0x13B8C660)
#define CLASS_2_5BCFE0EAA9738C50_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13B8C7C0)
#define CLASS_2_5BCFE0EAA9738C50_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x13B8C520)
#define CLASS_2_5BCFE0EAA9738C50__CTOR_OFFSET UNITYSDK_OFFSET(0x13B8C7B0)

inline static constexpr unsigned int Class_2_5BCFE0EAA9738C50_TypeDefinitionIndex = 42941;

class Class_2_5BCFE0EAA9738C50 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_1; // 0x18
	::UnityEngine::Rendering::Volume* Field_2_5; // 0x20
	::UnityEngine::Camera* Field_2_0; // 0x28
	::UnityEngine::GameObject* Field_2_3; // 0x30
	::MoleMole::MonoGameSceneObjectMap* Field_2_2; // 0x38
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5BCFE0EAA9738C50__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5BCFE0EAA9738C50_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5BCFE0EAA9738C50_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_2_65367CC4DD011F4E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5BCFE0EAA9738C50_METHOD_2_65367CC4DD011F4E_OFFSET))(this, a1, a2);
	}
};
