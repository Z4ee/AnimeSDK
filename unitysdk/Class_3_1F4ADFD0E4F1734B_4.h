#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"
#include "unitysdk/RPG/GameCore/StringHash.h"

class Class_3_423CACE4E139A4B8;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_1F4ADFD0E4F1734B_4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x130ACFB0)
#define CLASS_3_1F4ADFD0E4F1734B_4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x130AD210)
#define CLASS_3_1F4ADFD0E4F1734B_4__CTOR_OFFSET UNITYSDK_OFFSET(0x130ACED0)

inline static constexpr unsigned int Class_3_1F4ADFD0E4F1734B_4_TypeDefinitionIndex = 55374;

class Class_3_1F4ADFD0E4F1734B_4 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_423CACE4E139A4B8*>
{
public:
	::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_423CACE4E139A4B8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_423CACE4E139A4B8*))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F4ADFD0E4F1734B_4_ONTASKRESET_OFFSET))(this);
	}
};
