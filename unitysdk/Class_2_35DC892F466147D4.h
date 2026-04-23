#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterGroupMemberType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_0347AE3FB0036865.h"

class Class_0_16E4307DCC419505_382;
class Class_1_9D83A4098E6EAC42;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_35DC892F466147D4_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD34D110)
#define CLASS_2_35DC892F466147D4_GET_ISWEAKBINDING_OFFSET UNITYSDK_OFFSET(0xD34DA00)
#define CLASS_2_35DC892F466147D4_GET_LEADER_OFFSET UNITYSDK_OFFSET(0xD34D9A0)
#define CLASS_2_35DC892F466147D4_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0xD34D9C0)
#define CLASS_2_35DC892F466147D4_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0xD34D980)
#define CLASS_2_35DC892F466147D4_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xD34D9E0)
#define CLASS_2_35DC892F466147D4_METHOD_2_0FA0973E87FBD363_OFFSET UNITYSDK_OFFSET(0xD34D350)
#define CLASS_2_35DC892F466147D4_METHOD_2_140E92B6D36EDFFE_OFFSET UNITYSDK_OFFSET(0xD34D7E0)
#define CLASS_2_35DC892F466147D4_METHOD_2_36BA8CACA312B650_OFFSET UNITYSDK_OFFSET(0xD34D030)
#define CLASS_2_35DC892F466147D4_METHOD_2_466FDCDCBC13D73A_OFFSET UNITYSDK_OFFSET(0xD34D550)
#define CLASS_2_35DC892F466147D4_METHOD_2_854D7843673A16F6_OFFSET UNITYSDK_OFFSET(0xD34CFA0)
#define CLASS_2_35DC892F466147D4_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xD34D0B0)
#define CLASS_2_35DC892F466147D4_METHOD_2_AB8FA5409F7405E1_OFFSET UNITYSDK_OFFSET(0xD34CEF0)
#define CLASS_2_35DC892F466147D4_METHOD_2_C796A0B42720FBD3_OFFSET UNITYSDK_OFFSET(0xD34D600)
#define CLASS_2_35DC892F466147D4_METHOD_2_CF9CA579E44CB0FF_OFFSET UNITYSDK_OFFSET(0xD34CC80)
#define CLASS_2_35DC892F466147D4_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xD34CEE0)
#define CLASS_2_35DC892F466147D4_SET_ISWEAKBINDING_OFFSET UNITYSDK_OFFSET(0xD34DA10)
#define CLASS_2_35DC892F466147D4_SET_LEADER_OFFSET UNITYSDK_OFFSET(0xD34D9B0)
#define CLASS_2_35DC892F466147D4_SET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0xD34D9D0)
#define CLASS_2_35DC892F466147D4_SET_MEMBERS_OFFSET UNITYSDK_OFFSET(0xD34D990)
#define CLASS_2_35DC892F466147D4_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xD34D9F0)
#define CLASS_2_35DC892F466147D4__CTOR_OFFSET UNITYSDK_OFFSET(0xD34DA20)
#define CLASS_2_35DC892F466147D4__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xD34CC30)
#define CLASS_2_35DC892F466147D4___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xD34DA30)

inline static constexpr unsigned int Class_2_35DC892F466147D4_TypeDefinitionIndex = 52477;

class Class_2_35DC892F466147D4 : public ::RPG::GameCore::GameComponentBase
{
public:
	::RPG::GameCore::GameEntity* _Leader_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _Members_k__BackingField; // 0x20
	::Class_1_9D83A4098E6EAC42* Field_2_12; // 0x28
	::System::String* _MemberName_k__BackingField; // 0x30
	::System::Boolean Field_2_9; // 0x38
	::System::Int32 Field_2_6; // 0x3C
	::System::Single Field_2_11; // 0x40
	::RPG::GameCore::CharacterGroupMemberType _Type_k__BackingField; // 0x44
	::System::Int32 Field_2_4; // 0x48
	::System::Boolean Field_2_7; // 0x4C
	::System::Boolean _IsWeakBinding_k__BackingField; // 0x4D
	::System::Boolean Field_2_5; // 0x4E
	::System::Boolean Field_2_8; // 0x4F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Method_2_CF9CA579E44CB0FF(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_METHOD_2_CF9CA579E44CB0FF_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_35DC892F466147D4* Method_2_AB8FA5409F7405E1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_35DC892F466147D4*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_METHOD_2_AB8FA5409F7405E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_854D7843673A16F6(::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>*))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_METHOD_2_854D7843673A16F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_36BA8CACA312B650(::System::Boolean a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_METHOD_2_36BA8CACA312B650_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_0FA0973E87FBD363(::Class_0_16E4307DCC419505_382* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_382*))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_METHOD_2_0FA0973E87FBD363_OFFSET))(this, a1);
	}

	::System::Void Method_2_466FDCDCBC13D73A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_METHOD_2_466FDCDCBC13D73A_OFFSET))(this, a1);
	}

	::System::Void Method_2_C796A0B42720FBD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_METHOD_2_C796A0B42720FBD3_OFFSET))(this);
	}

	::System::Void Method_2_140E92B6D36EDFFE(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_METHOD_2_140E92B6D36EDFFE_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_Members()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_GET_MEMBERS_OFFSET))(this);
	}

	::System::Void set_Members(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_SET_MEMBERS_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* get_Leader()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_GET_LEADER_OFFSET))(this);
	}

	::System::Void set_Leader(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_SET_LEADER_OFFSET))(this, value);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* get_MemberName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_GET_MEMBERNAME_OFFSET))(this);
	}

	::System::Void set_MemberName(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_SET_MEMBERNAME_OFFSET))(this, value);
	}

	::RPG::GameCore::CharacterGroupMemberType get_Type()
	{
		return ((::RPG::GameCore::CharacterGroupMemberType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::CharacterGroupMemberType value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterGroupMemberType))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_SET_TYPE_OFFSET))(this, value);
	}

	::System::Boolean get_IsWeakBinding()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_GET_ISWEAKBINDING_OFFSET))(this);
	}

	::System::Void set_IsWeakBinding(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4_SET_ISWEAKBINDING_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35DC892F466147D4___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}
};
