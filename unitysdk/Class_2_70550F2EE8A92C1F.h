#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterGroupMemberType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_0347AE3FB0036865.h"

class Class_0_16E4307DCC419505_460;
class Class_1_B62177FFC32A3674;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_70550F2EE8A92C1F_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC013AC0)
#define CLASS_2_70550F2EE8A92C1F_GET_ISWEAKBINDING_OFFSET UNITYSDK_OFFSET(0xC0144F0)
#define CLASS_2_70550F2EE8A92C1F_GET_LEADER_OFFSET UNITYSDK_OFFSET(0xC014490)
#define CLASS_2_70550F2EE8A92C1F_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0xC0144B0)
#define CLASS_2_70550F2EE8A92C1F_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0xC014470)
#define CLASS_2_70550F2EE8A92C1F_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xC0144D0)
#define CLASS_2_70550F2EE8A92C1F_METHOD_2_36BA8CACA312B650_OFFSET UNITYSDK_OFFSET(0xC0139E0)
#define CLASS_2_70550F2EE8A92C1F_METHOD_2_41B9EB50390851CB_OFFSET UNITYSDK_OFFSET(0xC013950)
#define CLASS_2_70550F2EE8A92C1F_METHOD_2_5FBA6E8BC4616793_OFFSET UNITYSDK_OFFSET(0xC014040)
#define CLASS_2_70550F2EE8A92C1F_METHOD_2_739DB9F245C7FAD0_OFFSET UNITYSDK_OFFSET(0xC013D60)
#define CLASS_2_70550F2EE8A92C1F_METHOD_2_775810BA9C2CA7F0_OFFSET UNITYSDK_OFFSET(0xC013580)
#define CLASS_2_70550F2EE8A92C1F_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xC013A60)
#define CLASS_2_70550F2EE8A92C1F_METHOD_2_AB8FA5409F7405E1_OFFSET UNITYSDK_OFFSET(0xC0138A0)
#define CLASS_2_70550F2EE8A92C1F_METHOD_2_CCF7A015FEFCDABD_OFFSET UNITYSDK_OFFSET(0xC0140F0)
#define CLASS_2_70550F2EE8A92C1F_METHOD_2_CEF6745434255CF1_OFFSET UNITYSDK_OFFSET(0xC0142D0)
#define CLASS_2_70550F2EE8A92C1F_METHOD_2_EF343326A0C7462C_OFFSET UNITYSDK_OFFSET(0xC013DD0)
#define CLASS_2_70550F2EE8A92C1F_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xC013890)
#define CLASS_2_70550F2EE8A92C1F_SET_ISWEAKBINDING_OFFSET UNITYSDK_OFFSET(0xC014500)
#define CLASS_2_70550F2EE8A92C1F_SET_LEADER_OFFSET UNITYSDK_OFFSET(0xC0144A0)
#define CLASS_2_70550F2EE8A92C1F_SET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0xC0144C0)
#define CLASS_2_70550F2EE8A92C1F_SET_MEMBERS_OFFSET UNITYSDK_OFFSET(0xC014480)
#define CLASS_2_70550F2EE8A92C1F_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xC0144E0)
#define CLASS_2_70550F2EE8A92C1F__CTOR_OFFSET UNITYSDK_OFFSET(0xC014510)
#define CLASS_2_70550F2EE8A92C1F__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xC013530)

inline static constexpr unsigned int Class_2_70550F2EE8A92C1F_TypeDefinitionIndex = 57113;

class Class_2_70550F2EE8A92C1F : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_1_B62177FFC32A3674* KMPEBDPFHDH; // 0x18
	::RPG::GameCore::GameEntity* _Leader_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _Members_k__BackingField; // 0x28
	::System::String* _MemberName_k__BackingField; // 0x30
	::RPG::GameCore::CharacterGroupMemberType _Type_k__BackingField; // 0x38
	::System::Int32 JCCANEMFCND; // 0x3C
	::System::Single NONGGEIOGLE; // 0x40
	::System::Int32 BDHPOJCKPIM; // 0x44
	::System::Boolean LJLBJGABCOD; // 0x48
	::System::Boolean _IsWeakBinding_k__BackingField; // 0x49
	::System::Boolean OFOCDNMJGDF; // 0x4A
	::System::Boolean DMHOLOEKCLD; // 0x4B
	::System::Boolean DNHLIJEGPBG; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Method_2_775810BA9C2CA7F0(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_METHOD_2_775810BA9C2CA7F0_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_70550F2EE8A92C1F* Method_2_AB8FA5409F7405E1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_70550F2EE8A92C1F*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_METHOD_2_AB8FA5409F7405E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_41B9EB50390851CB(::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>*))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_METHOD_2_41B9EB50390851CB_OFFSET))(this, a1);
	}

	::System::Void Method_2_36BA8CACA312B650(::System::Boolean a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_METHOD_2_36BA8CACA312B650_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_739DB9F245C7FAD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_METHOD_2_739DB9F245C7FAD0_OFFSET))(this);
	}

	::System::Void Method_2_EF343326A0C7462C(::Class_0_16E4307DCC419505_460* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_460*))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_METHOD_2_EF343326A0C7462C_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FBA6E8BC4616793(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_METHOD_2_5FBA6E8BC4616793_OFFSET))(this, a1);
	}

	::System::Void Method_2_CCF7A015FEFCDABD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_METHOD_2_CCF7A015FEFCDABD_OFFSET))(this);
	}

	::System::Void Method_2_CEF6745434255CF1(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_METHOD_2_CEF6745434255CF1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_Members()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_GET_MEMBERS_OFFSET))(this);
	}

	::System::Void set_Members(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_SET_MEMBERS_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_Leader()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_GET_LEADER_OFFSET))(this);
	}

	::System::Void set_Leader(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_SET_LEADER_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* get_MemberName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_GET_MEMBERNAME_OFFSET))(this);
	}

	::System::Void set_MemberName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_SET_MEMBERNAME_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterGroupMemberType get_Type()
	{
		return ((::RPG::GameCore::CharacterGroupMemberType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::CharacterGroupMemberType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterGroupMemberType))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_SET_TYPE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsWeakBinding()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_GET_ISWEAKBINDING_OFFSET))(this);
	}

	::System::Void set_IsWeakBinding(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_70550F2EE8A92C1F_SET_ISWEAKBINDING_OFFSET))(this, a1);
	}
};
