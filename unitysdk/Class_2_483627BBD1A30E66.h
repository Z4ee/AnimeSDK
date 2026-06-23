#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_483627BBD1A30E66_METHOD_2_5200FEEACE882DF3_OFFSET UNITYSDK_OFFSET(0x14FFD3F0)
#define CLASS_2_483627BBD1A30E66_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x14FFD5D0)
#define CLASS_2_483627BBD1A30E66_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x14FFD6A0)
#define CLASS_2_483627BBD1A30E66__CTOR_OFFSET UNITYSDK_OFFSET(0x14FFD690)

inline static constexpr unsigned int Class_2_483627BBD1A30E66_TypeDefinitionIndex = 54142;

class Class_2_483627BBD1A30E66 : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadCustomList* Field_2_1; // 0x18
	::MoleMole::MonoInputKey* Field_2_4; // 0x20
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_3; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x30
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_483627BBD1A30E66__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5200FEEACE882DF3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_483627BBD1A30E66_METHOD_2_5200FEEACE882DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_483627BBD1A30E66_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_483627BBD1A30E66_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
