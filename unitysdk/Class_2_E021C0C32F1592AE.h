#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class WaitPlanetFesLargeBonus; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_2_E021C0C32F1592AE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8750500)
#define CLASS_2_E021C0C32F1592AE_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x8750760)
#define CLASS_2_E021C0C32F1592AE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8750590)
#define CLASS_2_E021C0C32F1592AE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x87506B0)
#define CLASS_2_E021C0C32F1592AE_TICK_OFFSET UNITYSDK_OFFSET(0x8750700)
#define CLASS_2_E021C0C32F1592AE__CTOR_OFFSET UNITYSDK_OFFSET(0x8750480)

inline static constexpr unsigned int Class_2_E021C0C32F1592AE_TypeDefinitionIndex = 47579;

class Class_2_E021C0C32F1592AE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_2; // 0x18
	::RPG::Client::WaitPlanetFesLargeBonus* Field_2_1; // 0x20
	::System::Boolean Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::WaitPlanetFesLargeBonus* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::WaitPlanetFesLargeBonus*))((::PBYTE)hIl2Cpp + CLASS_2_E021C0C32F1592AE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E021C0C32F1592AE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E021C0C32F1592AE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E021C0C32F1592AE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E021C0C32F1592AE_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_E021C0C32F1592AE_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}
};
