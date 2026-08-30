#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/Struct_2_696504DF8F5DDF76.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_E189E4C63AB59BB3_Class_1_6805394856DB9348;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_E189E4C63AB59BB3_GET_CANMAKESUBDIEFLAG_OFFSET UNITYSDK_OFFSET(0x18ABC150)
#define CLASS_1_E189E4C63AB59BB3_GET_HPSHAREDRESULTCACHE_OFFSET UNITYSDK_OFFSET(0x18ABC170)
#define CLASS_1_E189E4C63AB59BB3_GET_MAINAGENT_OFFSET UNITYSDK_OFFSET(0x18ABC0D0)
#define CLASS_1_E189E4C63AB59BB3_GET_RESOLVESHIELD_OFFSET UNITYSDK_OFFSET(0x18ABC110)
#define CLASS_1_E189E4C63AB59BB3_GET_RESOLVESUBLOCKHP_OFFSET UNITYSDK_OFFSET(0x18ABC130)
#define CLASS_1_E189E4C63AB59BB3_GET_SUBTARGETLIST_OFFSET UNITYSDK_OFFSET(0x18ABC0F0)
#define CLASS_1_E189E4C63AB59BB3_METHOD_1_03237FD6F723F288_OFFSET UNITYSDK_OFFSET(0x18ABBA90)
#define CLASS_1_E189E4C63AB59BB3_METHOD_1_0798AB0C5AC86AC4_OFFSET UNITYSDK_OFFSET(0x18ABA9A0)
#define CLASS_1_E189E4C63AB59BB3_METHOD_1_19E4E80E4222AC78_OFFSET UNITYSDK_OFFSET(0x18ABAA20)
#define CLASS_1_E189E4C63AB59BB3_METHOD_1_1E4484707DDE3490_OFFSET UNITYSDK_OFFSET(0x18ABAF90)
#define CLASS_1_E189E4C63AB59BB3_METHOD_1_5B57B02CD98C75B1_OFFSET UNITYSDK_OFFSET(0x18ABBB40)
#define CLASS_1_E189E4C63AB59BB3_METHOD_1_74439A9FABAFE511_OFFSET UNITYSDK_OFFSET(0x18ABA5A0)
#define CLASS_1_E189E4C63AB59BB3_METHOD_1_83259CE775EE8F19_OFFSET UNITYSDK_OFFSET(0x18ABB8C0)
#define CLASS_1_E189E4C63AB59BB3_METHOD_1_83829FA4691FBE97_OFFSET UNITYSDK_OFFSET(0x18ABB130)
#define CLASS_1_E189E4C63AB59BB3_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18ABB540)
#define CLASS_1_E189E4C63AB59BB3_METHOD_1_AB1D24D3FB8CCB10_OFFSET UNITYSDK_OFFSET(0x18ABB5B0)
#define CLASS_1_E189E4C63AB59BB3_METHOD_1_C668CA64A755C44E_1_OFFSET UNITYSDK_OFFSET(0x18ABB820)
#define CLASS_1_E189E4C63AB59BB3_METHOD_1_C668CA64A755C44E_2_OFFSET UNITYSDK_OFFSET(0x18ABB870)
#define CLASS_1_E189E4C63AB59BB3_METHOD_1_C668CA64A755C44E_OFFSET UNITYSDK_OFFSET(0x18ABB7D0)
#define CLASS_1_E189E4C63AB59BB3_METHOD_1_EA833CD963126105_OFFSET UNITYSDK_OFFSET(0x18ABAFF0)
#define CLASS_1_E189E4C63AB59BB3_METHOD_1_F8239026A2571E77_OFFSET UNITYSDK_OFFSET(0x18ABBBD0)
#define CLASS_1_E189E4C63AB59BB3_SET_CANMAKESUBDIEFLAG_OFFSET UNITYSDK_OFFSET(0x18ABC160)
#define CLASS_1_E189E4C63AB59BB3_SET_HPSHAREDRESULTCACHE_OFFSET UNITYSDK_OFFSET(0x18ABC180)
#define CLASS_1_E189E4C63AB59BB3_SET_MAINAGENT_OFFSET UNITYSDK_OFFSET(0x18ABC0E0)
#define CLASS_1_E189E4C63AB59BB3_SET_RESOLVESHIELD_OFFSET UNITYSDK_OFFSET(0x18ABC120)
#define CLASS_1_E189E4C63AB59BB3_SET_RESOLVESUBLOCKHP_OFFSET UNITYSDK_OFFSET(0x18ABC140)
#define CLASS_1_E189E4C63AB59BB3_SET_SUBTARGETLIST_OFFSET UNITYSDK_OFFSET(0x18ABC100)
#define CLASS_1_E189E4C63AB59BB3__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ABC190)
#define CLASS_1_E189E4C63AB59BB3__CTOR_OFFSET UNITYSDK_OFFSET(0x18ABA510)

inline static constexpr unsigned int Class_1_E189E4C63AB59BB3_TypeDefinitionIndex = 57873;

