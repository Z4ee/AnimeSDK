#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_3F4D673D3F90D12C;
namespace RPG::GameCore { class ST_Side_MuteVision; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_3141D94E609C9E4D_METHOD_3_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x18DA6710)
#define CLASS_3_3141D94E609C9E4D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18DA6620)
#define CLASS_3_3141D94E609C9E4D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18DA66C0)
#define CLASS_3_3141D94E609C9E4D_TICK_OFFSET UNITYSDK_OFFSET(0x18DA67D0)
#define CLASS_3_3141D94E609C9E4D__CTOR_OFFSET UNITYSDK_OFFSET(0x18DA6560)

inline static constexpr unsigned int Class_3_3141D94E609C9E4D_TypeDefinitionIndex = 49862;

class Class_3_3141D94E609C9E4D : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_MuteVision*>
{
public:
	::Class_2_3F4D673D3F90D12C* Field_3_0; // 0x28
	::System::Boolean Field_3_1; // 0x30
	::System::Boolean Field_3_2; // 0x31
	::System::Single Field_3_3; // 0x34

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_MuteVision* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_MuteVision*))((::PBYTE)hIl2Cpp + CLASS_3_3141D94E609C9E4D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3141D94E609C9E4D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3141D94E609C9E4D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3141D94E609C9E4D_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3141D94E609C9E4D_METHOD_3_7744894CEC41BF06_OFFSET))(this);
	}
};
