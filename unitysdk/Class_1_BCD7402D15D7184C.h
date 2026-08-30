#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BCD7402D15D7184C_PhotoUpdateUseGraphType.h"
#include "unitysdk/System/Object.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class GlobalTimeSlow; }
namespace RPG::GameCore { class PhotoGraphUpdateTwoPointFourParam; }
namespace RPG::GameCore { class SwitchPhotographDragMode; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BCD7402D15D7184C_METHOD_1_1E862743DFFAFAF1_OFFSET UNITYSDK_OFFSET(0x159458C0)
#define CLASS_1_BCD7402D15D7184C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x15945AD0)
#define CLASS_1_BCD7402D15D7184C_METHOD_1_369F4D8B975FCE58_OFFSET UNITYSDK_OFFSET(0x15944170)
#define CLASS_1_BCD7402D15D7184C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x15945A70)
#define CLASS_1_BCD7402D15D7184C_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x15945A10)
#define CLASS_1_BCD7402D15D7184C_METHOD_1_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x15945D60)
#define CLASS_1_BCD7402D15D7184C_METHOD_1_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x15945810)
#define CLASS_1_BCD7402D15D7184C_METHOD_1_E6ADFDCAE54F8710_OFFSET UNITYSDK_OFFSET(0x15945B80)
#define CLASS_1_BCD7402D15D7184C__CTOR_OFFSET UNITYSDK_OFFSET(0x15945FF0)

inline static constexpr unsigned int Class_1_BCD7402D15D7184C_TypeDefinitionIndex = 69422;

class Class_1_BCD7402D15D7184C : public ::System::Object
{
public:
	// static const ::System::String* JLEHCLKKIJG; // 0x0
	// static const ::System::String* AABEAONNFCB; // 0x0
	::RPG::GameCore::SwitchPhotographDragMode* IIEMJEPAGPE; // 0x10
	::RPG::GameCore::GlobalTimeSlow* ALJAPMHJBLA; // 0x18
	::System::Collections::Generic::Dictionary_2<::Class_1_BCD7402D15D7184C_PhotoUpdateUseGraphType, ::Class_3_07C3C4D2990C49EE*>* BKKBPFMHDGF; // 0x20
	::RPG::GameCore::TaskContext* MIIIMIKGKEP; // 0x28
	::System::Boolean HFMODAAECAN; // 0x30
	::System::Boolean GMEJICDOADK; // 0x31

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCD7402D15D7184C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_369F4D8B975FCE58(::RPG::GameCore::PhotoGraphUpdateTwoPointFourParam* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PhotoGraphUpdateTwoPointFourParam*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_BCD7402D15D7184C_METHOD_1_369F4D8B975FCE58_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCD7402D15D7184C_METHOD_1_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCD7402D15D7184C_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCD7402D15D7184C_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCD7402D15D7184C_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_1E862743DFFAFAF1(::Class_1_BCD7402D15D7184C_PhotoUpdateUseGraphType a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BCD7402D15D7184C_PhotoUpdateUseGraphType))((::PBYTE)hIl2Cpp + CLASS_1_BCD7402D15D7184C_METHOD_1_1E862743DFFAFAF1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E6ADFDCAE54F8710(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BCD7402D15D7184C_METHOD_1_E6ADFDCAE54F8710_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCD7402D15D7184C_METHOD_1_8D61BE16C9463302_OFFSET))(this);
	}
};
