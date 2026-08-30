#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_CAE56A06A3BFC7DB_3;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE3BC0A9B1372E7D_4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186C27C0)
#define CLASS_3_FE3BC0A9B1372E7D_4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x186C2260)
#define CLASS_3_FE3BC0A9B1372E7D_4__CTOR_OFFSET UNITYSDK_OFFSET(0x186C21E0)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_4_TypeDefinitionIndex = 52937;

class Class_3_FE3BC0A9B1372E7D_4 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CAE56A06A3BFC7DB_3*>
{
public:
	::Class_2_5436AF4270279182* NFJGMKPFPOC; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CAE56A06A3BFC7DB_3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CAE56A06A3BFC7DB_3*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_4_DISPOSE_OFFSET))(this);
	}
};
