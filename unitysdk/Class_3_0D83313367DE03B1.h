#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvForceNpcGoBack; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_0D83313367DE03B1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17922AE0)
#define CLASS_3_0D83313367DE03B1__CTOR_OFFSET UNITYSDK_OFFSET(0x17922AB0)

inline static constexpr unsigned int Class_3_0D83313367DE03B1_TypeDefinitionIndex = 52697;

class Class_3_0D83313367DE03B1 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvForceNpcGoBack*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvForceNpcGoBack* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvForceNpcGoBack*))((::PBYTE)hIl2Cpp + CLASS_3_0D83313367DE03B1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0D83313367DE03B1_ONTASKBEGIN_OFFSET))(this);
	}
};
