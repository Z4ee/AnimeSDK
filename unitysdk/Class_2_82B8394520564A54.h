#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterGroupMemberType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_0347AE3FB0036865.h"

class Class_0_16E4307DCC419505_375;
class Class_1_9D83A4098E6EAC42;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_82B8394520564A54_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10C16A20)
#define CLASS_2_82B8394520564A54_GET_ISWEAKBINDING_OFFSET UNITYSDK_OFFSET(0x10C172F0)
#define CLASS_2_82B8394520564A54_GET_LEADER_OFFSET UNITYSDK_OFFSET(0x10C17290)
#define CLASS_2_82B8394520564A54_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x10C172B0)
#define CLASS_2_82B8394520564A54_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x10C17270)
#define CLASS_2_82B8394520564A54_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x10C172D0)
#define CLASS_2_82B8394520564A54_METHOD_2_140E92B6D36EDFFE_OFFSET UNITYSDK_OFFSET(0x10C170D0)
#define CLASS_2_82B8394520564A54_METHOD_2_36BA8CACA312B650_OFFSET UNITYSDK_OFFSET(0x10C16940)
#define CLASS_2_82B8394520564A54_METHOD_2_466FDCDCBC13D73A_OFFSET UNITYSDK_OFFSET(0x10C16EB0)
#define CLASS_2_82B8394520564A54_METHOD_2_854D7843673A16F6_OFFSET UNITYSDK_OFFSET(0x10C168B0)
#define CLASS_2_82B8394520564A54_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x10C169C0)
#define CLASS_2_82B8394520564A54_METHOD_2_AB8FA5409F7405E1_OFFSET UNITYSDK_OFFSET(0x10C16800)
#define CLASS_2_82B8394520564A54_METHOD_2_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x10C16F60)
#define CLASS_2_82B8394520564A54_METHOD_2_D1BCE0A9A4BF2B16_OFFSET UNITYSDK_OFFSET(0x10C16560)
#define CLASS_2_82B8394520564A54_METHOD_2_EF343326A0C7462C_OFFSET UNITYSDK_OFFSET(0x10C16C80)
#define CLASS_2_82B8394520564A54_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x10C167F0)
#define CLASS_2_82B8394520564A54_SET_ISWEAKBINDING_OFFSET UNITYSDK_OFFSET(0x10C17300)
#define CLASS_2_82B8394520564A54_SET_LEADER_OFFSET UNITYSDK_OFFSET(0x10C172A0)
#define CLASS_2_82B8394520564A54_SET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0x10C172C0)
#define CLASS_2_82B8394520564A54_SET_MEMBERS_OFFSET UNITYSDK_OFFSET(0x10C17280)
#define CLASS_2_82B8394520564A54_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x10C172E0)
#define CLASS_2_82B8394520564A54__CTOR_OFFSET UNITYSDK_OFFSET(0x10C17310)
#define CLASS_2_82B8394520564A54__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x10C16510)
#define CLASS_2_82B8394520564A54___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0x10C17320)

inline static constexpr unsigned int Class_2_82B8394520564A54_TypeDefinitionIndex = 45821;

class Class_2_82B8394520564A54 : public ::RPG::GameCore::GameComponentBase
{
public:
	::Class_1_9D83A4098E6EAC42* Field_2_12; // 0x18
	::System::String* _MemberName_k__BackingField; // 0x20
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _Members_k__BackingField; // 0x28
	::RPG::GameCore::GameEntity* _Leader_k__BackingField; // 0x30
	::System::Single Field_2_11; // 0x38
	::System::Boolean Field_2_8; // 0x3C
	::System::Boolean Field_2_7; // 0x3D
	::System::Boolean Field_2_5; // 0x3E
	::System::Boolean Field_2_9; // 0x3F
	::System::Boolean _IsWeakBinding_k__BackingField; // 0x40
	::System::Int32 Field_2_4; // 0x44
	::System::Int32 Field_2_6; // 0x48
	::RPG::GameCore::CharacterGroupMemberType _Type_k__BackingField; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Method_2_D1BCE0A9A4BF2B16(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_METHOD_2_D1BCE0A9A4BF2B16_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_82B8394520564A54* Method_2_AB8FA5409F7405E1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_82B8394520564A54*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_METHOD_2_AB8FA5409F7405E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_854D7843673A16F6(::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>*))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_METHOD_2_854D7843673A16F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_36BA8CACA312B650(::System::Boolean a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_METHOD_2_36BA8CACA312B650_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_EF343326A0C7462C(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_METHOD_2_EF343326A0C7462C_OFFSET))(this, a1);
	}

	::System::Void Method_2_466FDCDCBC13D73A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_METHOD_2_466FDCDCBC13D73A_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_METHOD_2_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_2_140E92B6D36EDFFE(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_METHOD_2_140E92B6D36EDFFE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_Members()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_GET_MEMBERS_OFFSET))(this);
	}

	::System::Void set_Members(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_SET_MEMBERS_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* get_Leader()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_GET_LEADER_OFFSET))(this);
	}

	::System::Void set_Leader(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_SET_LEADER_OFFSET))(this, value);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* get_MemberName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_GET_MEMBERNAME_OFFSET))(this);
	}

	::System::Void set_MemberName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_SET_MEMBERNAME_OFFSET))(this, value);
	}

	::RPG::GameCore::CharacterGroupMemberType get_Type()
	{
		return ((::RPG::GameCore::CharacterGroupMemberType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::CharacterGroupMemberType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterGroupMemberType))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_SET_TYPE_OFFSET))(this, value);
	}

	::System::Boolean get_IsWeakBinding()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_GET_ISWEAKBINDING_OFFSET))(this);
	}

	::System::Void set_IsWeakBinding(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54_SET_ISWEAKBINDING_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82B8394520564A54___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}
};
