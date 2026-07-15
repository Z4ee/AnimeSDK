#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UnBindPropsCablelines; }

#define CLASS_3_20DC4B73A2E4B26D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x179E83C0)
#define CLASS_3_20DC4B73A2E4B26D__CTOR_OFFSET UNITYSDK_OFFSET(0x179E8390)

inline static constexpr unsigned int Class_3_20DC4B73A2E4B26D_TypeDefinitionIndex = 56206;

class Class_3_20DC4B73A2E4B26D : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::UnBindPropsCablelines*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UnBindPropsCablelines* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UnBindPropsCablelines*))((::PBYTE)hIl2Cpp + CLASS_3_20DC4B73A2E4B26D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_20DC4B73A2E4B26D_ONTASKBEGIN_OFFSET))(this);
	}
};
