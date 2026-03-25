#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BigFixPoint.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/Struct_2_696504DF8F5DDF76.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_CC5F9F66B76D550F_Class_1_6E38FCF764CF5387;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define CLASS_1_CC5F9F66B76D550F_GET_CANMAKESUBDIEFLAG_OFFSET UNITYSDK_OFFSET(0x10CDBE00)
#define CLASS_1_CC5F9F66B76D550F_GET_HPSHAREDRESULTCACHE_OFFSET UNITYSDK_OFFSET(0x10CDBE20)
#define CLASS_1_CC5F9F66B76D550F_GET_MAINAGENT_OFFSET UNITYSDK_OFFSET(0x10CDBD80)
#define CLASS_1_CC5F9F66B76D550F_GET_RESOLVESHIELD_OFFSET UNITYSDK_OFFSET(0x10CDBDC0)
#define CLASS_1_CC5F9F66B76D550F_GET_RESOLVESUBLOCKHP_OFFSET UNITYSDK_OFFSET(0x10CDBDE0)
#define CLASS_1_CC5F9F66B76D550F_GET_SUBTARGETLIST_OFFSET UNITYSDK_OFFSET(0x10CDBDA0)
#define CLASS_1_CC5F9F66B76D550F_METHOD_1_0798AB0C5AC86AC4_OFFSET UNITYSDK_OFFSET(0x10CD99A0)
#define CLASS_1_CC5F9F66B76D550F_METHOD_1_1E27A7B84BD57C4A_OFFSET UNITYSDK_OFFSET(0x10CDAE50)
#define CLASS_1_CC5F9F66B76D550F_METHOD_1_667A81ABE9342DA6_OFFSET UNITYSDK_OFFSET(0x10CD9390)
#define CLASS_1_CC5F9F66B76D550F_METHOD_1_67DAA6D53F6223A9_OFFSET UNITYSDK_OFFSET(0x10CDBA50)
#define CLASS_1_CC5F9F66B76D550F_METHOD_1_7DD8C0FAE138E3C1_OFFSET UNITYSDK_OFFSET(0x10CD9AC0)
#define CLASS_1_CC5F9F66B76D550F_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x10CDB1C0)
#define CLASS_1_CC5F9F66B76D550F_METHOD_1_B6653CD8BE319FB1_OFFSET UNITYSDK_OFFSET(0x10CDBB10)
#define CLASS_1_CC5F9F66B76D550F_METHOD_1_C668CA64A755C44E_1_OFFSET UNITYSDK_OFFSET(0x10CDB630)
#define CLASS_1_CC5F9F66B76D550F_METHOD_1_C668CA64A755C44E_2_OFFSET UNITYSDK_OFFSET(0x10CDB680)
#define CLASS_1_CC5F9F66B76D550F_METHOD_1_C668CA64A755C44E_OFFSET UNITYSDK_OFFSET(0x10CDB470)
#define CLASS_1_CC5F9F66B76D550F_METHOD_1_DD4EF44F62A58CDC_OFFSET UNITYSDK_OFFSET(0x10CDA620)
#define CLASS_1_CC5F9F66B76D550F_METHOD_1_E569F579DD0C4231_OFFSET UNITYSDK_OFFSET(0x10CDB8A0)
#define CLASS_1_CC5F9F66B76D550F_METHOD_1_E651E87D00D2520F_OFFSET UNITYSDK_OFFSET(0x10CDAC60)
#define CLASS_1_CC5F9F66B76D550F_METHOD_1_EABA5216081E0DF3_OFFSET UNITYSDK_OFFSET(0x10CDB230)
#define CLASS_1_CC5F9F66B76D550F_METHOD_1_FD647A48096EB173_OFFSET UNITYSDK_OFFSET(0x10CDB6D0)
#define CLASS_1_CC5F9F66B76D550F_METHOD_1_FFC0401F62716107_OFFSET UNITYSDK_OFFSET(0x10CDAD10)
#define CLASS_1_CC5F9F66B76D550F_SET_CANMAKESUBDIEFLAG_OFFSET UNITYSDK_OFFSET(0x10CDBE10)
#define CLASS_1_CC5F9F66B76D550F_SET_HPSHAREDRESULTCACHE_OFFSET UNITYSDK_OFFSET(0x10CDBE30)
#define CLASS_1_CC5F9F66B76D550F_SET_MAINAGENT_OFFSET UNITYSDK_OFFSET(0x10CDBD90)
#define CLASS_1_CC5F9F66B76D550F_SET_RESOLVESHIELD_OFFSET UNITYSDK_OFFSET(0x10CDBDD0)
#define CLASS_1_CC5F9F66B76D550F_SET_RESOLVESUBLOCKHP_OFFSET UNITYSDK_OFFSET(0x10CDBDF0)
#define CLASS_1_CC5F9F66B76D550F_SET_SUBTARGETLIST_OFFSET UNITYSDK_OFFSET(0x10CDBDB0)
#define CLASS_1_CC5F9F66B76D550F__CCTOR_OFFSET UNITYSDK_OFFSET(0x10CDBE40)
#define CLASS_1_CC5F9F66B76D550F__CTOR_OFFSET UNITYSDK_OFFSET(0x10CD92F0)

inline static constexpr unsigned int Class_1_CC5F9F66B76D550F_TypeDefinitionIndex = 46525;

