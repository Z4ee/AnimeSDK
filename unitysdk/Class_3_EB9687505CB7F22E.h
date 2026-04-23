#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E77EE8BE0A609DD9.h"

class Class_1_029A7EDCBF9933C8;
class Class_1_ADBE1843AD1E672A;
class Class_3_002145AD8E0A4DB8;
namespace RPG::Client { class OfferingRewardData; }
namespace RPG::Client::MVVM::Model { class LimaoNewsIssueData; }
namespace RPG::Client::MVVM::Service { class LimaoNewsOfferingService; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_EB9687505CB7F22E_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xA79F050)
#define CLASS_3_EB9687505CB7F22E_METHOD_3_4EE744AE4735EE0A_OFFSET UNITYSDK_OFFSET(0xA79EF40)
#define CLASS_3_EB9687505CB7F22E_METHOD_3_614E5485B409683B_OFFSET UNITYSDK_OFFSET(0xA79EDB0)
#define CLASS_3_EB9687505CB7F22E_METHOD_3_9DB451E6F675B99B_OFFSET UNITYSDK_OFFSET(0xA79EC10)
#define CLASS_3_EB9687505CB7F22E_METHOD_3_D9C7CE38124CA6E8_OFFSET UNITYSDK_OFFSET(0xA79EF60)
#define CLASS_3_EB9687505CB7F22E_METHOD_3_F0CB5FC44F25BC77_OFFSET UNITYSDK_OFFSET(0xA79EFB0)
#define CLASS_3_EB9687505CB7F22E_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xA79F060)
#define CLASS_3_EB9687505CB7F22E__CTOR_OFFSET UNITYSDK_OFFSET(0xA79EAF0)
#define CLASS_3_EB9687505CB7F22E___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xA79F070)

inline static constexpr unsigned int Class_3_EB9687505CB7F22E_TypeDefinitionIndex = 68406;

class Class_3_EB9687505CB7F22E : public ::Class_2_E77EE8BE0A609DD9
{
public:
	::Class_1_029A7EDCBF9933C8* Field_3_3; // 0x20
	::Class_1_ADBE1843AD1E672A* _OnBtnClose_k__BackingField; // 0x28
	::System::Collections::Generic::List_1<::Class_3_002145AD8E0A4DB8*>* Field_3_2; // 0x30
	::RPG::Client::MVVM::Service::LimaoNewsOfferingService* Field_3_4; // 0x38
	::RPG::Client::MVVM::Model::LimaoNewsIssueData* Field_3_1; // 0x40

	::System::Void _ctor(::RPG::Client::MVVM::Model::LimaoNewsIssueData* a1, ::Class_1_029A7EDCBF9933C8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsIssueData*, ::Class_1_029A7EDCBF9933C8*))((::PBYTE)hIl2Cpp + CLASS_3_EB9687505CB7F22E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_3_614E5485B409683B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB9687505CB7F22E_METHOD_3_614E5485B409683B_OFFSET))(this);
	}

	::RPG::Client::OfferingRewardData* Method_3_4EE744AE4735EE0A()
	{
		return ((::RPG::Client::OfferingRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB9687505CB7F22E_METHOD_3_4EE744AE4735EE0A_OFFSET))(this);
	}

	::RPG::Client::OfferingRewardData* Method_3_D9C7CE38124CA6E8()
	{
		return ((::RPG::Client::OfferingRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB9687505CB7F22E_METHOD_3_D9C7CE38124CA6E8_OFFSET))(this);
	}

	::Class_3_002145AD8E0A4DB8* Method_3_F0CB5FC44F25BC77(::System::Int32 a1)
	{
		return ((::Class_3_002145AD8E0A4DB8*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EB9687505CB7F22E_METHOD_3_F0CB5FC44F25BC77_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_3_002145AD8E0A4DB8*>* Method_3_9DB451E6F675B99B()
	{
		return ((::System::Collections::Generic::List_1<::Class_3_002145AD8E0A4DB8*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB9687505CB7F22E_METHOD_3_9DB451E6F675B99B_OFFSET))(this);
	}

	::Class_1_ADBE1843AD1E672A* get_OnBtnClose()
	{
		return ((::Class_1_ADBE1843AD1E672A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB9687505CB7F22E_GET_ONBTNCLOSE_OFFSET))(this);
	}

	::System::Void set_OnBtnClose(::Class_1_ADBE1843AD1E672A* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ADBE1843AD1E672A*))((::PBYTE)hIl2Cpp + CLASS_3_EB9687505CB7F22E_SET_ONBTNCLOSE_OFFSET))(this, value);
	}

	::System::Void __ctor_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EB9687505CB7F22E___CTOR_B__0_0_OFFSET))(this);
	}
};
