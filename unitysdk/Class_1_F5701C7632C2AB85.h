#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_397;
class Class_1_B9F495DD5C0F30AA;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }

#define CLASS_1_F5701C7632C2AB85_GET_AVATARIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x15D3E3E0)
#define CLASS_1_F5701C7632C2AB85_GET_BUYCOMMAND_OFFSET UNITYSDK_OFFSET(0x15D3E420)
#define CLASS_1_F5701C7632C2AB85_GET_BUYITEMMSG_OFFSET UNITYSDK_OFFSET(0x15D3E410)
#define CLASS_1_F5701C7632C2AB85_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x15D3E3A0)
#define CLASS_1_F5701C7632C2AB85_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x15D3E3B0)
#define CLASS_1_F5701C7632C2AB85_GET_ISROLEVISIBLE_OFFSET UNITYSDK_OFFSET(0x15D3E3C0)
#define CLASS_1_F5701C7632C2AB85_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15D3E3D0)
#define CLASS_1_F5701C7632C2AB85_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x15D3E400)
#define CLASS_1_F5701C7632C2AB85_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0x15D3E3F0)
#define CLASS_1_F5701C7632C2AB85_METHOD_1_1E87171074AA7CDF_OFFSET UNITYSDK_OFFSET(0x15D3DDB0)
#define CLASS_1_F5701C7632C2AB85_METHOD_1_5FAD56E9E208220A_OFFSET UNITYSDK_OFFSET(0x15D3E430)
#define CLASS_1_F5701C7632C2AB85_METHOD_1_87318FF00D6BC7EB_OFFSET UNITYSDK_OFFSET(0x15D3D8D0)
#define CLASS_1_F5701C7632C2AB85_METHOD_1_B95E30FCF9273ECB_OFFSET UNITYSDK_OFFSET(0x15D3DD10)
#define CLASS_1_F5701C7632C2AB85__CTOR_OFFSET UNITYSDK_OFFSET(0x15D3D640)

inline static constexpr unsigned int Class_1_F5701C7632C2AB85_TypeDefinitionIndex = 49721;

class Class_1_F5701C7632C2AB85 : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::System::UInt32>* _RoleId_k__BackingField; // 0x10
	::R3::ReactiveProperty_1<::System::Boolean>* _IsRoleVisible_k__BackingField; // 0x18
	::R3::ReactiveProperty_1<::System::String*>* _AvatarImagePath_k__BackingField; // 0x20
	::Class_0_16E4307DCC419505_397* _BuyCommand_k__BackingField; // 0x28
	::R3::ReactiveProperty_1<::RPG::Client::TextID>* _Name_k__BackingField; // 0x30
	::R3::ReactiveProperty_1<::Class_1_B9F495DD5C0F30AA*>* _BuyItemMsg_k__BackingField; // 0x38
	::R3::ReactiveProperty_1<::System::UInt32>* _Rarity_k__BackingField; // 0x40
	::R3::ReactiveProperty_1<::System::Boolean>* _IsEmpty_k__BackingField; // 0x48
	::System::Int32 _Index_k__BackingField; // 0x50

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F5701C7632C2AB85__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_F5701C7632C2AB85* Method_1_B95E30FCF9273ECB(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::Class_1_F5701C7632C2AB85*(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F5701C7632C2AB85_METHOD_1_B95E30FCF9273ECB_OFFSET))(a1, a2);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5701C7632C2AB85_GET_INDEX_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_IsEmpty()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5701C7632C2AB85_GET_ISEMPTY_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_IsRoleVisible()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5701C7632C2AB85_GET_ISROLEVISIBLE_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::RPG::Client::TextID>* get_Name()
	{
		return ((::R3::ReactiveProperty_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5701C7632C2AB85_GET_NAME_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_AvatarImagePath()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5701C7632C2AB85_GET_AVATARIMAGEPATH_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::UInt32>* get_RoleId()
	{
		return ((::R3::ReactiveProperty_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5701C7632C2AB85_GET_ROLEID_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::UInt32>* get_Rarity()
	{
		return ((::R3::ReactiveProperty_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5701C7632C2AB85_GET_RARITY_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::Class_1_B9F495DD5C0F30AA*>* get_BuyItemMsg()
	{
		return ((::R3::ReactiveProperty_1<::Class_1_B9F495DD5C0F30AA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5701C7632C2AB85_GET_BUYITEMMSG_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* get_BuyCommand()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5701C7632C2AB85_GET_BUYCOMMAND_OFFSET))(this);
	}

	::System::Void Method_1_1E87171074AA7CDF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F5701C7632C2AB85_METHOD_1_1E87171074AA7CDF_OFFSET))(this, a1);
	}

	::System::Void Method_1_87318FF00D6BC7EB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5701C7632C2AB85_METHOD_1_87318FF00D6BC7EB_OFFSET))(this);
	}

	::System::Void Method_1_5FAD56E9E208220A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5701C7632C2AB85_METHOD_1_5FAD56E9E208220A_OFFSET))(this);
	}
};
