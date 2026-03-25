#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3DE15EA7F53A0550.h"

class Class_1_0BA5D98E0F73DDB8;
class Class_1_ADBE1843AD1E672A;
namespace RPG::Client::MVVM::Model { class LimaoNewsIssueData; }
namespace RPG::Client::MVVM::Service { class LimaoNewsWindowService; }

#define CLASS_3_5C00647A7641EEC6_GET_ISSUEDATA_OFFSET UNITYSDK_OFFSET(0x8C7DB00)
#define CLASS_3_5C00647A7641EEC6_GET_ISSUEID_OFFSET UNITYSDK_OFFSET(0x8C7DAA0)
#define CLASS_3_5C00647A7641EEC6_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x8C7DAC0)
#define CLASS_3_5C00647A7641EEC6_GET_ONBTNFORM_OFFSET UNITYSDK_OFFSET(0x8C7DAE0)
#define CLASS_3_5C00647A7641EEC6_SET_ISSUEDATA_OFFSET UNITYSDK_OFFSET(0x8C7DB10)
#define CLASS_3_5C00647A7641EEC6_SET_ISSUEID_OFFSET UNITYSDK_OFFSET(0x8C7DAB0)
#define CLASS_3_5C00647A7641EEC6_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0x8C7DAD0)
#define CLASS_3_5C00647A7641EEC6_SET_ONBTNFORM_OFFSET UNITYSDK_OFFSET(0x8C7DAF0)
#define CLASS_3_5C00647A7641EEC6__CTOR_OFFSET UNITYSDK_OFFSET(0x8C7D930)
#define CLASS_3_5C00647A7641EEC6___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0x8C7DB20)
#define CLASS_3_5C00647A7641EEC6___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0x8C7DBB0)

inline static constexpr unsigned int Class_3_5C00647A7641EEC6_TypeDefinitionIndex = 60946;

class Class_3_5C00647A7641EEC6 : public ::Class_2_3DE15EA7F53A0550
{
public:
	::RPG::Client::MVVM::Model::LimaoNewsIssueData* _IssueData_k__BackingField; // 0x18
	::Class_1_0BA5D98E0F73DDB8* Field_3_1; // 0x20
	::RPG::Client::MVVM::Service::LimaoNewsWindowService* Field_3_5; // 0x28
	::Class_1_ADBE1843AD1E672A* _OnBtnForm_k__BackingField; // 0x30
	::Class_1_ADBE1843AD1E672A* _OnBtnClose_k__BackingField; // 0x38
	::System::UInt32 _IssueID_k__BackingField; // 0x40

	::System::Void _ctor(::RPG::Client::MVVM::Service::LimaoNewsWindowService* a1, ::Class_1_0BA5D98E0F73DDB8* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Service::LimaoNewsWindowService*, ::Class_1_0BA5D98E0F73DDB8*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_5C00647A7641EEC6__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 get_IssueID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C00647A7641EEC6_GET_ISSUEID_OFFSET))(this);
	}

	::System::Void set_IssueID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_5C00647A7641EEC6_SET_ISSUEID_OFFSET))(this, value);
	}

	::Class_1_ADBE1843AD1E672A* get_OnBtnClose()
	{
		return ((::Class_1_ADBE1843AD1E672A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C00647A7641EEC6_GET_ONBTNCLOSE_OFFSET))(this);
	}

	::System::Void set_OnBtnClose(::Class_1_ADBE1843AD1E672A* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ADBE1843AD1E672A*))((::PBYTE)hIl2Cpp + CLASS_3_5C00647A7641EEC6_SET_ONBTNCLOSE_OFFSET))(this, value);
	}

	::Class_1_ADBE1843AD1E672A* get_OnBtnForm()
	{
		return ((::Class_1_ADBE1843AD1E672A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C00647A7641EEC6_GET_ONBTNFORM_OFFSET))(this);
	}

	::System::Void set_OnBtnForm(::Class_1_ADBE1843AD1E672A* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ADBE1843AD1E672A*))((::PBYTE)hIl2Cpp + CLASS_3_5C00647A7641EEC6_SET_ONBTNFORM_OFFSET))(this, value);
	}

	::RPG::Client::MVVM::Model::LimaoNewsIssueData* get_IssueData()
	{
		return ((::RPG::Client::MVVM::Model::LimaoNewsIssueData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C00647A7641EEC6_GET_ISSUEDATA_OFFSET))(this);
	}

	::System::Void set_IssueData(::RPG::Client::MVVM::Model::LimaoNewsIssueData* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsIssueData*))((::PBYTE)hIl2Cpp + CLASS_3_5C00647A7641EEC6_SET_ISSUEDATA_OFFSET))(this, value);
	}

	::System::Void __ctor_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C00647A7641EEC6___CTOR_B__0_0_OFFSET))(this);
	}

	::System::Void __ctor_b__0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5C00647A7641EEC6___CTOR_B__0_1_OFFSET))(this);
	}
};
