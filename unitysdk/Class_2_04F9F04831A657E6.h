#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57_1.h"

class Class_2_1A39E1B51756BF41;
class Class_2_78DA3B72B76F4A93;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole::Config { class UIAchievementAnimConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_04F9F04831A657E6_METHOD_2_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0x18B28480)
#define CLASS_2_04F9F04831A657E6_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x18B28200)
#define CLASS_2_04F9F04831A657E6_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x18B27FC0)
#define CLASS_2_04F9F04831A657E6_METHOD_2_AD399A63502445B7_OFFSET UNITYSDK_OFFSET(0x18B28560)
#define CLASS_2_04F9F04831A657E6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x18B282F0)
#define CLASS_2_04F9F04831A657E6_METHOD_2_D78B7A4B1086EA41_OFFSET UNITYSDK_OFFSET(0x18B28390)
#define CLASS_2_04F9F04831A657E6__CTOR_OFFSET UNITYSDK_OFFSET(0x18B282E0)

inline static constexpr unsigned int Class_2_04F9F04831A657E6_TypeDefinitionIndex = 64221;

class Class_2_04F9F04831A657E6 : public ::Class_1_EEA0111A28582B57_1
{
public:
	// static const ::System::String* Field_2_3; // 0x0
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_10; // 0x20
	::UnityEngine::RectTransform* Field_2_0; // 0x28
	::UnityEngine::GameObject* Field_2_4; // 0x30
	::MoleMole::Config::UIAchievementAnimConfig* Field_2_9; // 0x38
	::UnityEngine::RectTransform* Field_2_5; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x48
	::UnityEngine::RectTransform* Field_2_6; // 0x50
	::UnityEngine::RectTransform* Field_2_7; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04F9F04831A657E6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_04F9F04831A657E6_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_04F9F04831A657E6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04F9F04831A657E6_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	static ::Class_2_04F9F04831A657E6* Method_2_D78B7A4B1086EA41(::Class_2_78DA3B72B76F4A93* a1, ::Class_2_A4D62D05D5EA8464* a2, ::MoleMole::UIControlCollection* a3)
	{
		return ((::Class_2_04F9F04831A657E6*(*)(::Class_2_78DA3B72B76F4A93*, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_04F9F04831A657E6_METHOD_2_D78B7A4B1086EA41_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_2_3C8305164A0C9B06(::Class_2_78DA3B72B76F4A93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_78DA3B72B76F4A93*))((::PBYTE)hIl2Cpp + CLASS_2_04F9F04831A657E6_METHOD_2_3C8305164A0C9B06_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_AD399A63502445B7(::MoleMole::UIControlCollection* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_04F9F04831A657E6_METHOD_2_AD399A63502445B7_OFFSET))(a1);
	}
};
