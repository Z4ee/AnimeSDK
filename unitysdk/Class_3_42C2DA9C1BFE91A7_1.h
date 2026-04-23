#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_C4B8A5C51D1C8FFE_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_42C2DA9C1BFE91A7_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x982A1E0)
#define CLASS_3_42C2DA9C1BFE91A7_1_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x982A220)
#define CLASS_3_42C2DA9C1BFE91A7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x982A1A0)
#define CLASS_3_42C2DA9C1BFE91A7_1___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x982A480)

inline static constexpr unsigned int Class_3_42C2DA9C1BFE91A7_1_TypeDefinitionIndex = 49649;

class Class_3_42C2DA9C1BFE91A7_1 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_C4B8A5C51D1C8FFE_1*>
{
public:
	::System::Int32 Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C4B8A5C51D1C8FFE_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C4B8A5C51D1C8FFE_1*))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_1_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_1_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_1___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
