#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_35F1F8484B942B1E;
namespace RPG::GameCore { class FiveDimGravityFieldRingConfig; }

#define CLASS_1_91A4EA349B7099C2_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C487520)
#define CLASS_1_91A4EA349B7099C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1C487580)

inline static constexpr unsigned int Class_1_91A4EA349B7099C2_TypeDefinitionIndex = 41870;

class Class_1_91A4EA349B7099C2 : public ::System::Object
{
public:
	::Class_1_35F1F8484B942B1E* BPAPBAFOMCH; // 0x10
	::RPG::GameCore::FiveDimGravityFieldRingConfig* EABKOHGCHFP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91A4EA349B7099C2__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_91A4EA349B7099C2_CLEAR_OFFSET))(this);
	}
};
