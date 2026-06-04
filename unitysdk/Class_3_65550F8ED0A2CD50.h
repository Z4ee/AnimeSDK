#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ST_Task_1.h"

class Class_2_5436AF4270279182;
class Class_4_DF607302E6EFE15C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_65550F8ED0A2CD50_METHOD_3_C7D016870487812F_OFFSET UNITYSDK_OFFSET(0xC461DC0)
#define CLASS_3_65550F8ED0A2CD50_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC461C20)
#define CLASS_3_65550F8ED0A2CD50_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC461CE0)
#define CLASS_3_65550F8ED0A2CD50_TICK_OFFSET UNITYSDK_OFFSET(0xC461D30)
#define CLASS_3_65550F8ED0A2CD50__CTOR_OFFSET UNITYSDK_OFFSET(0xC461BF0)
#define CLASS_3_65550F8ED0A2CD50___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xC462280)

inline static constexpr unsigned int Class_3_65550F8ED0A2CD50_TypeDefinitionIndex = 48753;

class Class_3_65550F8ED0A2CD50 : public ::RPG::GameCore::ST_Task_1<::Class_4_DF607302E6EFE15C*>
{
public:
	::Class_2_5436AF4270279182* Field_3_0; // 0x28
	::System::Single Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_DF607302E6EFE15C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_DF607302E6EFE15C*))((::PBYTE)hIl2Cpp + CLASS_3_65550F8ED0A2CD50__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65550F8ED0A2CD50_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65550F8ED0A2CD50_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_65550F8ED0A2CD50_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_C7D016870487812F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65550F8ED0A2CD50_METHOD_3_C7D016870487812F_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_65550F8ED0A2CD50___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
	}
};
