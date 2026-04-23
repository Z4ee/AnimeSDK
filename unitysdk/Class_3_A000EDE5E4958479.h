#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E77EE8BE0A609DD9.h"
#include "unitysdk/System/Guid.h"

class Class_1_029A7EDCBF9933C8;
class Class_1_ADBE1843AD1E672A;
namespace RPG::Client::MVVM::Service { class LimaoNewsTutorialService; }
namespace RPG::Client::MVVM::ViewModel { class LimaoNewsPostViewModel; }
namespace System { class String; }

#define CLASS_3_A000EDE5E4958479_GET_DEFAULTCOMMENTID_OFFSET UNITYSDK_OFFSET(0xE634540)
#define CLASS_3_A000EDE5E4958479_GET_GUID_OFFSET UNITYSDK_OFFSET(0xE634560)
#define CLASS_3_A000EDE5E4958479_GET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xE6344E0)
#define CLASS_3_A000EDE5E4958479_GET_ONBTNGO_OFFSET UNITYSDK_OFFSET(0xE6344C0)
#define CLASS_3_A000EDE5E4958479_GET_ONBTNIMAGE_OFFSET UNITYSDK_OFFSET(0xE634500)
#define CLASS_3_A000EDE5E4958479_GET_POSTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE634520)
#define CLASS_3_A000EDE5E4958479_METHOD_3_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0xE633DC0)
#define CLASS_3_A000EDE5E4958479_METHOD_3_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0xE634280)
#define CLASS_3_A000EDE5E4958479_METHOD_3_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xE633D40)
#define CLASS_3_A000EDE5E4958479_METHOD_3_F57897F4F0D3A2CD_OFFSET UNITYSDK_OFFSET(0xE633E10)
#define CLASS_3_A000EDE5E4958479_SET_DEFAULTCOMMENTID_OFFSET UNITYSDK_OFFSET(0xE634550)
#define CLASS_3_A000EDE5E4958479_SET_GUID_OFFSET UNITYSDK_OFFSET(0xE634570)
#define CLASS_3_A000EDE5E4958479_SET_ONBTNCLOSE_OFFSET UNITYSDK_OFFSET(0xE6344F0)
#define CLASS_3_A000EDE5E4958479_SET_ONBTNGO_OFFSET UNITYSDK_OFFSET(0xE6344D0)
#define CLASS_3_A000EDE5E4958479_SET_ONBTNIMAGE_OFFSET UNITYSDK_OFFSET(0xE634510)
#define CLASS_3_A000EDE5E4958479_SET_POSTVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE634530)
#define CLASS_3_A000EDE5E4958479__CTOR_OFFSET UNITYSDK_OFFSET(0xE633C10)
#define CLASS_3_A000EDE5E4958479___CTOR_B__0_0_OFFSET UNITYSDK_OFFSET(0xE634580)
#define CLASS_3_A000EDE5E4958479___CTOR_B__0_1_OFFSET UNITYSDK_OFFSET(0xE634630)
#define CLASS_3_A000EDE5E4958479___CTOR_B__0_2_OFFSET UNITYSDK_OFFSET(0xE634640)

inline static constexpr unsigned int Class_3_A000EDE5E4958479_TypeDefinitionIndex = 68420;

class Class_3_A000EDE5E4958479 : public ::Class_2_E77EE8BE0A609DD9
{
public:
	::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel* _PostViewModel_k__BackingField; // 0x20
	::Class_1_029A7EDCBF9933C8* Field_3_7; // 0x28
	::Class_1_ADBE1843AD1E672A* _OnBtnImage_k__BackingField; // 0x30
	::Class_1_ADBE1843AD1E672A* _OnBtnClose_k__BackingField; // 0x38
	::Class_1_ADBE1843AD1E672A* _OnBtnGo_k__BackingField; // 0x40
	::RPG::Client::MVVM::Service::LimaoNewsTutorialService* Field_3_6; // 0x48
	::System::Guid _Guid_k__BackingField; // 0x50
	::System::UInt32 _DefaultCommentID_k__BackingField; // 0x60

	::System::Void _ctor(::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel* a1, ::Class_1_029A7EDCBF9933C8* a2, ::RPG::Client::MVVM::Service::LimaoNewsTutorialService* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel*, ::Class_1_029A7EDCBF9933C8*, ::RPG::Client::MVVM::Service::LimaoNewsTutorialService*))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479_METHOD_3_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_3_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479_METHOD_3_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::System::String* Method_3_F57897F4F0D3A2CD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479_METHOD_3_F57897F4F0D3A2CD_OFFSET))(this);
	}

	::System::Void Method_3_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479_METHOD_3_8542E37E74FDE1B5_OFFSET))(this);
	}

	::Class_1_ADBE1843AD1E672A* get_OnBtnGo()
	{
		return ((::Class_1_ADBE1843AD1E672A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479_GET_ONBTNGO_OFFSET))(this);
	}

	::System::Void set_OnBtnGo(::Class_1_ADBE1843AD1E672A* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ADBE1843AD1E672A*))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479_SET_ONBTNGO_OFFSET))(this, value);
	}

	::Class_1_ADBE1843AD1E672A* get_OnBtnClose()
	{
		return ((::Class_1_ADBE1843AD1E672A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479_GET_ONBTNCLOSE_OFFSET))(this);
	}

	::System::Void set_OnBtnClose(::Class_1_ADBE1843AD1E672A* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ADBE1843AD1E672A*))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479_SET_ONBTNCLOSE_OFFSET))(this, value);
	}

	::Class_1_ADBE1843AD1E672A* get_OnBtnImage()
	{
		return ((::Class_1_ADBE1843AD1E672A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479_GET_ONBTNIMAGE_OFFSET))(this);
	}

	::System::Void set_OnBtnImage(::Class_1_ADBE1843AD1E672A* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ADBE1843AD1E672A*))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479_SET_ONBTNIMAGE_OFFSET))(this, value);
	}

	::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel* get_PostViewModel()
	{
		return ((::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479_GET_POSTVIEWMODEL_OFFSET))(this);
	}

	::System::Void set_PostViewModel(::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MVVM::ViewModel::LimaoNewsPostViewModel*))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479_SET_POSTVIEWMODEL_OFFSET))(this, value);
	}

	::System::UInt32 get_DefaultCommentID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479_GET_DEFAULTCOMMENTID_OFFSET))(this);
	}

	::System::Void set_DefaultCommentID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479_SET_DEFAULTCOMMENTID_OFFSET))(this, value);
	}

	::System::Guid get_Guid()
	{
		return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479_GET_GUID_OFFSET))(this);
	}

	::System::Void set_Guid(::System::Guid value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Guid))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479_SET_GUID_OFFSET))(this, value);
	}

	::System::Void __ctor_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479___CTOR_B__0_0_OFFSET))(this);
	}

	::System::Void __ctor_b__0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479___CTOR_B__0_1_OFFSET))(this);
	}

	::System::Void __ctor_b__0_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A000EDE5E4958479___CTOR_B__0_2_OFFSET))(this);
	}
};
