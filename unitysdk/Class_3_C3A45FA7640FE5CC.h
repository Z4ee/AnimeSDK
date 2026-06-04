#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_0_16E4307DCC419505_401;
class Class_2_469A56953483CA0D;
class Class_2_A0580152EB393340;
namespace RPG::GameCore { class ST_Side_ListenFindTreasureState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C3A45FA7640FE5CC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x136172D0)
#define CLASS_3_C3A45FA7640FE5CC_METHOD_3_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x13617560)
#define CLASS_3_C3A45FA7640FE5CC_METHOD_3_BB3EF29C34E2B01F_OFFSET UNITYSDK_OFFSET(0x136175F0)
#define CLASS_3_C3A45FA7640FE5CC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13617050)
#define CLASS_3_C3A45FA7640FE5CC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x136171D0)
#define CLASS_3_C3A45FA7640FE5CC_TICK_OFFSET UNITYSDK_OFFSET(0x136173D0)
#define CLASS_3_C3A45FA7640FE5CC__CTOR_OFFSET UNITYSDK_OFFSET(0x13617020)
#define CLASS_3_C3A45FA7640FE5CC___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13617760)
#define CLASS_3_C3A45FA7640FE5CC___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x13617770)

inline static constexpr unsigned int Class_3_C3A45FA7640FE5CC_TypeDefinitionIndex = 48845;

class Class_3_C3A45FA7640FE5CC : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_ListenFindTreasureState*>
{
public:
	// static const ::System::Single Field_3_0; // 0x0
	::Class_2_A0580152EB393340* Field_3_1; // 0x28
	::Class_2_469A56953483CA0D* Field_3_2; // 0x30
	::System::Single Field_3_3; // 0x38
	::System::Boolean Field_3_4; // 0x3C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_ListenFindTreasureState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_ListenFindTreasureState*))((::PBYTE)hIl2Cpp + CLASS_3_C3A45FA7640FE5CC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C3A45FA7640FE5CC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C3A45FA7640FE5CC_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C3A45FA7640FE5CC_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C3A45FA7640FE5CC_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_3_BB3EF29C34E2B01F(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_3_C3A45FA7640FE5CC_METHOD_3_BB3EF29C34E2B01F_OFFSET))(this, a1);
	}

	::System::Void Method_3_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C3A45FA7640FE5CC_METHOD_3_24B05D2E15A5C3C8_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C3A45FA7640FE5CC___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C3A45FA7640FE5CC___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
