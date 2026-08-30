#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_CAE56A06A3BFC7DB;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE3BC0A9B1372E7D_9_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A75E630)
#define CLASS_3_FE3BC0A9B1372E7D_9_METHOD_3_B6F71B3A651A50DC_OFFSET UNITYSDK_OFFSET(0x1A75E4B0)
#define CLASS_3_FE3BC0A9B1372E7D_9_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A75E320)
#define CLASS_3_FE3BC0A9B1372E7D_9__CTOR_OFFSET UNITYSDK_OFFSET(0x1A75E2A0)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_9_TypeDefinitionIndex = 52951;

class Class_3_FE3BC0A9B1372E7D_9 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CAE56A06A3BFC7DB*>
{
public:
	::Class_2_5436AF4270279182* CKCHKBCBNIJ; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CAE56A06A3BFC7DB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CAE56A06A3BFC7DB*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_9_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_B6F71B3A651A50DC(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_9_METHOD_3_B6F71B3A651A50DC_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_9_DISPOSE_OFFSET))(this);
	}
};
