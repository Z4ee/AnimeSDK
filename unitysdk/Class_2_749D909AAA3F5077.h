#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class MonoGameSceneObjectMap; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class Volume; }

#define CLASS_2_749D909AAA3F5077_METHOD_2_26C18447D3F62FED_OFFSET UNITYSDK_OFFSET(0x17064E30)
#define CLASS_2_749D909AAA3F5077_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x17064F90)
#define CLASS_2_749D909AAA3F5077_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x17064CF0)
#define CLASS_2_749D909AAA3F5077__CTOR_OFFSET UNITYSDK_OFFSET(0x17064F80)

inline static constexpr unsigned int Class_2_749D909AAA3F5077_TypeDefinitionIndex = 64082;

class Class_2_749D909AAA3F5077 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_6; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_5; // 0x20
	::UnityEngine::Rendering::Volume* Field_2_4; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_0; // 0x30
	::MoleMole::MonoGameSceneObjectMap* Field_2_7; // 0x38
	::UnityEngine::Camera* Field_2_1; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_749D909AAA3F5077__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_749D909AAA3F5077_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_2_26C18447D3F62FED(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_749D909AAA3F5077_METHOD_2_26C18447D3F62FED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_749D909AAA3F5077_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
