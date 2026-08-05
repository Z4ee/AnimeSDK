#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_6055A71771138631_Class_2_DCA97181A2D1354C;
class Class_2_A4D62D05D5EA8464;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_6055A71771138631_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x16EC9870)
#define CLASS_2_6055A71771138631_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16EC9900)
#define CLASS_2_6055A71771138631_METHOD_2_D0F74BA0038650D0_OFFSET UNITYSDK_OFFSET(0x16EC96B0)
#define CLASS_2_6055A71771138631__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC98F0)

inline static constexpr unsigned int Class_2_6055A71771138631_TypeDefinitionIndex = 68030;

class Class_2_6055A71771138631 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_6055A71771138631_Class_2_DCA97181A2D1354C*>* Field_2_7; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x28
	::MoleMole::UIGeneralButtonController* Field_2_6; // 0x30
	::MonoUITableScrollV2* Field_2_2; // 0x38
	::UnityEngine::GameObject* Field_2_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6055A71771138631__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D0F74BA0038650D0(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6055A71771138631_METHOD_2_D0F74BA0038650D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6055A71771138631_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6055A71771138631_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
