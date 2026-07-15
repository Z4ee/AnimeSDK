#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/System/Nullable_1.h"

namespace RPG::GameCore { class SetMonsterHitCountEnergyBarState; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_C3D80341DC3279BA_METHOD_3_CD0979951400C3FD_OFFSET UNITYSDK_OFFSET(0x1865C0F0)
#define CLASS_3_C3D80341DC3279BA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1865BBA0)
#define CLASS_3_C3D80341DC3279BA__CTOR_OFFSET UNITYSDK_OFFSET(0x1865BB70)

inline static constexpr unsigned int Class_3_C3D80341DC3279BA_TypeDefinitionIndex = 53033;

class Class_3_C3D80341DC3279BA : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetMonsterHitCountEnergyBarState*>
{
public:
	// static const ::System::String* Field_3_0; // 0x0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMonsterHitCountEnergyBarState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMonsterHitCountEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_3_C3D80341DC3279BA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C3D80341DC3279BA_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Nullable_1<::System::Boolean> Method_3_CD0979951400C3FD(::RPG::GameCore::BoolEx a1)
	{
		return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::RPG::GameCore::BoolEx))((::PBYTE)hIl2Cpp + CLASS_3_C3D80341DC3279BA_METHOD_3_CD0979951400C3FD_OFFSET))(this, a1);
	}
};
