#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ConvinceSplitLineChange; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_374B4A87C3BAEF86_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12893510)
#define CLASS_3_374B4A87C3BAEF86__CTOR_OFFSET UNITYSDK_OFFSET(0x128934E0)

inline static constexpr unsigned int Class_3_374B4A87C3BAEF86_TypeDefinitionIndex = 48644;

class Class_3_374B4A87C3BAEF86 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ConvinceSplitLineChange*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ConvinceSplitLineChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ConvinceSplitLineChange*))((::PBYTE)hIl2Cpp + CLASS_3_374B4A87C3BAEF86__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_374B4A87C3BAEF86_ONTASKBEGIN_OFFSET))(this);
	}
};
