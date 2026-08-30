#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Struct_2_D3027B1CDFF61281.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFloorSavedValueChange; }
namespace System { class String; }

#define CLASS_2_6FC997749E87DAB6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1584FF50)
#define CLASS_2_6FC997749E87DAB6_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x158503E0)
#define CLASS_2_6FC997749E87DAB6_METHOD_2_2CBE0B79DD36047E_OFFSET UNITYSDK_OFFSET(0x15850260)
#define CLASS_2_6FC997749E87DAB6_METHOD_2_FA383E53DEC53851_OFFSET UNITYSDK_OFFSET(0x15850560)
#define CLASS_2_6FC997749E87DAB6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15850210)
#define CLASS_2_6FC997749E87DAB6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x158500E0)
#define CLASS_2_6FC997749E87DAB6_TICK_OFFSET UNITYSDK_OFFSET(0x15850140)
#define CLASS_2_6FC997749E87DAB6__CTOR_OFFSET UNITYSDK_OFFSET(0x1584FD80)

inline static constexpr unsigned int Class_2_6FC997749E87DAB6_TypeDefinitionIndex = 53726;

class Class_2_6FC997749E87DAB6 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::WaitFloorSavedValueChange* OFKGLJOAMLD; // 0x18
	::Class_1_5F51D4049EA87B7B* FCOLIHKCCLG; // 0x20
	::Struct_2_D3027B1CDFF61281 OLMFJLICIIA; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFloorSavedValueChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFloorSavedValueChange*))((::PBYTE)hIl2Cpp + CLASS_2_6FC997749E87DAB6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FC997749E87DAB6_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6FC997749E87DAB6_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FC997749E87DAB6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FC997749E87DAB6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_FA383E53DEC53851(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6FC997749E87DAB6_METHOD_2_FA383E53DEC53851_OFFSET))(this, a1);
	}

	::System::Void Method_2_2CBE0B79DD36047E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FC997749E87DAB6_METHOD_2_2CBE0B79DD36047E_OFFSET))(this);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6FC997749E87DAB6_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}
};
