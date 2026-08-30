#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

namespace RPG::GameCore { class ST_Side_CommitCD; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_73CFDBBF06F9693D_METHOD_3_E954CA89B78B8018_OFFSET UNITYSDK_OFFSET(0x16394620)
#define CLASS_3_73CFDBBF06F9693D_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x163945B0)
#define CLASS_3_73CFDBBF06F9693D_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16394820)
#define CLASS_3_73CFDBBF06F9693D__CTOR_OFFSET UNITYSDK_OFFSET(0x16394580)

inline static constexpr unsigned int Class_3_73CFDBBF06F9693D_TypeDefinitionIndex = 52510;

class Class_3_73CFDBBF06F9693D : public ::RPG::GameCore::ST_Task_1<::RPG::GameCore::ST_Side_CommitCD*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_CommitCD* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_CommitCD*))((::PBYTE)hIl2Cpp + CLASS_3_73CFDBBF06F9693D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_73CFDBBF06F9693D_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_73CFDBBF06F9693D_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_3_E954CA89B78B8018(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_73CFDBBF06F9693D_METHOD_3_E954CA89B78B8018_OFFSET))(this, a1, a2);
	}
};
