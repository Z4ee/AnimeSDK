#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_CAE56A06A3BFC7DB_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE3BC0A9B1372E7D_12_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8E9BA0)
#define CLASS_3_FE3BC0A9B1372E7D_12_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8E9300)
#define CLASS_3_FE3BC0A9B1372E7D_12__CTOR_OFFSET UNITYSDK_OFFSET(0xB8E9280)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_12_TypeDefinitionIndex = 52956;

class Class_3_FE3BC0A9B1372E7D_12 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CAE56A06A3BFC7DB_1*>
{
public:
	::Class_2_5436AF4270279182* CKCHKBCBNIJ; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CAE56A06A3BFC7DB_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CAE56A06A3BFC7DB_1*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_12__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_12_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_12_DISPOSE_OFFSET))(this);
	}
};
