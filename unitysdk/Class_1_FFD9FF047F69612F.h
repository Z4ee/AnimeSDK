#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_82297B6AFFE49354_1;
namespace RPG::GameCore { class FiveDimDashOrbConfig; }

#define CLASS_1_FFD9FF047F69612F_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8FE5B0)
#define CLASS_1_FFD9FF047F69612F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8FE610)

inline static constexpr unsigned int Class_1_FFD9FF047F69612F_TypeDefinitionIndex = 43510;

class Class_1_FFD9FF047F69612F : public ::System::Object
{
public:
	::Class_1_82297B6AFFE49354_1* BPAPBAFOMCH; // 0x10
	::RPG::GameCore::FiveDimDashOrbConfig* EABKOHGCHFP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFD9FF047F69612F__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFD9FF047F69612F_CLEAR_OFFSET))(this);
	}
};
