#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_F1A1C888430F0DD5;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_F4E8621A4C671A78_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1954CC50)
#define CLASS_3_F4E8621A4C671A78_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1954CC90)
#define CLASS_3_F4E8621A4C671A78_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1954CD70)
#define CLASS_3_F4E8621A4C671A78_TICK_OFFSET UNITYSDK_OFFSET(0x1954CDC0)
#define CLASS_3_F4E8621A4C671A78__CTOR_OFFSET UNITYSDK_OFFSET(0x1954CC20)

inline static constexpr unsigned int Class_3_F4E8621A4C671A78_TypeDefinitionIndex = 53125;

class Class_3_F4E8621A4C671A78 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_F1A1C888430F0DD5*>
{
public:
	::Class_3_F1A1C888430F0DD5* OFKGLJOAMLD; // 0x28
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_F1A1C888430F0DD5* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_F1A1C888430F0DD5*))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F4E8621A4C671A78_TICK_OFFSET))(this, a1);
	}
};
