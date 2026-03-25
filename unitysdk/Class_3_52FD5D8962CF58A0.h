#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ForcePlayerMoveForwardOnly; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_52FD5D8962CF58A0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEA821D0)
#define CLASS_3_52FD5D8962CF58A0__CTOR_OFFSET UNITYSDK_OFFSET(0xEA821A0)

inline static constexpr unsigned int Class_3_52FD5D8962CF58A0_TypeDefinitionIndex = 46898;

class Class_3_52FD5D8962CF58A0 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ForcePlayerMoveForwardOnly*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForcePlayerMoveForwardOnly* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForcePlayerMoveForwardOnly*))((::PBYTE)hIl2Cpp + CLASS_3_52FD5D8962CF58A0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_52FD5D8962CF58A0_ONTASKBEGIN_OFFSET))(this);
	}
};
