#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_4B4C632F05EE5573;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_42C2DA9C1BFE91A7_3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8C1C90)
#define CLASS_3_42C2DA9C1BFE91A7_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA8C1CD0)
#define CLASS_3_42C2DA9C1BFE91A7_3__CTOR_OFFSET UNITYSDK_OFFSET(0xA8C1C50)
#define CLASS_3_42C2DA9C1BFE91A7_3___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8C2370)

inline static constexpr unsigned int Class_3_42C2DA9C1BFE91A7_3_TypeDefinitionIndex = 50599;

class Class_3_42C2DA9C1BFE91A7_3 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_4B4C632F05EE5573*>
{
public:
	::System::Int32 Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_4B4C632F05EE5573* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_4B4C632F05EE5573*))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_3_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_3___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
