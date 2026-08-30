#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimCustomLoadConfig; }
namespace RPG::GameCore { class FiveDimEntityVarConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }

#define CLASS_1_79F4C97127452753_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C4A2B90)
#define CLASS_1_79F4C97127452753_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C4A2C10)
#define CLASS_1_79F4C97127452753_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C4A2CA0)
#define CLASS_1_79F4C97127452753__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4A2CE0)

inline static constexpr unsigned int Class_1_79F4C97127452753_TypeDefinitionIndex = 41715;

class Class_1_79F4C97127452753 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimCustomLoadConfig* LEPGEFCALCH; // 0x10
	::RPG::GameCore::LittleGameEntityConfig* HEOPJACOFPI; // 0x18
	::RPG::PoolList_1<::System::UInt32>* EGGCADJJJOD; // 0x20
	::RPG::GameCore::FiveDimEntityVarConfig* JNEACCAPCHE; // 0x28
	::System::Boolean IOBJFEJFLJP; // 0x30
	::System::Boolean ANEDAPKOFBC; // 0x31
	::System::UInt32 BNLCCCCMABF; // 0x34
	::System::UInt32 DFEJABODPGM; // 0x38
	::System::Int32 NJGKCPOOHDM; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F4C97127452753__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F4C97127452753_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F4C97127452753_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_79F4C97127452753_ONRECYCLE_OFFSET))(this);
	}
};
