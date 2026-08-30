#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF52DEA727FB5C45_1;
namespace RPG::Client { class IRogueTournGameSettleResultComposition; }

#define CLASS_1_97537DA7B5A31025_METHOD_1_D92860DA15D54A70_OFFSET UNITYSDK_OFFSET(0x17EC3E70)
#define CLASS_1_97537DA7B5A31025__CTOR_OFFSET UNITYSDK_OFFSET(0x17EC3F30)

inline static constexpr unsigned int Class_1_97537DA7B5A31025_TypeDefinitionIndex = 67840;

class Class_1_97537DA7B5A31025 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97537DA7B5A31025__CTOR_OFFSET))(this);
	}

	::RPG::Client::IRogueTournGameSettleResultComposition* Method_1_D92860DA15D54A70(::Class_1_EF52DEA727FB5C45_1* a1)
	{
		return ((::RPG::Client::IRogueTournGameSettleResultComposition*(*)(::PVOID, ::Class_1_EF52DEA727FB5C45_1*))((::PBYTE)hIl2Cpp + CLASS_1_97537DA7B5A31025_METHOD_1_D92860DA15D54A70_OFFSET))(this, a1);
	}
};