class Class_1_CC5F9F66B76D550F : public ::System::Object
{
public:
	static ::RPG::GameCore::FixPoint* StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::FixPoint*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC5F9F66B76D550F_TypeDefinitionIndex)->GetStaticField(0x11610);
	}
	::RPG::GameCore::GameEntity* Field_1_7; // 0x10
	::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::Struct_2_696504DF8F5DDF76>*>* _HpSharedResultCache_k__BackingField; // 0x18
	::Class_1_CC5F9F66B76D550F_Class_1_6E38FCF764CF5387* _MainAgent_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _SubTargetList_k__BackingField; // 0x28
	::System::Boolean _CanMakeSubDieFlag_k__BackingField; // 0x30
	::System::Boolean _ResolveSubLockHP_k__BackingField; // 0x31
	::System::Boolean _ResolveShield_k__BackingField; // 0x32

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F__CCTOR_OFFSET))();
	}

	::System::Void Method_1_667A81ABE9342DA6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_METHOD_1_667A81ABE9342DA6_OFFSET))(this);
	}

	::Class_1_CC5F9F66B76D550F* Method_1_E651E87D00D2520F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_CC5F9F66B76D550F*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_METHOD_1_E651E87D00D2520F_OFFSET))(this, a1);
	}

	::Class_1_CC5F9F66B76D550F* Method_1_FFC0401F62716107(::Il2CppArray<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::Class_1_CC5F9F66B76D550F*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_METHOD_1_FFC0401F62716107_OFFSET))(this, a1);
	}

	::System::Void Method_1_1E27A7B84BD57C4A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_METHOD_1_1E27A7B84BD57C4A_OFFSET))(this, a1);
	}

	::Class_1_CC5F9F66B76D550F* Method_1_EABA5216081E0DF3()
	{
		return ((::Class_1_CC5F9F66B76D550F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_METHOD_1_EABA5216081E0DF3_OFFSET))(this);
	}

	::Class_1_CC5F9F66B76D550F* Method_1_C668CA64A755C44E(::System::Boolean a1)
	{
		return ((::Class_1_CC5F9F66B76D550F*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_METHOD_1_C668CA64A755C44E_OFFSET))(this, a1);
	}

	::Class_1_CC5F9F66B76D550F* Method_1_C668CA64A755C44E_1(::System::Boolean a1)
	{
		return ((::Class_1_CC5F9F66B76D550F*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_METHOD_1_C668CA64A755C44E_1_OFFSET))(this, a1);
	}

	::Class_1_CC5F9F66B76D550F* Method_1_C668CA64A755C44E_2(::System::Boolean a1)
	{
		return ((::Class_1_CC5F9F66B76D550F*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_METHOD_1_C668CA64A755C44E_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_FD647A48096EB173()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_METHOD_1_FD647A48096EB173_OFFSET))(this);
	}

	::System::Boolean Method_1_E569F579DD0C4231(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_METHOD_1_E569F579DD0C4231_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_1_B6653CD8BE319FB1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_METHOD_1_B6653CD8BE319FB1_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD4EF44F62A58CDC(::Struct_2_5909FD7779934CCA a1, ::RPG::GameCore::GameEntity* a2, ::System::Nullable_1<::RPG::GameCore::FixPoint> a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_5909FD7779934CCA, ::RPG::GameCore::GameEntity*, ::System::Nullable_1<::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_METHOD_1_DD4EF44F62A58CDC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7DD8C0FAE138E3C1(::Struct_2_5909FD7779934CCA a1, ::RPG::GameCore::GameEntity* a2, ::System::Nullable_1<::RPG::GameCore::BigFixPoint> a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_5909FD7779934CCA, ::RPG::GameCore::GameEntity*, ::System::Nullable_1<::RPG::GameCore::BigFixPoint>))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_METHOD_1_7DD8C0FAE138E3C1_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_67DAA6D53F6223A9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_METHOD_1_67DAA6D53F6223A9_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_0798AB0C5AC86AC4()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_METHOD_1_0798AB0C5AC86AC4_OFFSET))(this);
	}

	::Class_1_CC5F9F66B76D550F_Class_1_6E38FCF764CF5387* get_MainAgent()
	{
		return ((::Class_1_CC5F9F66B76D550F_Class_1_6E38FCF764CF5387*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_GET_MAINAGENT_OFFSET))(this);
	}

	::System::Void set_MainAgent(::Class_1_CC5F9F66B76D550F_Class_1_6E38FCF764CF5387* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC5F9F66B76D550F_Class_1_6E38FCF764CF5387*))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_SET_MAINAGENT_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_SubTargetList()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_GET_SUBTARGETLIST_OFFSET))(this);
	}

	::System::Void set_SubTargetList(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_SET_SUBTARGETLIST_OFFSET))(this, value);
	}

	::System::Boolean get_ResolveShield()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_GET_RESOLVESHIELD_OFFSET))(this);
	}

	::System::Void set_ResolveShield(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_SET_RESOLVESHIELD_OFFSET))(this, value);
	}

	::System::Boolean get_ResolveSubLockHP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_GET_RESOLVESUBLOCKHP_OFFSET))(this);
	}

	::System::Void set_ResolveSubLockHP(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_SET_RESOLVESUBLOCKHP_OFFSET))(this, value);
	}

	::System::Boolean get_CanMakeSubDieFlag()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_GET_CANMAKESUBDIEFLAG_OFFSET))(this);
	}

	::System::Void set_CanMakeSubDieFlag(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_SET_CANMAKESUBDIEFLAG_OFFSET))(this, value);
	}

	::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::Struct_2_696504DF8F5DDF76>*>* get_HpSharedResultCache()
	{
		return ((::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::Struct_2_696504DF8F5DDF76>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_GET_HPSHAREDRESULTCACHE_OFFSET))(this);
	}

	::System::Void set_HpSharedResultCache(::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::Struct_2_696504DF8F5DDF76>*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Stack_1<::System::Collections::Generic::List_1<::Struct_2_696504DF8F5DDF76>*>*))((::PBYTE)hIl2Cpp + CLASS_1_CC5F9F66B76D550F_SET_HPSHAREDRESULTCACHE_OFFSET))(this, value);
	}
};
