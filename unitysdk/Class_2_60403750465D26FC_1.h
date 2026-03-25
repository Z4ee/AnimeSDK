#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EC48B02F4392F56D.h"

namespace RPG::GameCore { class PropComponent; }

#define CLASS_2_60403750465D26FC_1_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x8D38610)
#define CLASS_2_60403750465D26FC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8D387B0)
#define CLASS_2_60403750465D26FC_1___IFIXBASEPROXY_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x8D387C0)

inline static constexpr unsigned int Class_2_60403750465D26FC_1_TypeDefinitionIndex = 49126;

class Class_2_60403750465D26FC_1 : public ::Class_1_EC48B02F4392F56D
{
public:
	::System::Void _ctor(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_60403750465D26FC_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_IconID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60403750465D26FC_1_GET_ICONID_OFFSET))(this);
	}

	::System::UInt32 __iFixBaseProxy_get_IconID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60403750465D26FC_1___IFIXBASEPROXY_GET_ICONID_OFFSET))(this);
	}
};
