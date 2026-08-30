#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_230F5EDDB35DAEBA;
namespace RPG::Client { class RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_0481864B2291211A_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB75ED30)
#define CLASS_2_0481864B2291211A_GETCONFIG_OFFSET UNITYSDK_OFFSET(0xB75F2E0)
#define CLASS_2_0481864B2291211A_METHOD_2_79099DB56AC8A1E9_OFFSET UNITYSDK_OFFSET(0xB75F230)
#define CLASS_2_0481864B2291211A_METHOD_2_814B2B0F621DA493_OFFSET UNITYSDK_OFFSET(0xB75EDD0)
#define CLASS_2_0481864B2291211A_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB75ED70)
#define CLASS_2_0481864B2291211A_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB75EE90)
#define CLASS_2_0481864B2291211A_TICK_OFFSET UNITYSDK_OFFSET(0xB75EEE0)
#define CLASS_2_0481864B2291211A__CTOR_OFFSET UNITYSDK_OFFSET(0xB75ED20)

inline static constexpr unsigned int Class_2_0481864B2291211A_TypeDefinitionIndex = 58574;

class Class_2_0481864B2291211A : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
	::RPG::Client::RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy* OFKGLJOAMLD; // 0x20
	::System::Boolean HNALEMBOBFE; // 0x28
	::System::Single PBMPHMBHIJN; // 0x2C
	::System::Int32 OKKIOIBIFIP; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy*))((::PBYTE)hIl2Cpp + CLASS_2_0481864B2291211A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0481864B2291211A_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0481864B2291211A_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0481864B2291211A_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0481864B2291211A_TICK_OFFSET))(this, a1);
	}

	::RPG::GameCore::TaskConfig* GetConfig()
	{
		return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0481864B2291211A_GETCONFIG_OFFSET))(this);
	}

	::System::Int32 Method_2_814B2B0F621DA493()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0481864B2291211A_METHOD_2_814B2B0F621DA493_OFFSET))(this);
	}

	static ::System::Int32 Method_2_79099DB56AC8A1E9(::Class_2_230F5EDDB35DAEBA* a1)
	{
		return ((::System::Int32(*)(::Class_2_230F5EDDB35DAEBA*))((::PBYTE)hIl2Cpp + CLASS_2_0481864B2291211A_METHOD_2_79099DB56AC8A1E9_OFFSET))(a1);
	}
};
