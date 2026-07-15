#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LoadBackgroundPlayer; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BC562FB4A84760BD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16EA2240)
#define CLASS_3_BC562FB4A84760BD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16EA2280)
#define CLASS_3_BC562FB4A84760BD__CTOR_OFFSET UNITYSDK_OFFSET(0x16EA2210)

inline static constexpr unsigned int Class_3_BC562FB4A84760BD_TypeDefinitionIndex = 50576;

class Class_3_BC562FB4A84760BD : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LoadBackgroundPlayer*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LoadBackgroundPlayer* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LoadBackgroundPlayer*))((::PBYTE)hIl2Cpp + CLASS_3_BC562FB4A84760BD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC562FB4A84760BD_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC562FB4A84760BD_ONTASKBEGIN_OFFSET))(this);
	}
};
