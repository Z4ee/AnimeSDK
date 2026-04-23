#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SO_Task_1.h"

namespace RPG::GameCore { class SO_Wait; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_B85EFB2310F07342_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x92B2320)
#define CLASS_3_B85EFB2310F07342_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x92B2370)
#define CLASS_3_B85EFB2310F07342_TICK_OFFSET UNITYSDK_OFFSET(0x92B23C0)
#define CLASS_3_B85EFB2310F07342__CTOR_OFFSET UNITYSDK_OFFSET(0x92B2270)
#define CLASS_3_B85EFB2310F07342___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x92B2450)

inline static constexpr unsigned int Class_3_B85EFB2310F07342_TypeDefinitionIndex = 48123;

class Class_3_B85EFB2310F07342 : public ::RPG::GameCore::SO_Task_1<::RPG::GameCore::SO_Wait*>
{
public:
	::System::Single Field_3_0; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SO_Wait* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SO_Wait*))((::PBYTE)hIl2Cpp + CLASS_3_B85EFB2310F07342__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B85EFB2310F07342_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B85EFB2310F07342_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B85EFB2310F07342_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B85EFB2310F07342___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};
