#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/Struct_2_DF90B2BD73749811_1.h"

namespace RPG::GameCore { class AddAdventureModifier; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_D661F65514A258E2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x95BA190)
#define CLASS_3_D661F65514A258E2__CTOR_OFFSET UNITYSDK_OFFSET(0x95BA160)

inline static constexpr unsigned int Class_3_D661F65514A258E2_TypeDefinitionIndex = 53350;

class Class_3_D661F65514A258E2 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AddAdventureModifier*>
{
public:
	::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddAdventureModifier* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddAdventureModifier*))((::PBYTE)hIl2Cpp + CLASS_3_D661F65514A258E2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D661F65514A258E2_ONTASKBEGIN_OFFSET))(this);
	}
};
