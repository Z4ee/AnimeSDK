#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class ToastPile; }

#define CLASS_3_A0287300C8A4B006_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16A9B940)
#define CLASS_3_A0287300C8A4B006__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9B910)

inline static constexpr unsigned int Class_3_A0287300C8A4B006_TypeDefinitionIndex = 50982;

class Class_3_A0287300C8A4B006 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ToastPile*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ToastPile* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ToastPile*))((::PBYTE)hIl2Cpp + CLASS_3_A0287300C8A4B006__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A0287300C8A4B006_ONTASKBEGIN_OFFSET))(this);
	}
};
