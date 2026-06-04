#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class LockEntityTransform; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_A02B52AD79C3A81C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAFC4E90)
#define CLASS_3_A02B52AD79C3A81C__CTOR_OFFSET UNITYSDK_OFFSET(0xAFC4E60)

inline static constexpr unsigned int Class_3_A02B52AD79C3A81C_TypeDefinitionIndex = 54401;

class Class_3_A02B52AD79C3A81C : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::LockEntityTransform*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::LockEntityTransform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::LockEntityTransform*))((::PBYTE)hIl2Cpp + CLASS_3_A02B52AD79C3A81C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A02B52AD79C3A81C_ONTASKBEGIN_OFFSET))(this);
	}
};