class Class_1_E189E4C63AB59BB3 : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint* StaticGet_KOFEOGOHBHI()
	{
		return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E189E4C63AB59BB3_TypeDefinitionIndex)->GetStaticField(0x14CC0);
	}
	::RPG::GameCore::GameEntity* EOBLJJBOBIN; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _SubTargetList_k__BackingField; // 0x18
	::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::Struct_2_696504DF8F5DDF76>*>* _HpSharedResultCache_k__BackingField; // 0x20
	::Class_1_E189E4C63AB59BB3_Class_1_6805394856DB9348* _MainAgent_k__BackingField; // 0x28
	::System::Boolean _ResolveSubLockHP_k__BackingField; // 0x30
	::System::Boolean _CanMakeSubDieFlag_k__BackingField; // 0x31
	::System::Boolean _ResolveShield_k__BackingField; // 0x32

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3__CCTOR_OFFSET))();
	}

	::System::Void Method_1_74439A9FABAFE511()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_METHOD_1_74439A9FABAFE511_OFFSET))(this);
	}

	::Class_1_E189E4C63AB59BB3* Method_1_1E4484707DDE3490(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_E189E4C63AB59BB3*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_METHOD_1_1E4484707DDE3490_OFFSET))(this, a1);
	}

	::Class_1_E189E4C63AB59BB3* Method_1_EA833CD963126105(::Il2CppArray<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::Class_1_E189E4C63AB59BB3*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_METHOD_1_EA833CD963126105_OFFSET))(this, a1);
	}

	::System::Void Method_1_83829FA4691FBE97(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_METHOD_1_83829FA4691FBE97_OFFSET))(this, a1);
	}

	::Class_1_E189E4C63AB59BB3* Method_1_AB1D24D3FB8CCB10()
	{
		return ((::Class_1_E189E4C63AB59BB3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_METHOD_1_AB1D24D3FB8CCB10_OFFSET))(this);
	}

	::Class_1_E189E4C63AB59BB3* Method_1_C668CA64A755C44E(::System::Boolean a1)
	{
		return ((::Class_1_E189E4C63AB59BB3*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_METHOD_1_C668CA64A755C44E_OFFSET))(this, a1);
	}

	::Class_1_E189E4C63AB59BB3* Method_1_C668CA64A755C44E_1(::System::Boolean a1)
	{
		return ((::Class_1_E189E4C63AB59BB3*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_METHOD_1_C668CA64A755C44E_1_OFFSET))(this, a1);
	}

	::Class_1_E189E4C63AB59BB3* Method_1_C668CA64A755C44E_2(::System::Boolean a1)
	{
		return ((::Class_1_E189E4C63AB59BB3*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_METHOD_1_C668CA64A755C44E_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_83259CE775EE8F19()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_METHOD_1_83259CE775EE8F19_OFFSET))(this);
	}

	::System::Boolean Method_1_03237FD6F723F288(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_METHOD_1_03237FD6F723F288_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_F8239026A2571E77(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_METHOD_1_F8239026A2571E77_OFFSET))(this, a1);
	}

	::System::Void Method_1_19E4E80E4222AC78(::Struct_2_5909FD7779934CCA a1, ::RPG::GameCore::GameEntity* a2, ::System::Nullable_1<::RPG::GameCore::FixPoint> a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_5909FD7779934CCA, ::RPG::GameCore::GameEntity*, ::System::Nullable_1<::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_METHOD_1_19E4E80E4222AC78_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_5B57B02CD98C75B1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_METHOD_1_5B57B02CD98C75B1_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_0798AB0C5AC86AC4()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_METHOD_1_0798AB0C5AC86AC4_OFFSET))(this);
	}

	::Class_1_E189E4C63AB59BB3_Class_1_6805394856DB9348* get_MainAgent()
	{
		return ((::Class_1_E189E4C63AB59BB3_Class_1_6805394856DB9348*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_GET_MAINAGENT_OFFSET))(this);
	}

	::System::Void set_MainAgent(::Class_1_E189E4C63AB59BB3_Class_1_6805394856DB9348* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E189E4C63AB59BB3_Class_1_6805394856DB9348*))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_SET_MAINAGENT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_SubTargetList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_GET_SUBTARGETLIST_OFFSET))(this);
	}

	::System::Void set_SubTargetList(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_SET_SUBTARGETLIST_OFFSET))(this, a1);
	}

	::System::Boolean get_ResolveShield()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_GET_RESOLVESHIELD_OFFSET))(this);
	}

	::System::Void set_ResolveShield(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_SET_RESOLVESHIELD_OFFSET))(this, a1);
	}

	::System::Boolean get_ResolveSubLockHP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_GET_RESOLVESUBLOCKHP_OFFSET))(this);
	}

	::System::Void set_ResolveSubLockHP(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_SET_RESOLVESUBLOCKHP_OFFSET))(this, a1);
	}

	::System::Boolean get_CanMakeSubDieFlag()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_GET_CANMAKESUBDIEFLAG_OFFSET))(this);
	}

	::System::Void set_CanMakeSubDieFlag(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_SET_CANMAKESUBDIEFLAG_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::Struct_2_696504DF8F5DDF76>*>* get_HpSharedResultCache()
	{
		return ((::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::Struct_2_696504DF8F5DDF76>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_GET_HPSHAREDRESULTCACHE_OFFSET))(this);
	}

	::System::Void set_HpSharedResultCache(::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::Struct_2_696504DF8F5DDF76>*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::Struct_2_696504DF8F5DDF76>*>*))((::PBYTE)hIl2Cpp + CLASS_1_E189E4C63AB59BB3_SET_HPSHAREDRESULTCACHE_OFFSET))(this, a1);
	}
};
