#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_07C3C4D2990C49EE;
namespace RPG::GameCore { class AddFinishMissionData_SelectConsumeItem; }
namespace RPG::GameCore { class MissionItemConfigList; }
namespace RPG::GameCore { class SelectMissionItemConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_07F204D5BC9408BF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17E9D3A0)
#define CLASS_2_07F204D5BC9408BF_METHOD_2_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x17E9E110)
#define CLASS_2_07F204D5BC9408BF_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17E9D820)
#define CLASS_2_07F204D5BC9408BF_METHOD_2_723F040120376E52_OFFSET UNITYSDK_OFFSET(0x17E9E020)
#define CLASS_2_07F204D5BC9408BF_METHOD_2_7744894CEC41BF06_1_OFFSET UNITYSDK_OFFSET(0x17E9E3C0)
#define CLASS_2_07F204D5BC9408BF_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x17E9E470)
#define CLASS_2_07F204D5BC9408BF_METHOD_2_A10DADB5B6A4C8AC_OFFSET UNITYSDK_OFFSET(0x17E9E200)
#define CLASS_2_07F204D5BC9408BF_METHOD_2_AD52E5051C13C465_OFFSET UNITYSDK_OFFSET(0x17E9DB40)
#define CLASS_2_07F204D5BC9408BF_METHOD_2_AE415B014D1F5508_OFFSET UNITYSDK_OFFSET(0x17E9DDE0)
#define CLASS_2_07F204D5BC9408BF_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17E9E520)
#define CLASS_2_07F204D5BC9408BF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17E9D670)
#define CLASS_2_07F204D5BC9408BF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17E9D8C0)
#define CLASS_2_07F204D5BC9408BF_TICK_OFFSET UNITYSDK_OFFSET(0x17E9DA00)
#define CLASS_2_07F204D5BC9408BF__CTOR_OFFSET UNITYSDK_OFFSET(0x17E9D2B0)

inline static constexpr unsigned int Class_2_07F204D5BC9408BF_TypeDefinitionIndex = 52596;

class Class_2_07F204D5BC9408BF : public ::Class_1_5F51D4049EA87B7B
{
public:
	// static const ::System::String* PAEPCIMJPGM; // 0x0
	::Class_3_07C3C4D2990C49EE* JOABCNLPPGI; // 0x18
	::Class_3_07C3C4D2990C49EE* IKNPCLDDCDI; // 0x20
	::RPG::GameCore::MissionItemConfigList* ENLBIHNPGOD; // 0x28
	::Class_3_07C3C4D2990C49EE* BEHIGGIDIIK; // 0x30
	::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
	::RPG::GameCore::AddFinishMissionData_SelectConsumeItem* OFKGLJOAMLD; // 0x40
	::Class_3_07C3C4D2990C49EE* LEPBEGLNCDE; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddFinishMissionData_SelectConsumeItem* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddFinishMissionData_SelectConsumeItem*))((::PBYTE)hIl2Cpp + CLASS_2_07F204D5BC9408BF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F204D5BC9408BF_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F204D5BC9408BF_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F204D5BC9408BF_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_07F204D5BC9408BF_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD52E5051C13C465(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_07F204D5BC9408BF_METHOD_2_AD52E5051C13C465_OFFSET))(this, a1);
	}

	::System::Void Method_2_A10DADB5B6A4C8AC(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_07F204D5BC9408BF_METHOD_2_A10DADB5B6A4C8AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_723F040120376E52(::RPG::GameCore::SelectMissionItemConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SelectMissionItemConfig*))((::PBYTE)hIl2Cpp + CLASS_2_07F204D5BC9408BF_METHOD_2_723F040120376E52_OFFSET))(this, a1);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F204D5BC9408BF_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F204D5BC9408BF_METHOD_2_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F204D5BC9408BF_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_7744894CEC41BF06_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F204D5BC9408BF_METHOD_2_7744894CEC41BF06_1_OFFSET))(this);
	}

	::System::Boolean Method_2_AE415B014D1F5508(::RPG::GameCore::MissionItemConfigList* a1, ::RPG::GameCore::SelectMissionItemConfig* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MissionItemConfigList*, ::RPG::GameCore::SelectMissionItemConfig*))((::PBYTE)hIl2Cpp + CLASS_2_07F204D5BC9408BF_METHOD_2_AE415B014D1F5508_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_07F204D5BC9408BF_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
