#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MarbleCoopBossBornPosition; }

#define CLASS_1_B0DE39839E6C6513__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E1320)

inline static constexpr unsigned int Class_1_B0DE39839E6C6513_TypeDefinitionIndex = 42184;

class Class_1_B0DE39839E6C6513 : public ::System::Object
{
public:
	::Il2CppArray<::System::UInt32>* FBPPJBJLALM; // 0x10
	::Il2CppArray<::System::UInt32>* JEHKEIEAFFP; // 0x18
	::Il2CppArray<::RPG::GameCore::MarbleCoopBossBornPosition*>* BJOKADDCEKP; // 0x20
	::Il2CppArray<::System::UInt32>* KAJKMBBABGJ; // 0x28
	::System::Boolean NPGEBGGFHFG; // 0x30
	::System::Single NKPKPNKBBAP; // 0x34
	::System::Single JBCFPAEELBL; // 0x38
	::System::Single FKBALPLGOEC; // 0x3C
	::System::Single PNMMOEFLFBH; // 0x40
	::System::Single KHAPPPBDEEE; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0DE39839E6C6513__CTOR_OFFSET))(this);
	}
};
