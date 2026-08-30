#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_99753979116C9D56.h"

class Class_1_0AD6129525BF5F86;
class Class_1_2B8E0B4950FE44E7;
namespace RPG::GameCore { class NewFireWaveProjectile; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_35DB83984B400B52_METHOD_3_0F779F752BEA6C8D_OFFSET UNITYSDK_OFFSET(0x1562A410)
#define CLASS_3_35DB83984B400B52__CTOR_OFFSET UNITYSDK_OFFSET(0x1562A3F0)

inline static constexpr unsigned int Class_3_35DB83984B400B52_TypeDefinitionIndex = 55434;

class Class_3_35DB83984B400B52 : public ::Class_2_99753979116C9D56
{
public:
	::RPG::GameCore::NewFireWaveProjectile* CHKGAMDMBBK; // 0x50

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NewFireWaveProjectile* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NewFireWaveProjectile*))((::PBYTE)hIl2Cpp + CLASS_3_35DB83984B400B52__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_0AD6129525BF5F86* Method_3_0F779F752BEA6C8D(::Class_1_2B8E0B4950FE44E7* a1)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_3_35DB83984B400B52_METHOD_3_0F779F752BEA6C8D_OFFSET))(this, a1);
	}
};
