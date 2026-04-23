#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_94722492AD60B3C8.h"

class Class_1_0AD6129525BF5F86;
class Class_1_2B8E0B4950FE44E7;
namespace RPG::GameCore { class NewFireWaveProjectile; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_35DB83984B400B52_METHOD_3_3225BD0CE82BEB72_OFFSET UNITYSDK_OFFSET(0x9A374E0)
#define CLASS_3_35DB83984B400B52_METHOD_3_74E44B9CCE5A09FA_OFFSET UNITYSDK_OFFSET(0x9A37610)
#define CLASS_3_35DB83984B400B52__CTOR_OFFSET UNITYSDK_OFFSET(0x9A374C0)

inline static constexpr unsigned int Class_3_35DB83984B400B52_TypeDefinitionIndex = 50922;

class Class_3_35DB83984B400B52 : public ::Class_2_94722492AD60B3C8
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

	::Class_1_0AD6129525BF5F86* Method_3_74E44B9CCE5A09FA(::Class_1_2B8E0B4950FE44E7* P0)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_3_35DB83984B400B52_METHOD_3_74E44B9CCE5A09FA_OFFSET))(this, P0);
	}
};
