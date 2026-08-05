#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_3B8931CC7556B4FC_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x185E8050)
#define CLASS_2_3B8931CC7556B4FC_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x185E7EC0)
#define CLASS_2_3B8931CC7556B4FC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x185E8140)
#define CLASS_2_3B8931CC7556B4FC__CTOR_OFFSET UNITYSDK_OFFSET(0x185E8130)

inline static constexpr unsigned int Class_2_3B8931CC7556B4FC_TypeDefinitionIndex = 82317;

class Class_2_3B8931CC7556B4FC : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x20
	::MonoUITableScrollV2* Field_2_3; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B8931CC7556B4FC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3B8931CC7556B4FC_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3B8931CC7556B4FC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B8931CC7556B4FC_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
