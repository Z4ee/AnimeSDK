#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A1C9DC0EF54540E3.h"

class Class_3_1E4F9B0ED3BF21DE;
class Class_4_7F70A25D44C3307D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_637687773D29B467_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16249F30)
#define CLASS_3_637687773D29B467_METHOD_3_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x16249DB0)
#define CLASS_3_637687773D29B467_METHOD_3_2AE3D1298C9AE68B_OFFSET UNITYSDK_OFFSET(0x1624A010)
#define CLASS_3_637687773D29B467_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16249D60)
#define CLASS_3_637687773D29B467_TICK_OFFSET UNITYSDK_OFFSET(0x16249FA0)
#define CLASS_3_637687773D29B467__CTOR_OFFSET UNITYSDK_OFFSET(0x16249D20)

inline static constexpr unsigned int Class_3_637687773D29B467_TypeDefinitionIndex = 53157;

class Class_3_637687773D29B467 : public ::Class_2_A1C9DC0EF54540E3
{
public:
	::Class_3_1E4F9B0ED3BF21DE* EDKOLBIBJPJ; // 0x40
	::RPG::GameCore::TaskContext* FHGMKOOMHCN; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_7F70A25D44C3307D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_7F70A25D44C3307D*))((::PBYTE)hIl2Cpp + CLASS_3_637687773D29B467__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_637687773D29B467_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_637687773D29B467_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_637687773D29B467_TICK_OFFSET))(this, a1);
	}

	::System::Single Method_3_2AE3D1298C9AE68B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_637687773D29B467_METHOD_3_2AE3D1298C9AE68B_OFFSET))(this);
	}

	::System::Void Method_3_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_637687773D29B467_METHOD_3_06330CD58CB602B6_OFFSET))(this);
	}
};
