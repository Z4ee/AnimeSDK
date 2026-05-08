#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIAntiqueCollectWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralBtn03WidgetController; }
template <typename T> class Class_3_30A064D7BE47C07D;

#define CLASS_2_FEED8F28D34F9161_METHOD_2_5200FEEACE882DF3_OFFSET UNITYSDK_OFFSET(0x138FD5D0)
#define CLASS_2_FEED8F28D34F9161_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x138FD7D0)
#define CLASS_2_FEED8F28D34F9161_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x138FD8A0)
#define CLASS_2_FEED8F28D34F9161__CTOR_OFFSET UNITYSDK_OFFSET(0x138FD890)

inline static constexpr unsigned int Class_2_FEED8F28D34F9161_TypeDefinitionIndex = 64035;

class Class_2_FEED8F28D34F9161 : public ::Class_1_EEA0111A28582B57
{
public:
	::MonoUITableScrollV2* Field_2_2; // 0x18
	::Class_3_30A064D7BE47C07D<::MoleMole::UIGeneralBtn03WidgetController*>* Field_2_1; // 0x20
	::MonoUITableScrollV2* Field_2_3; // 0x28
	::Class_3_30A064D7BE47C07D<::MoleMole::UIAntiqueCollectWidgetController*>* Field_2_4; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEED8F28D34F9161__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5200FEEACE882DF3(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FEED8F28D34F9161_METHOD_2_5200FEEACE882DF3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEED8F28D34F9161_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FEED8F28D34F9161_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
