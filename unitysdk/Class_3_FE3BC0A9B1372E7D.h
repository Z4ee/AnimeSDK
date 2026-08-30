#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_CAE56A06A3BFC7DB_2;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE3BC0A9B1372E7D_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8FCA20)
#define CLASS_3_FE3BC0A9B1372E7D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB8FC580)
#define CLASS_3_FE3BC0A9B1372E7D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB8FC9D0)
#define CLASS_3_FE3BC0A9B1372E7D__CTOR_OFFSET UNITYSDK_OFFSET(0xB8FC500)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_TypeDefinitionIndex = 52921;

class Class_3_FE3BC0A9B1372E7D : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CAE56A06A3BFC7DB_2*>
{
public:
	::Class_2_5436AF4270279182* CKCHKBCBNIJ; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CAE56A06A3BFC7DB_2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CAE56A06A3BFC7DB_2*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_DISPOSE_OFFSET))(this);
	}
};
