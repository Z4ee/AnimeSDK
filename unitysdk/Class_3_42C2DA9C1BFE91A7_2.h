#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_CB2DBFA0FD4A48A4;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_42C2DA9C1BFE91A7_2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13BD7220)
#define CLASS_3_42C2DA9C1BFE91A7_2_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13BD7260)
#define CLASS_3_42C2DA9C1BFE91A7_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13BD71E0)
#define CLASS_3_42C2DA9C1BFE91A7_2___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13BD7660)

inline static constexpr unsigned int Class_3_42C2DA9C1BFE91A7_2_TypeDefinitionIndex = 50598;

class Class_3_42C2DA9C1BFE91A7_2 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CB2DBFA0FD4A48A4*>
{
public:
	::System::Int32 Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CB2DBFA0FD4A48A4* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CB2DBFA0FD4A48A4*))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_2_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_42C2DA9C1BFE91A7_2___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
