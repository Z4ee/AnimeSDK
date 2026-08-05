#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_C5AD6E5D3B825711_Class_2_44E88EF5AFB3C741_3;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIStrategyGuideSkillLevelUpRecommendWidgetController; }
namespace UnityEngine { class RectTransform; }
template <typename T> class Class_2_0D31A1661D004892;
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_C5AD6E5D3B825711_METHOD_2_25F259344056A8EA_OFFSET UNITYSDK_OFFSET(0x13778B90)
#define CLASS_2_C5AD6E5D3B825711_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x13778D70)
#define CLASS_2_C5AD6E5D3B825711_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x13778E40)
#define CLASS_2_C5AD6E5D3B825711__CTOR_OFFSET UNITYSDK_OFFSET(0x13778E30)

inline static constexpr unsigned int Class_2_C5AD6E5D3B825711_TypeDefinitionIndex = 60096;

class Class_2_C5AD6E5D3B825711 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x20
	::Class_2_0D31A1661D004892<::Class_2_C5AD6E5D3B825711_Class_2_44E88EF5AFB3C741_3*>* Field_2_0; // 0x28
	::Class_3_826A30478DA34A69<::MoleMole::UIStrategyGuideSkillLevelUpRecommendWidgetController*>* Field_2_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5AD6E5D3B825711__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_25F259344056A8EA(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C5AD6E5D3B825711_METHOD_2_25F259344056A8EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C5AD6E5D3B825711_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C5AD6E5D3B825711_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
