#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class SwitchHandForbidUIOperate; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_AB2A882D3ED84B04_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x90CFC10)
#define CLASS_3_AB2A882D3ED84B04__CTOR_OFFSET UNITYSDK_OFFSET(0x90CFBE0)

inline static constexpr unsigned int Class_3_AB2A882D3ED84B04_TypeDefinitionIndex = 49164;

class Class_3_AB2A882D3ED84B04 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SwitchHandForbidUIOperate*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SwitchHandForbidUIOperate* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SwitchHandForbidUIOperate*))((::PBYTE)hIl2Cpp + CLASS_3_AB2A882D3ED84B04__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AB2A882D3ED84B04_ONTASKBEGIN_OFFSET))(this);
	}
};
