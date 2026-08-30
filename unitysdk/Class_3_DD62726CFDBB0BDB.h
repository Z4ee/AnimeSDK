#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_FA3DB7B30E78C0CA_7;
namespace RPG::Client::LimaoNews { class LimaoNewsNetworkService; }
namespace RPG::Client::LimaoNews { class LimaoNewsPlanService; }
namespace RPG::Client::LimaoNews { class LimaoNewsWindowService; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_DD62726CFDBB0BDB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x195D2AC0)
#define CLASS_3_DD62726CFDBB0BDB_METHOD_3_11A5396029C33A57_OFFSET UNITYSDK_OFFSET(0x195D2DC0)
#define CLASS_3_DD62726CFDBB0BDB_METHOD_3_8C3DB70FFBBF01C7_OFFSET UNITYSDK_OFFSET(0x195D2CA0)
#define CLASS_3_DD62726CFDBB0BDB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x195D2B80)
#define CLASS_3_DD62726CFDBB0BDB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x195D2A10)
#define CLASS_3_DD62726CFDBB0BDB_TICK_OFFSET UNITYSDK_OFFSET(0x195D2A60)
#define CLASS_3_DD62726CFDBB0BDB__CTOR_OFFSET UNITYSDK_OFFSET(0x195D2930)

inline static constexpr unsigned int Class_3_DD62726CFDBB0BDB_TypeDefinitionIndex = 53210;

class Class_3_DD62726CFDBB0BDB : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_FA3DB7B30E78C0CA_7*>
{
public:
	::RPG::Client::LimaoNews::LimaoNewsPlanService* IAHMPKBCKBF; // 0x28
	::RPG::Client::LimaoNews::LimaoNewsWindowService* MPFFGNPIDOA; // 0x30
	::RPG::Client::LimaoNews::LimaoNewsNetworkService* MJHHLOPFDNK; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_FA3DB7B30E78C0CA_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_FA3DB7B30E78C0CA_7*))((::PBYTE)hIl2Cpp + CLASS_3_DD62726CFDBB0BDB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD62726CFDBB0BDB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_DD62726CFDBB0BDB_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD62726CFDBB0BDB_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD62726CFDBB0BDB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_8C3DB70FFBBF01C7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_DD62726CFDBB0BDB_METHOD_3_8C3DB70FFBBF01C7_OFFSET))(this, a1);
	}

	::System::Void Method_3_11A5396029C33A57()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DD62726CFDBB0BDB_METHOD_3_11A5396029C33A57_OFFSET))(this);
	}
};
