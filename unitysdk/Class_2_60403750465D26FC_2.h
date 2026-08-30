#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EC48B02F4392F56D.h"

namespace RPG::GameCore { class PropComponent; }

#define CLASS_2_60403750465D26FC_2_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x18E4EAB0)
#define CLASS_2_60403750465D26FC_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18E4EB70)

inline static constexpr unsigned int Class_2_60403750465D26FC_2_TypeDefinitionIndex = 60744;

class Class_2_60403750465D26FC_2 : public ::Class_1_EC48B02F4392F56D
{
public:
	::System::Void _ctor(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_60403750465D26FC_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_IconID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60403750465D26FC_2_GET_ICONID_OFFSET))(this);
	}
};
