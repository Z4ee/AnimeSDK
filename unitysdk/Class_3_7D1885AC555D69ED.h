#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class PropAnimTriggerRandomPlay; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_7D1885AC555D69ED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA3DEDF0)
#define CLASS_3_7D1885AC555D69ED__CTOR_OFFSET UNITYSDK_OFFSET(0xA3DEDC0)

inline static constexpr unsigned int Class_3_7D1885AC555D69ED_TypeDefinitionIndex = 52203;

class Class_3_7D1885AC555D69ED : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropAnimTriggerRandomPlay*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropAnimTriggerRandomPlay* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropAnimTriggerRandomPlay*))((::PBYTE)hIl2Cpp + CLASS_3_7D1885AC555D69ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7D1885AC555D69ED_ONTASKBEGIN_OFFSET))(this);
	}
};
