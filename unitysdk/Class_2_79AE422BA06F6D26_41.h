#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_79AE422BA06F6D26_41_Class_2_E30E90BF33BD3306_1;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UIImgEventTrigger; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_79AE422BA06F6D26_41_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0xFF72120)
#define CLASS_2_79AE422BA06F6D26_41_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xFF71DF0)
#define CLASS_2_79AE422BA06F6D26_41_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xFF72270)
#define CLASS_2_79AE422BA06F6D26_41__CTOR_OFFSET UNITYSDK_OFFSET(0xFF72260)

inline static constexpr unsigned int Class_2_79AE422BA06F6D26_41_TypeDefinitionIndex = 83397;

class Class_2_79AE422BA06F6D26_41 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_10; // 0x18
	::UnityEngine::UI::Extension::UIImgEventTrigger* Field_2_8; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x28
	::UnityEngine::Transform* Field_2_1; // 0x30
	::UnityEngine::Transform* Field_2_13; // 0x38
	::Class_2_B4378B46E0020E85* Field_2_6; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_15; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x50
	::UnityEngine::Transform* Field_2_0; // 0x58
	::Class_2_0D31A1661D004892<::Class_2_79AE422BA06F6D26_41_Class_2_E30E90BF33BD3306_1*>* Field_2_12; // 0x60
	::MoleMole::MonoGamepadSelectable* Field_2_9; // 0x68
	::UnityEngine::Transform* Field_2_11; // 0x70
	::UnityEngine::RectTransform* Field_2_3; // 0x78
	::UnityEngine::RectTransform* Field_2_7; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_14; // 0x88
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_41__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_41_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_41_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_79AE422BA06F6D26_41_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
