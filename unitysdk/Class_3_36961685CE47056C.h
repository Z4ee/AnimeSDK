#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByLocalPlayerAvatarID; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_36961685CE47056C_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1435F050)
#define CLASS_3_36961685CE47056C_METHOD_3_7D41A1A7E79589E1_OFFSET UNITYSDK_OFFSET(0x1435F2C0)
#define CLASS_3_36961685CE47056C_METHOD_3_E9987BC5D978CFE2_OFFSET UNITYSDK_OFFSET(0x1435F140)
#define CLASS_3_36961685CE47056C__CTOR_OFFSET UNITYSDK_OFFSET(0x1435F020)

inline static constexpr unsigned int Class_3_36961685CE47056C_TypeDefinitionIndex = 49672;

class Class_3_36961685CE47056C : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByLocalPlayerAvatarID*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByLocalPlayerAvatarID* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByLocalPlayerAvatarID*))((::PBYTE)hIl2Cpp + CLASS_3_36961685CE47056C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36961685CE47056C_EVALUATE_OFFSET))(this);
	}

	::System::UInt32 Method_3_E9987BC5D978CFE2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_36961685CE47056C_METHOD_3_E9987BC5D978CFE2_OFFSET))(this);
	}

	::System::Boolean Method_3_7D41A1A7E79589E1(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_36961685CE47056C_METHOD_3_7D41A1A7E79589E1_OFFSET))(this, a1);
	}
};
