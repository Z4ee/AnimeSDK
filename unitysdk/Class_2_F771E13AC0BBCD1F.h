#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_F771E13AC0BBCD1F_Class_2_8AF8272AE2304074_3;
class Class_2_F771E13AC0BBCD1F_Class_2_CEDEE32CDEEE0E54_2;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_F771E13AC0BBCD1F_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x1593C090)
#define CLASS_2_F771E13AC0BBCD1F_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x1593C2C0)
#define CLASS_2_F771E13AC0BBCD1F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1593C390)
#define CLASS_2_F771E13AC0BBCD1F__CTOR_OFFSET UNITYSDK_OFFSET(0x1593C380)

inline static constexpr unsigned int Class_2_F771E13AC0BBCD1F_TypeDefinitionIndex = 74514;

class Class_2_F771E13AC0BBCD1F : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_5; // 0x18
	::Class_2_0D31A1661D004892<::Class_2_F771E13AC0BBCD1F_Class_2_CEDEE32CDEEE0E54_2*>* Field_2_0; // 0x20
	::MoleMole::NotificationBadgeEx* Field_2_7; // 0x28
	::MoleMole::NotificationBadgeEx* Field_2_6; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x38
	::Class_2_0D31A1661D004892<::Class_2_F771E13AC0BBCD1F_Class_2_8AF8272AE2304074_3*>* Field_2_1; // 0x40
	::UnityEngine::RectTransform* Field_2_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F771E13AC0BBCD1F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F771E13AC0BBCD1F_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F771E13AC0BBCD1F_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F771E13AC0BBCD1F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
