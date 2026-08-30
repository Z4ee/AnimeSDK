#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_4C8453486C91E3A1_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimTrampolineConfig; }

#define CLASS_1_362DDBE3F3495DA5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4AA430)

inline static constexpr unsigned int Class_1_362DDBE3F3495DA5_TypeDefinitionIndex = 41808;

class Class_1_362DDBE3F3495DA5 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimTrampolineConfig* EABKOHGCHFP; // 0x10
	::Struct_2_4C8453486C91E3A1_1 BPAPBAFOMCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_362DDBE3F3495DA5__CTOR_OFFSET))(this);
	}
};
