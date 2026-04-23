#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E77EE8BE0A609DD9.h"
#include "unitysdk/System/Guid.h"

class Class_1_029A7EDCBF9933C8;
class Class_1_ADBE1843AD1E672A;
class Class_3_6CDB80D69CE03A28;
class Class_3_72B51E713EDE563F;
namespace RPG::Client::MVVM::Model { class LimaoNewsIssueData; }
namespace RPG::Client::MVVM::Model { class LimaoNewsOfficeSurveyTypeData; }
namespace RPG::Client::MVVM::Service { class LimaoNewsIssueService; }
namespace RPG::Client::MVVM::Service { class LimaoNewsNetworkService; }
namespace RPG::Client::MVVM::Service { class LimaoNewsWindowService; }
namespace RPG::Client::MVVM::View { class LimaoNewsIssueSubmitWindow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_BF01A723AB4005C0;

#define CLASS_3_290D64E8B1BFF24F_GET_ALLTABVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x8F85840)
#define CLASS_3_290D64E8B1BFF24F_GET_ONBTNSELECTLEFT_OFFSET UNITYSDK_OFFSET(0x8F858A0)
#define CLASS_3_290D64E8B1BFF24F_GET_ONBTNSELECTRIGHT_OFFSET UNITYSDK_OFFSET(0x8F858C0)
#define CLASS_3_290D64E8B1BFF24F_GET_ONBTNSUBMIT_OFFSET UNITYSDK_OFFSET(0x8F85880)
#define CLASS_3_290D64E8B1BFF24F_GET_ONBTNTABCLICK_OFFSET UNITYSDK_OFFSET(0x8F85860)
#define CLASS_3_290D64E8B1BFF24F_GET_SHOWISSUESUBMITWINDOW_OFFSET UNITYSDK_OFFSET(0x8F858E0)
#define CLASS_3_290D64E8B1BFF24F_GET_SURVEYTYPEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x8F85900)
#define CLASS_3_290D64E8B1BFF24F_METHOD_3_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x8F85460)
#define CLASS_3_290D64E8B1BFF24F_METHOD_3_07C90678D45BAD7B_OFFSET UNITYSDK_OFFSET(0x8F85720)
#define CLASS_3_290D64E8B1BFF24F_METHOD_3_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x8F85920)
#define CLASS_3_290D64E8B1BFF24F_METHOD_3_8A7DA65CB9DF4CEB_OFFSET UNITYSDK_OFFSET(0x8F85260)
#define CLASS_3_290D64E8B1BFF24F_METHOD_3_A76A07E68FFF9CDC_OFFSET UNITYSDK_OFFSET(0x8F857E0)
#define CLASS_3_290D64E8B1BFF24F_METHOD_3_B4906BAA9E1C658C_OFFSET UNITYSDK_OFFSET(0x8F850D0)
#define CLASS_3_290D64E8B1BFF24F_METHOD_3_BF58BAE678CCAF91_OFFSET UNITYSDK_OFFSET(0x8F855B0)
#define CLASS_3_290D64E8B1BFF24F_METHOD_3_C981714813BD5547_OFFSET UNITYSDK_OFFSET(0x8F854D0)
#define CLASS_3_290D64E8B1BFF24F_METHOD_3_CB1D11B974BF8E9A_OFFSET UNITYSDK_OFFSET(0x8F85540)
#define CLASS_3_290D64E8B1BFF24F_METHOD_3_DFCFDE5A7E6EE4D0_OFFSET UNITYSDK_OFFSET(0x8F853C0)
#define CLASS_3_290D64E8B1BFF24F_METHOD_3_F8974D388F52CD5E_OFFSET UNITYSDK_OFFSET(0x8F85300)
#define CLASS_3_290D64E8B1BFF24F_SET_ALLTABVIEWMODELS_OFFSET UNITYSDK_OFFSET(0x8F85850)
#define CLASS_3_290D64E8B1BFF24F_SET_ONBTNSELECTLEFT_OFFSET UNITYSDK_OFFSET(0x8F858B0)
#define CLASS_3_290D64E8B1BFF24F_SET_ONBTNSELECTRIGHT_OFFSET UNITYSDK_OFFSET(0x8F858D0)
#define CLASS_3_290D64E8B1BFF24F_SET_ONBTNSUBMIT_OFFSET UNITYSDK_OFFSET(0x8F85890)
#define CLASS_3_290D64E8B1BFF24F_SET_ONBTNTABCLICK_OFFSET UNITYSDK_OFFSET(0x8F85870)
#define CLASS_3_290D64E8B1BFF24F_SET_SHOWISSUESUBMITWINDOW_OFFSET UNITYSDK_OFFSET(0x8F858F0)
#define CLASS_3_290D64E8B1BFF24F_SET_SURVEYTYPEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x8F85910)
#define CLASS_3_290D64E8B1BFF24F__CTOR_OFFSET UNITYSDK_OFFSET(0x8F84D60)

inline static constexpr unsigned int Class_3_290D64E8B1BFF24F_TypeDefinitionIndex = 68408;

class Class_3_290D64E8B1BFF24F : public ::Class_2_E77EE8BE0A609DD9
{
public:
	::RPG::Client::MVVM::Service::LimaoNewsWindowService* Field_3_11; // 0x20
	::System::Collections::Generic::List_1<::Class_3_72B51E713EDE563F*>* _AllTabViewModels_k__BackingField; // 0x28
	::Class_1_ADBE1843AD1E672A* _OnBtnSelectLeft_k__BackingField; // 0x30
	::Class_1_ADBE1843AD1E672A* _ShowIssueSubmitWindow_k__BackingField; // 0x38
	::Class_1_ADBE1843AD1E672A* _OnBtnSubmit_k__BackingField; // 0x40
	::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData* _SurveyTypeViewModel_k__BackingField; // 0x48
	::System::Collections::Generic::List_1<::RPG::Client::MVVM::Model::LimaoNewsIssueData*>* Field_3_8; // 0x50
	::Class_1_ADBE1843AD1E672A* _OnBtnSelectRight_k__BackingField; // 0x58
	::Class_1_029A7EDCBF9933C8* Field_3_12; // 0x60
	::RPG::Client::MVVM::Service::LimaoNewsNetworkService* Field_3_9; // 0x68
	::RPG::Client::MVVM::Service::LimaoNewsIssueService* Field_3_10; // 0x70
	::Class_1_BF01A723AB4005C0<::System::Int32>* _OnBtnTabClick_k__BackingField; // 0x78
	::System::Int32 Field_3_7; // 0x80

