#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_32A870E0A57B49DE;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE3BC0A9B1372E7D_11_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCFCCBE0)
#define CLASS_3_FE3BC0A9B1372E7D_11_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCFCC780)
#define CLASS_3_FE3BC0A9B1372E7D_11_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCFCCB90)
#define CLASS_3_FE3BC0A9B1372E7D_11__CTOR_OFFSET UNITYSDK_OFFSET(0xCFCC700)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_11_TypeDefinitionIndex = 52953;

class Class_3_FE3BC0A9B1372E7D_11 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_32A870E0A57B49DE*>
{
public:
	::Class_2_5436AF4270279182* CKCHKBCBNIJ; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_32A870E0A57B49DE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_32A870E0A57B49DE*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_11__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_11_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_11_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_11_DISPOSE_OFFSET))(this);
	}
};
