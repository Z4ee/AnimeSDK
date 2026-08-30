#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_0_16E4307DCC419505_255;
namespace RPG::GameCore { class LittleGameAbilityPixAirTriggerPlaneAnim; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_3_FFD0C65469BD86D7_METHOD_3_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x160A9CD0)
#define CLASS_3_FFD0C65469BD86D7_METHOD_3_C38F03C1E988B48E_OFFSET UNITYSDK_OFFSET(0x160A9FC0)
#define CLASS_3_FFD0C65469BD86D7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x160A9C80)
#define CLASS_3_FFD0C65469BD86D7__CTOR_OFFSET UNITYSDK_OFFSET(0x160A9C50)

inline static constexpr unsigned int Class_3_FFD0C65469BD86D7_TypeDefinitionIndex = 58345;

class Class_3_FFD0C65469BD86D7 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LittleGameAbilityPixAirTriggerPlaneAnim*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LittleGameAbilityPixAirTriggerPlaneAnim* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LittleGameAbilityPixAirTriggerPlaneAnim*))((::PBYTE)hIl2Cpp + CLASS_3_FFD0C65469BD86D7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0C65469BD86D7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFD0C65469BD86D7_METHOD_3_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_3_C38F03C1E988B48E(::Class_0_16E4307DCC419505_255* a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_255*))((::PBYTE)hIl2Cpp + CLASS_3_FFD0C65469BD86D7_METHOD_3_C38F03C1E988B48E_OFFSET))(this, a1);
	}
};
