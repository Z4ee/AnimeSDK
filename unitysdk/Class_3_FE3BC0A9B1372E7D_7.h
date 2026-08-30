#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_3E99D33E36863945;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE3BC0A9B1372E7D_7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17AFEF10)
#define CLASS_3_FE3BC0A9B1372E7D_7_METHOD_3_084EDEAA4A2FA328_OFFSET UNITYSDK_OFFSET(0x17AFECC0)
#define CLASS_3_FE3BC0A9B1372E7D_7_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17AFE900)
#define CLASS_3_FE3BC0A9B1372E7D_7_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17AFEEC0)
#define CLASS_3_FE3BC0A9B1372E7D_7__CTOR_OFFSET UNITYSDK_OFFSET(0x17AFE880)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_7_TypeDefinitionIndex = 52944;

class Class_3_FE3BC0A9B1372E7D_7 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3E99D33E36863945*>
{
public:
	::Class_2_5436AF4270279182* CKCHKBCBNIJ; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3E99D33E36863945* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3E99D33E36863945*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_7_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_7_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_7_DISPOSE_OFFSET))(this);
	}

	::System::UInt32 Method_3_084EDEAA4A2FA328()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_7_METHOD_3_084EDEAA4A2FA328_OFFSET))(this);
	}
};
