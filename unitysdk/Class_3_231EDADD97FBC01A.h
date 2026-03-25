#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ChimeraDuelShopGuideDragUpgrade; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_231EDADD97FBC01A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11504370)
#define CLASS_3_231EDADD97FBC01A__CTOR_OFFSET UNITYSDK_OFFSET(0x11504340)

inline static constexpr unsigned int Class_3_231EDADD97FBC01A_TypeDefinitionIndex = 43039;

class Class_3_231EDADD97FBC01A : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ChimeraDuelShopGuideDragUpgrade*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChimeraDuelShopGuideDragUpgrade* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChimeraDuelShopGuideDragUpgrade*))((::PBYTE)hIl2Cpp + CLASS_3_231EDADD97FBC01A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_231EDADD97FBC01A_ONTASKBEGIN_OFFSET))(this);
	}
};
