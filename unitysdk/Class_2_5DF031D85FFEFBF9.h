#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_5DF031D85FFEFBF9_Class_2_40AC881AC36B2F6D_5;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class TextMesh; }
namespace UnityEngine::Playables { class PlayableDirector; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_5DF031D85FFEFBF9_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x17AFB0C0)
#define CLASS_2_5DF031D85FFEFBF9_METHOD_2_5A4C962718782000_OFFSET UNITYSDK_OFFSET(0x17AFAE90)
#define CLASS_2_5DF031D85FFEFBF9_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17AFB150)
#define CLASS_2_5DF031D85FFEFBF9__CTOR_OFFSET UNITYSDK_OFFSET(0x17AFB140)

inline static constexpr unsigned int Class_2_5DF031D85FFEFBF9_TypeDefinitionIndex = 83056;

class Class_2_5DF031D85FFEFBF9 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_10; // 0x18
	::UnityEngine::Playables::PlayableDirector* Field_2_0; // 0x20
	::UnityEngine::TextMesh* Field_2_6; // 0x28
	::UnityEngine::TextMesh* Field_2_5; // 0x30
	::UnityEngine::Camera* Field_2_1; // 0x38
	::UnityEngine::TextMesh* Field_2_2; // 0x40
	::UnityEngine::TextMesh* Field_2_8; // 0x48
	::UnityEngine::TextMesh* Field_2_3; // 0x50
	::UnityEngine::TextMesh* Field_2_7; // 0x58
	::UnityEngine::TextMesh* Field_2_4; // 0x60
	::Class_2_0D31A1661D004892<::Class_2_5DF031D85FFEFBF9_Class_2_40AC881AC36B2F6D_5*>* Field_2_9; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DF031D85FFEFBF9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5A4C962718782000(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5DF031D85FFEFBF9_METHOD_2_5A4C962718782000_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_5DF031D85FFEFBF9_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DF031D85FFEFBF9_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
