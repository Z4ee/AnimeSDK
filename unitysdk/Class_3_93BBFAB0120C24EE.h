#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class EnableAutoBlink; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_93BBFAB0120C24EE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1645AEA0)
#define CLASS_3_93BBFAB0120C24EE__CTOR_OFFSET UNITYSDK_OFFSET(0x1645AE70)

inline static constexpr unsigned int Class_3_93BBFAB0120C24EE_TypeDefinitionIndex = 53349;

class Class_3_93BBFAB0120C24EE : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::EnableAutoBlink*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnableAutoBlink* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnableAutoBlink*))((::PBYTE)hIl2Cpp + CLASS_3_93BBFAB0120C24EE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_93BBFAB0120C24EE_ONTASKBEGIN_OFFSET))(this);
	}
};
