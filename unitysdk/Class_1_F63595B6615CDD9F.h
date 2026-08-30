#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class PerceiveValueTriggerConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_F63595B6615CDD9F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F7C670)
#define CLASS_1_F63595B6615CDD9F_METHOD_1_936773021FAF4D21_OFFSET UNITYSDK_OFFSET(0x17F7C760)
#define CLASS_1_F63595B6615CDD9F_METHOD_1_FE327FD0760E1514_OFFSET UNITYSDK_OFFSET(0x17F7C6C0)
#define CLASS_1_F63595B6615CDD9F__CTOR_OFFSET UNITYSDK_OFFSET(0x17F7C660)

inline static constexpr unsigned int Class_1_F63595B6615CDD9F_TypeDefinitionIndex = 52658;

class Class_1_F63595B6615CDD9F : public ::System::Object
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x10
	::RPG::GameCore::PerceiveValueTriggerConfig* IGHAHBNLIJA; // 0x18
	::System::Single OKDDBCHCNGO; // 0x20

	::System::Void _ctor(::RPG::GameCore::PerceiveValueTriggerConfig* a1, ::RPG::GameCore::TaskContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PerceiveValueTriggerConfig*, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_F63595B6615CDD9F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F63595B6615CDD9F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_FE327FD0760E1514(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F63595B6615CDD9F_METHOD_1_FE327FD0760E1514_OFFSET))(this, a1);
	}

	::System::Void Method_1_936773021FAF4D21()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F63595B6615CDD9F_METHOD_1_936773021FAF4D21_OFFSET))(this);
	}
};
