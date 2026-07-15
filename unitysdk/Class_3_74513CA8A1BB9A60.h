#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

namespace RPG::GameCore { class SetDynamicValueByFateContentCount; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_74513CA8A1BB9A60_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17FAE050)
#define CLASS_3_74513CA8A1BB9A60__CTOR_OFFSET UNITYSDK_OFFSET(0x17FADF70)

inline static constexpr unsigned int Class_3_74513CA8A1BB9A60_TypeDefinitionIndex = 52923;

class Class_3_74513CA8A1BB9A60 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::SetDynamicValueByFateContentCount*>
{
public:
	::RPG::GameCore::StringHash Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByFateContentCount* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByFateContentCount*))((::PBYTE)hIl2Cpp + CLASS_3_74513CA8A1BB9A60__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_74513CA8A1BB9A60_ONTASKBEGIN_OFFSET))(this);
	}
};
