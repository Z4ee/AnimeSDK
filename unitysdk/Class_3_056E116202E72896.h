#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class AdvEntityModifyCameraRootTransform; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_056E116202E72896_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA86ABC0)
#define CLASS_3_056E116202E72896__CTOR_OFFSET UNITYSDK_OFFSET(0xA86AB90)

inline static constexpr unsigned int Class_3_056E116202E72896_TypeDefinitionIndex = 48967;

class Class_3_056E116202E72896 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvEntityModifyCameraRootTransform*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvEntityModifyCameraRootTransform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvEntityModifyCameraRootTransform*))((::PBYTE)hIl2Cpp + CLASS_3_056E116202E72896__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_056E116202E72896_ONTASKBEGIN_OFFSET))(this);
	}
};
