#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIBPCoreRewardShowWidgetWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_826A30478DA34A69;

#define CLASS_2_1931156DDD30B37B_METHOD_2_15A96BFA7BCB1910_OFFSET UNITYSDK_OFFSET(0x15091C80)
#define CLASS_2_1931156DDD30B37B_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x15091FB0)
#define CLASS_2_1931156DDD30B37B_METHOD_2_9B20BDFFAE2E7CB3_OFFSET UNITYSDK_OFFSET(0x15091DD0)
#define CLASS_2_1931156DDD30B37B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x15092040)
#define CLASS_2_1931156DDD30B37B__CTOR_OFFSET UNITYSDK_OFFSET(0x15092030)

inline static constexpr unsigned int Class_2_1931156DDD30B37B_TypeDefinitionIndex = 70449;

class Class_2_1931156DDD30B37B : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadCustomList* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_1; // 0x20
	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIBPCoreRewardShowWidgetWidgetController*>*>* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1931156DDD30B37B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15A96BFA7BCB1910(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1931156DDD30B37B_METHOD_2_15A96BFA7BCB1910_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIBPCoreRewardShowWidgetWidgetController*>*>* Method_2_9B20BDFFAE2E7CB3(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_826A30478DA34A69<::MoleMole::UIBPCoreRewardShowWidgetWidgetController*>*>*(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1931156DDD30B37B_METHOD_2_9B20BDFFAE2E7CB3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1931156DDD30B37B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1931156DDD30B37B_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
