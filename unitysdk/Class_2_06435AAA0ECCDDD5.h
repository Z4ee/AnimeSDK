#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_06435AAA0ECCDDD5_Class_2_494A1B03F3D05672;
class Class_2_06435AAA0ECCDDD5_Class_2_F102AC7D02551ADB;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_06435AAA0ECCDDD5_METHOD_2_25F259344056A8EA_OFFSET UNITYSDK_OFFSET(0x18C1BCC0)
#define CLASS_2_06435AAA0ECCDDD5_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x18C1BEB0)
#define CLASS_2_06435AAA0ECCDDD5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18C1BF80)
#define CLASS_2_06435AAA0ECCDDD5__CTOR_OFFSET UNITYSDK_OFFSET(0x18C1BF70)

inline static constexpr unsigned int Class_2_06435AAA0ECCDDD5_TypeDefinitionIndex = 70325;

class Class_2_06435AAA0ECCDDD5 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_0D31A1661D004892<::Class_2_06435AAA0ECCDDD5_Class_2_F102AC7D02551ADB*>* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_06435AAA0ECCDDD5_Class_2_494A1B03F3D05672*>* Field_2_0; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* Field_2_5; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06435AAA0ECCDDD5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_25F259344056A8EA(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_06435AAA0ECCDDD5_METHOD_2_25F259344056A8EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06435AAA0ECCDDD5_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_06435AAA0ECCDDD5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
