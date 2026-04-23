#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_BF948EE4ABDDF43D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_42C2DA9C1BFE91A7_3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA53810)
#define CLASS_3_42C2DA9C1BFE91A7_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA53850)
#define CLASS_3_42C2DA9C1BFE91A7_3__CTOR_OFFSET UNITYSDK_OFFSET(0xAA537D0)
#define CLASS_3_42C2DA9C1BFE91A7_3___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA53EA0)

inline static constexpr unsigned int Class_3_42C2DA9C1BFE91A7_3_TypeDefinitionIndex = 49932;

class Class_3_42C2DA9C1BFE91A7_3 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_BF948EE4ABDDF43D*>
{
public:
	::System::Int32 Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_BF948EE4ABDDF43D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_BF948EE4ABDDF43D*))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_3__CTOR_OFFSET))(this, a1, a2);
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
