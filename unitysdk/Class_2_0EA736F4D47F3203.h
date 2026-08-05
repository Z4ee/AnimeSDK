#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_0EA736F4D47F3203_Class_2_2B5C4619E3EA513F;
class Class_2_0EA736F4D47F3203_Class_2_CECA08025CFAE8D2;
class Class_2_0EA736F4D47F3203_Class_2_F359B61311A9C2EE;
class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_0EA736F4D47F3203_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x1BB63CB0)
#define CLASS_2_0EA736F4D47F3203_METHOD_2_5268AE5605C75CF4_OFFSET UNITYSDK_OFFSET(0x1BB63B60)
#define CLASS_2_0EA736F4D47F3203_METHOD_2_8AF27F640869EFF7_OFFSET UNITYSDK_OFFSET(0x1BB63880)
#define CLASS_2_0EA736F4D47F3203_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1BB63DF0)
#define CLASS_2_0EA736F4D47F3203__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB63DE0)

inline static constexpr unsigned int Class_2_0EA736F4D47F3203_TypeDefinitionIndex = 67217;

class Class_2_0EA736F4D47F3203 : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Field_2_7; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_0EA736F4D47F3203_Class_2_CECA08025CFAE8D2*>* Field_2_9; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x30
	::MoleMole::MonoGamepadModule* Field_2_11; // 0x38
	::Class_2_0D31A1661D004892<::Class_2_0EA736F4D47F3203_Class_2_2B5C4619E3EA513F*>* Field_2_10; // 0x40
	::Class_2_0D31A1661D004892<::Class_2_0EA736F4D47F3203_Class_2_F359B61311A9C2EE*>* Field_2_4; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x50
	::MonoUITableScrollV2* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA736F4D47F3203__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8AF27F640869EFF7(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0EA736F4D47F3203_METHOD_2_8AF27F640869EFF7_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>* Method_2_5268AE5605C75CF4(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UILocalizationText*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0EA736F4D47F3203_METHOD_2_5268AE5605C75CF4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0EA736F4D47F3203_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0EA736F4D47F3203_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}
};
