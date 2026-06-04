#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_0_16E4307DCC419505_401;
namespace RPG::GameCore { class ST_Side_RegisterSpecialEvent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_C2E0743D9E94CB1F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13807280)
#define CLASS_3_C2E0743D9E94CB1F_METHOD_3_A96117CBDF3EBAC8_OFFSET UNITYSDK_OFFSET(0x138075D0)
#define CLASS_3_C2E0743D9E94CB1F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13807390)
#define CLASS_3_C2E0743D9E94CB1F_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x138074B0)
#define CLASS_3_C2E0743D9E94CB1F__CTOR_OFFSET UNITYSDK_OFFSET(0x13807250)
#define CLASS_3_C2E0743D9E94CB1F___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13807810)

inline static constexpr unsigned int Class_3_C2E0743D9E94CB1F_TypeDefinitionIndex = 48856;

class Class_3_C2E0743D9E94CB1F : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_RegisterSpecialEvent*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_RegisterSpecialEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_RegisterSpecialEvent*))((::PBYTE)hIl2Cpp + CLASS_3_C2E0743D9E94CB1F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2E0743D9E94CB1F_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2E0743D9E94CB1F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2E0743D9E94CB1F_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_A96117CBDF3EBAC8(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_3_C2E0743D9E94CB1F_METHOD_3_A96117CBDF3EBAC8_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C2E0743D9E94CB1F___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
