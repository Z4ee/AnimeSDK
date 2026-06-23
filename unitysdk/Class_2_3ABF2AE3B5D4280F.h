#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_3ABF2AE3B5D4280F_Class_2_70BB056674D926CE;
class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UITutorialVideoPanelWidgetController; }
namespace UnityEngine::Video { class VideoPlayer; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_3ABF2AE3B5D4280F_METHOD_2_5200FEEACE882DF3_OFFSET UNITYSDK_OFFSET(0x127B4760)
#define CLASS_2_3ABF2AE3B5D4280F_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x127B4990)
#define CLASS_2_3ABF2AE3B5D4280F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x127B4A90)
#define CLASS_2_3ABF2AE3B5D4280F__CTOR_OFFSET UNITYSDK_OFFSET(0x127B4A80)

inline static constexpr unsigned int Class_2_3ABF2AE3B5D4280F_TypeDefinitionIndex = 56045;

class Class_2_3ABF2AE3B5D4280F : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_CA67A9CEB871FFD3* Field_2_2; // 0x18
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UITutorialVideoPanelWidgetController*>* Field_2_1; // 0x20
	::UnityEngine::Video::VideoPlayer* Field_2_3; // 0x28
	::Class_2_0D31A1661D004892<::Class_2_3ABF2AE3B5D4280F_Class_2_70BB056674D926CE*>* Field_2_0; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3ABF2AE3B5D4280F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5200FEEACE882DF3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3ABF2AE3B5D4280F_METHOD_2_5200FEEACE882DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3ABF2AE3B5D4280F_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3ABF2AE3B5D4280F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
