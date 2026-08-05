#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIInLevelPauseMiniscapeMapWidget_MapIconDetailWidgetController; }
namespace MoleMole { class UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_C2C9554C906BB2FD_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x1C139780)
#define CLASS_2_C2C9554C906BB2FD_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1C139870)
#define CLASS_2_C2C9554C906BB2FD_METHOD_2_ECD1B788BD780B17_OFFSET UNITYSDK_OFFSET(0x1C139600)
#define CLASS_2_C2C9554C906BB2FD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C139860)

inline static constexpr unsigned int Class_2_C2C9554C906BB2FD_TypeDefinitionIndex = 57176;

class Class_2_C2C9554C906BB2FD : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_826A30478DA34A69<::MoleMole::UIInLevelPauseMiniscapeMapWidget_MapIconDetailWidgetController*>* Field_2_0; // 0x18
	::Class_3_826A30478DA34A69<::MoleMole::UIInLevelPauseMiniscapeMapWidget_MiniscapeMapWidgetController*>* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2C9554C906BB2FD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_ECD1B788BD780B17(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C2C9554C906BB2FD_METHOD_2_ECD1B788BD780B17_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C2C9554C906BB2FD_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C2C9554C906BB2FD_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
