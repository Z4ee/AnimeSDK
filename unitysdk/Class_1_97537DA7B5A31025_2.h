#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF52DEA727FB5C45_1;
namespace RPG::Client { class IRogueTournGameSettleResultComposition; }

#define CLASS_1_97537DA7B5A31025_2_METHOD_1_D92860DA15D54A70_OFFSET UNITYSDK_OFFSET(0x11E84A40)
#define CLASS_1_97537DA7B5A31025_2__CTOR_OFFSET UNITYSDK_OFFSET(0x11E84B20)

inline static constexpr unsigned int Class_1_97537DA7B5A31025_2_TypeDefinitionIndex = 67851;

class Class_1_97537DA7B5A31025_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97537DA7B5A31025_2__CTOR_OFFSET))(this);
	}

	::RPG::Client::IRogueTournGameSettleResultComposition* Method_1_D92860DA15D54A70(::Class_1_EF52DEA727FB5C45_1* a1)
	{
		return ((::RPG::Client::IRogueTournGameSettleResultComposition*(*)(::PVOID, ::Class_1_EF52DEA727FB5C45_1*))((::PBYTE)hIl2Cpp + CLASS_1_97537DA7B5A31025_2_METHOD_1_D92860DA15D54A70_OFFSET))(this, a1);
	}
};
