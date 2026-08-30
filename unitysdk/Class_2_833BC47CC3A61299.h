#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/Class_2_833BC47CC3A61299_Struct_2_366FBCE4635B72E1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class RefreshQingQueEnergyBarState; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_833BC47CC3A61299_DISPOSE_OFFSET UNITYSDK_OFFSET(0x170AA670)
#define CLASS_2_833BC47CC3A61299_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x170AA6B0)
#define CLASS_2_833BC47CC3A61299_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x170AAFC0)
#define CLASS_2_833BC47CC3A61299_TICK_OFFSET UNITYSDK_OFFSET(0x170AB010)
#define CLASS_2_833BC47CC3A61299__CTOR_OFFSET UNITYSDK_OFFSET(0x170AA430)

inline static constexpr unsigned int Class_2_833BC47CC3A61299_TypeDefinitionIndex = 55493;

class Class_2_833BC47CC3A61299 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Il2CppArray<::Class_2_833BC47CC3A61299_Struct_2_366FBCE4635B72E1>* GHPNFDDOJML; // 0x18
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
	::RPG::GameCore::RefreshQingQueEnergyBarState* OFKGLJOAMLD; // 0x28
	::RPG::GameCore::StringHash PGFABOACJBK; // 0x30
	::RPG::GameCore::StringHash PEBBMAFBICA; // 0x34
	::RPG::GameCore::StringHash EONNKGEFNOD; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RefreshQingQueEnergyBarState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RefreshQingQueEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_833BC47CC3A61299__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_833BC47CC3A61299_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_833BC47CC3A61299_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_833BC47CC3A61299_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_833BC47CC3A61299_TICK_OFFSET))(this, a1);
	}
};
