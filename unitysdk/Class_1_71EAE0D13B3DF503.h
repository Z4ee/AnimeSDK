#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_3.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_71EAE0D13B3DF503_GET_ADDONSKILLLIST_OFFSET UNITYSDK_OFFSET(0xA993BB0)
#define CLASS_1_71EAE0D13B3DF503_GET_ADVJSONOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA993B70)
#define CLASS_1_71EAE0D13B3DF503_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xA993B30)
#define CLASS_1_71EAE0D13B3DF503_GET_BATTLEJSONOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA993B50)
#define CLASS_1_71EAE0D13B3DF503_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA993B20)
#define CLASS_1_71EAE0D13B3DF503_GET_RESMAPCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xA993B90)
#define CLASS_1_71EAE0D13B3DF503_SET_ADDONSKILLLIST_OFFSET UNITYSDK_OFFSET(0xA993BC0)
#define CLASS_1_71EAE0D13B3DF503_SET_ADVJSONOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA993B80)
#define CLASS_1_71EAE0D13B3DF503_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0xA993B40)
#define CLASS_1_71EAE0D13B3DF503_SET_BATTLEJSONOVERRIDE_OFFSET UNITYSDK_OFFSET(0xA993B60)
#define CLASS_1_71EAE0D13B3DF503_SET_RESMAPCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xA993BA0)
#define CLASS_1_71EAE0D13B3DF503__CTOR_OFFSET UNITYSDK_OFFSET(0xA993BD0)

inline static constexpr unsigned int Class_1_71EAE0D13B3DF503_TypeDefinitionIndex = 48581;

class Class_1_71EAE0D13B3DF503 : public ::System::Object
{
public:
	::System::String* _ResMapConfigPath_k__BackingField; // 0x10
	::System::String* _AdvJsonOverride_k__BackingField; // 0x18
	::System::String* _BattleJsonOverride_k__BackingField; // 0x20
	::Il2CppArray<::System::UInt32>* _AddOnSkillList_k__BackingField; // 0x28
	::Struct_2_019938BC9C50B169_3 _Identifier_k__BackingField; // 0x30
	::System::UInt32 _AvatarID_k__BackingField; // 0x34

	::System::Void _ctor(::Struct_2_019938BC9C50B169_3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_019938BC9C50B169_3))((::PBYTE)hIl2Cpp + CLASS_1_71EAE0D13B3DF503__CTOR_OFFSET))(this, a1);
	}

	::Struct_2_019938BC9C50B169_3 get_Identifier()
	{
		return ((::Struct_2_019938BC9C50B169_3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71EAE0D13B3DF503_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::UInt32 get_AvatarID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71EAE0D13B3DF503_GET_AVATARID_OFFSET))(this);
	}

	::System::Void set_AvatarID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_71EAE0D13B3DF503_SET_AVATARID_OFFSET))(this, a1);
	}

	::System::String* get_BattleJsonOverride()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71EAE0D13B3DF503_GET_BATTLEJSONOVERRIDE_OFFSET))(this);
	}

	::System::Void set_BattleJsonOverride(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_71EAE0D13B3DF503_SET_BATTLEJSONOVERRIDE_OFFSET))(this, a1);
	}

	::System::String* get_AdvJsonOverride()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71EAE0D13B3DF503_GET_ADVJSONOVERRIDE_OFFSET))(this);
	}

	::System::Void set_AdvJsonOverride(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_71EAE0D13B3DF503_SET_ADVJSONOVERRIDE_OFFSET))(this, a1);
	}

	::System::String* get_ResMapConfigPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71EAE0D13B3DF503_GET_RESMAPCONFIGPATH_OFFSET))(this);
	}

	::System::Void set_ResMapConfigPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_71EAE0D13B3DF503_SET_RESMAPCONFIGPATH_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* get_AddOnSkillList()
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_71EAE0D13B3DF503_GET_ADDONSKILLLIST_OFFSET))(this);
	}

	::System::Void set_AddOnSkillList(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_71EAE0D13B3DF503_SET_ADDONSKILLLIST_OFFSET))(this, a1);
	}
};
