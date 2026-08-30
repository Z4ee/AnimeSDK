#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_0131E8B6994DD6AD;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE3BC0A9B1372E7D_6_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17E64DC0)
#define CLASS_3_FE3BC0A9B1372E7D_6_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17E64C20)
#define CLASS_3_FE3BC0A9B1372E7D_6_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17E64D70)
#define CLASS_3_FE3BC0A9B1372E7D_6__CTOR_OFFSET UNITYSDK_OFFSET(0x17E64BA0)
#define CLASS_3_FE3BC0A9B1372E7D_6__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x17E64E00)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_6_TypeDefinitionIndex = 52943;

class Class_3_FE3BC0A9B1372E7D_6 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_0131E8B6994DD6AD*>
{
public:
	::Class_2_5436AF4270279182* CKCHKBCBNIJ; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_0131E8B6994DD6AD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_0131E8B6994DD6AD*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_6_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_6_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_6_DISPOSE_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_6__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};