	::System::Void _ctor(::RPG::Client::MVVM::Service::LimaoNewsNetworkService* a1, ::RPG::Client::MVVM::Service::LimaoNewsIssueService* a2, ::RPG::Client::MVVM::Service::LimaoNewsWindowService* a3, ::Class_1_029A7EDCBF9933C8* a4, ::System::Guid a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Service::LimaoNewsNetworkService*, ::RPG::Client::MVVM::Service::LimaoNewsIssueService*, ::RPG::Client::MVVM::Service::LimaoNewsWindowService*, ::Class_1_029A7EDCBF9933C8*, ::System::Guid))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Class_3_6CDB80D69CE03A28* Method_3_B4906BAA9E1C658C(::System::Int32 a1)
	{
		return ((::Class_3_6CDB80D69CE03A28*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_METHOD_3_B4906BAA9E1C658C_OFFSET))(this, a1);
	}

	::System::Void Method_3_F8974D388F52CD5E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_METHOD_3_F8974D388F52CD5E_OFFSET))(this, a1);
	}

	::System::Void Method_3_DFCFDE5A7E6EE4D0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_METHOD_3_DFCFDE5A7E6EE4D0_OFFSET))(this, a1);
	}

	::System::Void Method_3_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_METHOD_3_078D85152011B919_OFFSET))(this);
	}

	::RPG::Client::MVVM::View::LimaoNewsIssueSubmitWindow* Method_3_C981714813BD5547()
	{
		return ((::RPG::Client::MVVM::View::LimaoNewsIssueSubmitWindow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_METHOD_3_C981714813BD5547_OFFSET))(this);
	}

	::System::Boolean Method_3_CB1D11B974BF8E9A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_METHOD_3_CB1D11B974BF8E9A_OFFSET))(this);
	}

	::System::UInt32 Method_3_BF58BAE678CCAF91()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_METHOD_3_BF58BAE678CCAF91_OFFSET))(this);
	}

	::System::Boolean Method_3_07C90678D45BAD7B(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_METHOD_3_07C90678D45BAD7B_OFFSET))(this, a1);
	}

	::System::UInt32 Method_3_A76A07E68FFF9CDC()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_METHOD_3_A76A07E68FFF9CDC_OFFSET))(this);
	}

	::RPG::Client::MVVM::Model::LimaoNewsIssueData* Method_3_8A7DA65CB9DF4CEB()
	{
		return ((::RPG::Client::MVVM::Model::LimaoNewsIssueData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_METHOD_3_8A7DA65CB9DF4CEB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_3_72B51E713EDE563F*>* get_AllTabViewModels()
	{
		return ((::System::Collections::Generic::List_1<::Class_3_72B51E713EDE563F*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_GET_ALLTABVIEWMODELS_OFFSET))(this);
	}

	::System::Void set_AllTabViewModels(::System::Collections::Generic::List_1<::Class_3_72B51E713EDE563F*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_3_72B51E713EDE563F*>*))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_SET_ALLTABVIEWMODELS_OFFSET))(this, value);
	}

	::Class_1_BF01A723AB4005C0<::System::Int32>* get_OnBtnTabClick()
	{
		return ((::Class_1_BF01A723AB4005C0<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_GET_ONBTNTABCLICK_OFFSET))(this);
	}

	::System::Void set_OnBtnTabClick(::Class_1_BF01A723AB4005C0<::System::Int32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BF01A723AB4005C0<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_SET_ONBTNTABCLICK_OFFSET))(this, value);
	}

	::Class_1_ADBE1843AD1E672A* get_OnBtnSubmit()
	{
		return ((::Class_1_ADBE1843AD1E672A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_GET_ONBTNSUBMIT_OFFSET))(this);
	}

	::System::Void set_OnBtnSubmit(::Class_1_ADBE1843AD1E672A* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ADBE1843AD1E672A*))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_SET_ONBTNSUBMIT_OFFSET))(this, value);
	}

	::Class_1_ADBE1843AD1E672A* get_OnBtnSelectLeft()
	{
		return ((::Class_1_ADBE1843AD1E672A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_GET_ONBTNSELECTLEFT_OFFSET))(this);
	}

	::System::Void set_OnBtnSelectLeft(::Class_1_ADBE1843AD1E672A* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ADBE1843AD1E672A*))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_SET_ONBTNSELECTLEFT_OFFSET))(this, value);
	}

	::Class_1_ADBE1843AD1E672A* get_OnBtnSelectRight()
	{
		return ((::Class_1_ADBE1843AD1E672A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_GET_ONBTNSELECTRIGHT_OFFSET))(this);
	}

	::System::Void set_OnBtnSelectRight(::Class_1_ADBE1843AD1E672A* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ADBE1843AD1E672A*))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_SET_ONBTNSELECTRIGHT_OFFSET))(this, value);
	}

	::Class_1_ADBE1843AD1E672A* get_ShowIssueSubmitWindow()
	{
		return ((::Class_1_ADBE1843AD1E672A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_GET_SHOWISSUESUBMITWINDOW_OFFSET))(this);
	}

	::System::Void set_ShowIssueSubmitWindow(::Class_1_ADBE1843AD1E672A* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ADBE1843AD1E672A*))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_SET_SHOWISSUESUBMITWINDOW_OFFSET))(this, value);
	}

	::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData* get_SurveyTypeViewModel()
	{
		return ((::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_GET_SURVEYTYPEVIEWMODEL_OFFSET))(this);
	}

	::System::Void set_SurveyTypeViewModel(::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::Model::LimaoNewsOfficeSurveyTypeData*))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_SET_SURVEYTYPEVIEWMODEL_OFFSET))(this, value);
	}

	::System::String* Method_3_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_290D64E8B1BFF24F_METHOD_3_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
