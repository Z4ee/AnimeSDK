#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class LittleGameCustomLoadConfig; }
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace RPG::GameCore { class LittleGameEntityVarConfig; }

#define CLASS_1_71DE60ADB4655B5B_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA12F10)
#define CLASS_1_71DE60ADB4655B5B_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1CA12F90)
#define CLASS_1_71DE60ADB4655B5B_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1CA13020)
#define CLASS_1_71DE60ADB4655B5B__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA13060)

inline static constexpr unsigned int Class_1_71DE60ADB4655B5B_TypeDefinitionIndex = 43357;

class Class_1_71DE60ADB4655B5B : public ::System::Object
{
public:
	::RPG::GameCore::LittleGameEntityVarConfig* JNEACCAPCHE; // 0x10
	::RPG::GameCore::LittleGameCustomLoadConfig* LEPGEFCALCH; // 0x18
	::RPG::GameCore::LittleGameEntityConfig* HEOPJACOFPI; // 0x20
	::RPG::PoolList_1<::System::UInt32>* EGGCADJJJOD; // 0x28
	::System::Int32 NJGKCPOOHDM; // 0x30
	::System::UInt32 DFEJABODPGM; // 0x34
	::System::UInt32 BNLCCCCMABF; // 0x38
	::System::Boolean ANEDAPKOFBC; // 0x3C
	::System::Boolean IOBJFEJFLJP; // 0x3D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71DE60ADB4655B5B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71DE60ADB4655B5B_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71DE60ADB4655B5B_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71DE60ADB4655B5B_ONRECYCLE_OFFSET))(this);
	}
};
