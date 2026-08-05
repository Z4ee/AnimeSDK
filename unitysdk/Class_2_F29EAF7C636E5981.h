#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_F29EAF7C636E5981_Class_2_38BDEE38FAF3DCC6;
class Class_2_F29EAF7C636E5981_Class_2_CC03AAEE6FCC732C_25;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFashionStoreEditPanelWidgetController; }
namespace MoleMole { class UIFashionStorePreviewPanelWidgetController; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace MoleMole { class UIGeneralButtonController; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_F29EAF7C636E5981_METHOD_2_44B69BBA3A965CE1_OFFSET UNITYSDK_OFFSET(0x1BC1EBD0)
#define CLASS_2_F29EAF7C636E5981_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x1BC1EE90)
#define CLASS_2_F29EAF7C636E5981_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1BC1F010)
#define CLASS_2_F29EAF7C636E5981__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC1F000)

inline static constexpr unsigned int Class_2_F29EAF7C636E5981_TypeDefinitionIndex = 65222;

class Class_2_F29EAF7C636E5981 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::UIGeneralButtonController* Field_2_4; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_F29EAF7C636E5981_Class_2_CC03AAEE6FCC732C_25*>* Field_2_10; // 0x20
	::Class_3_826A30478DA34A69<::MoleMole::UIFashionStoreEditPanelWidgetController*>* Field_2_6; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UIFashionStorePreviewPanelWidgetController*>* Field_2_7; // 0x30
	::Class_3_826A30478DA34A69<::MoleMole::UIGeneralBtn03WidgetController*>* Field_2_11; // 0x38
	::Class_2_0D31A1661D004892<::Class_2_F29EAF7C636E5981_Class_2_38BDEE38FAF3DCC6*>* Field_2_5; // 0x40
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F29EAF7C636E5981__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_44B69BBA3A965CE1(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F29EAF7C636E5981_METHOD_2_44B69BBA3A965CE1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F29EAF7C636E5981_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F29EAF7C636E5981_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}
};
