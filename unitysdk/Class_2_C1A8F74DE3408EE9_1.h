#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/AComponentUpdateHandler_1.h"

class Class_0_16E4307DCC419505_38;
class Class_1_672FAAEF1DFFD39B;
namespace Entitas { class IEntity; }

#define CLASS_2_C1A8F74DE3408EE9_1_ONADD_OFFSET UNITYSDK_OFFSET(0xC41D910)
#define CLASS_2_C1A8F74DE3408EE9_1_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xC41DC80)
#define CLASS_2_C1A8F74DE3408EE9_1_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xC41DB00)
#define CLASS_2_C1A8F74DE3408EE9_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC41DDD0)

inline static constexpr unsigned int Class_2_C1A8F74DE3408EE9_1_TypeDefinitionIndex = 78650;

class Class_2_C1A8F74DE3408EE9_1 : public ::RPG::Client::LittleGameShare::AComponentUpdateHandler_1<::Class_1_672FAAEF1DFFD39B*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C1A8F74DE3408EE9_1__CTOR_OFFSET))(this);
	}

	::System::Void OnAdd(::Entitas::IEntity* a1, ::Class_1_672FAAEF1DFFD39B* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_672FAAEF1DFFD39B*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_C1A8F74DE3408EE9_1_ONADD_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnUpdate(::Entitas::IEntity* a1, ::Class_1_672FAAEF1DFFD39B* a2, ::Class_0_16E4307DCC419505_38* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_1_672FAAEF1DFFD39B*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_C1A8F74DE3408EE9_1_ONUPDATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnRemove(::Entitas::IEntity* a1, ::Class_0_16E4307DCC419505_38* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Class_0_16E4307DCC419505_38*))((::PBYTE)hIl2Cpp + CLASS_2_C1A8F74DE3408EE9_1_ONREMOVE_OFFSET))(this, a1, a2);
	}
};
