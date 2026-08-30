#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_C79B3E962F8531E4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE3BC0A9B1372E7D_5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7E3790)
#define CLASS_3_FE3BC0A9B1372E7D_5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A7E3300)
#define CLASS_3_FE3BC0A9B1372E7D_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7E3280)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_5_TypeDefinitionIndex = 52939;

class Class_3_FE3BC0A9B1372E7D_5 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_C79B3E962F8531E4*>
{
public:
	::Class_2_5436AF4270279182* CKCHKBCBNIJ; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C79B3E962F8531E4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C79B3E962F8531E4*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_5_DISPOSE_OFFSET))(this);
	}
};
