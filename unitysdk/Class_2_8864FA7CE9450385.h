#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_8864FA7CE9450385_Class_2_055747CC6D90DE4C;
class Class_2_8864FA7CE9450385_Class_2_F07F0A447E516ADA;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_8864FA7CE9450385_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x12BD5870)
#define CLASS_2_8864FA7CE9450385_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x12BD5610)
#define CLASS_2_8864FA7CE9450385_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x12BD5970)
#define CLASS_2_8864FA7CE9450385__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD5960)

inline static constexpr unsigned int Class_2_8864FA7CE9450385_TypeDefinitionIndex = 61415;

class Class_2_8864FA7CE9450385 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x18
	::UnityEngine::RectTransform* Field_2_7; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_8864FA7CE9450385_Class_2_055747CC6D90DE4C*>* Field_2_6; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x30
	::UnityEngine::RectTransform* Field_2_1; // 0x38
	::Class_2_0D31A1661D004892<::Class_2_8864FA7CE9450385_Class_2_F07F0A447E516ADA*>* Field_2_5; // 0x40
	::MoleMole::NotificationBadgeEx* Field_2_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8864FA7CE9450385__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8864FA7CE9450385_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8864FA7CE9450385_METHOD_2_737220D2233A9067_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8864FA7CE9450385_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
