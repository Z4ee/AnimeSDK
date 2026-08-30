#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_F6A143F4D17E8E39;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_119_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB5D16E0)
#define CLASS_3_27518451A20BB161_119__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D16B0)

inline static constexpr unsigned int Class_3_27518451A20BB161_119_TypeDefinitionIndex = 54039;

class Class_3_27518451A20BB161_119 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F6A143F4D17E8E39*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F6A143F4D17E8E39* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F6A143F4D17E8E39*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_119__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_119_ONTASKBEGIN_OFFSET))(this);
	}
};
