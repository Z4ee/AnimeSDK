#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/ComponentInvisibleReason.h"
#include "unitysdk/Struct_2_CFA12135DA0D972E.h"
#include "unitysdk/System/Object.h"

class Class_1_69C7B9DFD5B449A1;
class Class_1_F35D4DA7881CD768;

#define CLASS_1_89AD82AEAD720173_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C3AF650)
#define CLASS_1_89AD82AEAD720173_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C3AF750)
#define CLASS_1_89AD82AEAD720173_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C3AF7C0)
#define CLASS_1_89AD82AEAD720173__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3AF800)

inline static constexpr unsigned int Class_1_89AD82AEAD720173_TypeDefinitionIndex = 41657;

class Class_1_89AD82AEAD720173 : public ::System::Object
{
public:
	::Class_1_69C7B9DFD5B449A1* CDJBDBKGDIL; // 0x10
	::Struct_2_CFA12135DA0D972E ANCGCNIEAAC; // 0x18
	::Class_1_F35D4DA7881CD768* DHHKBENPHMH; // 0x28
	::Class_1_69C7B9DFD5B449A1* CEEGJCAJAHB; // 0x30
	::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason EEFDHJEDMEG; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89AD82AEAD720173__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89AD82AEAD720173_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89AD82AEAD720173_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_89AD82AEAD720173_ONRECYCLE_OFFSET))(this);
	}
};
