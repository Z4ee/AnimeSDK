#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class HideTopPageWithoutAnim; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BFF2D652B8507844_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1159F7E0)
#define CLASS_3_BFF2D652B8507844__CTOR_OFFSET UNITYSDK_OFFSET(0x1159F7B0)

inline static constexpr unsigned int Class_3_BFF2D652B8507844_TypeDefinitionIndex = 46926;

class Class_3_BFF2D652B8507844 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::HideTopPageWithoutAnim*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideTopPageWithoutAnim* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideTopPageWithoutAnim*))((::PBYTE)hIl2Cpp + CLASS_3_BFF2D652B8507844__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BFF2D652B8507844_ONTASKBEGIN_OFFSET))(this);
	}
};
