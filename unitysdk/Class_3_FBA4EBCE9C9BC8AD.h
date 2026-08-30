#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowFiveDimBillboardChestIcon; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FBA4EBCE9C9BC8AD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA5A200)
#define CLASS_3_FBA4EBCE9C9BC8AD__CTOR_OFFSET UNITYSDK_OFFSET(0xBA5A1D0)

inline static constexpr unsigned int Class_3_FBA4EBCE9C9BC8AD_TypeDefinitionIndex = 53165;

class Class_3_FBA4EBCE9C9BC8AD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowFiveDimBillboardChestIcon*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFiveDimBillboardChestIcon* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFiveDimBillboardChestIcon*))((::PBYTE)hIl2Cpp + CLASS_3_FBA4EBCE9C9BC8AD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FBA4EBCE9C9BC8AD_ONTASKBEGIN_OFFSET))(this);
	}
};
