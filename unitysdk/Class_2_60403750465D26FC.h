#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EC48B02F4392F56D.h"

namespace RPG::GameCore { class PropComponent; }

#define CLASS_2_60403750465D26FC_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x1356F2E0)
#define CLASS_2_60403750465D26FC_METHOD_2_1F6790C3F844E7A6_OFFSET UNITYSDK_OFFSET(0x1356F340)
#define CLASS_2_60403750465D26FC_METHOD_2_FD0AF03D571F241F_OFFSET UNITYSDK_OFFSET(0x1356F550)
#define CLASS_2_60403750465D26FC__CTOR_OFFSET UNITYSDK_OFFSET(0x1356F530)
#define CLASS_2_60403750465D26FC___IFIXBASEPROXY_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x1356F540)

inline static constexpr unsigned int Class_2_60403750465D26FC_TypeDefinitionIndex = 56675;

class Class_2_60403750465D26FC : public ::Class_1_EC48B02F4392F56D
{
public:
	::System::Void _ctor(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_60403750465D26FC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_IconID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60403750465D26FC_GET_ICONID_OFFSET))(this);
	}

	::System::Int32 Method_2_1F6790C3F844E7A6()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60403750465D26FC_METHOD_2_1F6790C3F844E7A6_OFFSET))(this);
	}

	::System::UInt32 __iFixBaseProxy_get_IconID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60403750465D26FC___IFIXBASEPROXY_GET_ICONID_OFFSET))(this);
	}

	::System::Int32 Method_2_FD0AF03D571F241F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60403750465D26FC_METHOD_2_FD0AF03D571F241F_OFFSET))(this);
	}
};
