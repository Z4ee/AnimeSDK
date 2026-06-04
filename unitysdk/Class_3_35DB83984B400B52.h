#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_99753979116C9D56.h"

class Class_1_0AD6129525BF5F86;
class Class_1_2B8E0B4950FE44E7;
namespace RPG::GameCore { class NewFireWaveProjectile; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_35DB83984B400B52_METHOD_3_3225BD0CE82BEB72_OFFSET UNITYSDK_OFFSET(0x13844990)
#define CLASS_3_35DB83984B400B52_METHOD_3_A9755D53D34838F3_OFFSET UNITYSDK_OFFSET(0x13844AD0)
#define CLASS_3_35DB83984B400B52__CTOR_OFFSET UNITYSDK_OFFSET(0x13844970)

inline static constexpr unsigned int Class_3_35DB83984B400B52_TypeDefinitionIndex = 51592;

class Class_3_35DB83984B400B52 : public ::Class_2_99753979116C9D56
{
public:
	::RPG::GameCore::NewFireWaveProjectile* Field_3_0; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NewFireWaveProjectile* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NewFireWaveProjectile*))((::PBYTE)hIl2Cpp + CLASS_3_35DB83984B400B52__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_0AD6129525BF5F86* Method_3_3225BD0CE82BEB72(::Class_1_2B8E0B4950FE44E7* a1)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_3_35DB83984B400B52_METHOD_3_3225BD0CE82BEB72_OFFSET))(this, a1);
	}

	::Class_1_0AD6129525BF5F86* Method_3_A9755D53D34838F3(::Class_1_2B8E0B4950FE44E7* a1)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_3_35DB83984B400B52_METHOD_3_A9755D53D34838F3_OFFSET))(this, a1);
	}
};
