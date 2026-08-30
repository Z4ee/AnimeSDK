#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_FA3DB7B30E78C0CA_8;
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_EA4D8959FA08F845_DISPOSE_OFFSET UNITYSDK_OFFSET(0x168945B0)
#define CLASS_3_EA4D8959FA08F845_METHOD_3_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x16894770)
#define CLASS_3_EA4D8959FA08F845_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16894670)
#define CLASS_3_EA4D8959FA08F845_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16894500)
#define CLASS_3_EA4D8959FA08F845_TICK_OFFSET UNITYSDK_OFFSET(0x16894550)
#define CLASS_3_EA4D8959FA08F845__CTOR_OFFSET UNITYSDK_OFFSET(0x16894470)

inline static constexpr unsigned int Class_3_EA4D8959FA08F845_TypeDefinitionIndex = 53213;

class Class_3_EA4D8959FA08F845 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FA3DB7B30E78C0CA_8*>
{
public:
	::RPG::Client::LimaoNews::LimaoNewsWindowService* MPFFGNPIDOA; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_8*))((::PBYTE)hIl2Cpp + CLASS_3_EA4D8959FA08F845__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA4D8959FA08F845_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EA4D8959FA08F845_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA4D8959FA08F845_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EA4D8959FA08F845_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_EA4D8959FA08F845_METHOD_3_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}
};
