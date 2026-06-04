#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class ShowPropSceneObjClickHint; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F9166D82F84FD216_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAD4ED40)
#define CLASS_3_F9166D82F84FD216__CTOR_OFFSET UNITYSDK_OFFSET(0xAD4ED10)

inline static constexpr unsigned int Class_3_F9166D82F84FD216_TypeDefinitionIndex = 49802;

class Class_3_F9166D82F84FD216 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::ShowPropSceneObjClickHint*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowPropSceneObjClickHint* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowPropSceneObjClickHint*))((::PBYTE)hIl2Cpp + CLASS_3_F9166D82F84FD216__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F9166D82F84FD216_ONTASKBEGIN_OFFSET))(this);
	}
};
