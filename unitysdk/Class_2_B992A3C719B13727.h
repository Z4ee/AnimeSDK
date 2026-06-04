#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterGroupMemberType.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/Struct_2_0347AE3FB0036865.h"

class Class_0_16E4307DCC419505_401;
class Class_1_B62177FFC32A3674;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B992A3C719B13727_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC1C780)
#define CLASS_2_B992A3C719B13727_GET_ISWEAKBINDING_OFFSET UNITYSDK_OFFSET(0xAC1D180)
#define CLASS_2_B992A3C719B13727_GET_LEADER_OFFSET UNITYSDK_OFFSET(0xAC1D120)
#define CLASS_2_B992A3C719B13727_GET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0xAC1D140)
#define CLASS_2_B992A3C719B13727_GET_MEMBERS_OFFSET UNITYSDK_OFFSET(0xAC1D100)
#define CLASS_2_B992A3C719B13727_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xAC1D160)
#define CLASS_2_B992A3C719B13727_METHOD_2_23AE00082AC7BEB9_OFFSET UNITYSDK_OFFSET(0xAC1C220)
#define CLASS_2_B992A3C719B13727_METHOD_2_36BA8CACA312B650_OFFSET UNITYSDK_OFFSET(0xAC1C6A0)
#define CLASS_2_B992A3C719B13727_METHOD_2_41B9EB50390851CB_OFFSET UNITYSDK_OFFSET(0xAC1C610)
#define CLASS_2_B992A3C719B13727_METHOD_2_5FBA6E8BC4616793_OFFSET UNITYSDK_OFFSET(0xAC1CCD0)
#define CLASS_2_B992A3C719B13727_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xAC1C720)
#define CLASS_2_B992A3C719B13727_METHOD_2_AB8FA5409F7405E1_OFFSET UNITYSDK_OFFSET(0xAC1C560)
#define CLASS_2_B992A3C719B13727_METHOD_2_CCF7A015FEFCDABD_OFFSET UNITYSDK_OFFSET(0xAC1CD80)
#define CLASS_2_B992A3C719B13727_METHOD_2_CEF6745434255CF1_OFFSET UNITYSDK_OFFSET(0xAC1CF60)
#define CLASS_2_B992A3C719B13727_METHOD_2_EF7FF4D68C8A0DF5_OFFSET UNITYSDK_OFFSET(0xAC1CA40)
#define CLASS_2_B992A3C719B13727_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAC1C550)
#define CLASS_2_B992A3C719B13727_SET_ISWEAKBINDING_OFFSET UNITYSDK_OFFSET(0xAC1D190)
#define CLASS_2_B992A3C719B13727_SET_LEADER_OFFSET UNITYSDK_OFFSET(0xAC1D130)
#define CLASS_2_B992A3C719B13727_SET_MEMBERNAME_OFFSET UNITYSDK_OFFSET(0xAC1D150)
#define CLASS_2_B992A3C719B13727_SET_MEMBERS_OFFSET UNITYSDK_OFFSET(0xAC1D110)
#define CLASS_2_B992A3C719B13727_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xAC1D170)
#define CLASS_2_B992A3C719B13727__CTOR_OFFSET UNITYSDK_OFFSET(0xAC1D1A0)
#define CLASS_2_B992A3C719B13727__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xAC1C1D0)
#define CLASS_2_B992A3C719B13727___IFIXBASEPROXY__ONINITOWNERREF_OFFSET UNITYSDK_OFFSET(0xAC1D1B0)

inline static constexpr unsigned int Class_2_B992A3C719B13727_TypeDefinitionIndex = 53177;

class Class_2_B992A3C719B13727 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::String* _MemberName_k__BackingField; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* _Members_k__BackingField; // 0x20
	::RPG::GameCore::GameEntity* _Leader_k__BackingField; // 0x28
	::Class_1_B62177FFC32A3674* Field_2_3; // 0x30
	::System::Boolean Field_2_4; // 0x38
	::System::Boolean Field_2_5; // 0x39
	::System::Boolean Field_2_6; // 0x3A
	::System::Single Field_2_7; // 0x3C
	::RPG::GameCore::CharacterGroupMemberType _Type_k__BackingField; // 0x40
	::System::Int32 Field_2_9; // 0x44
	::System::Int32 Field_2_10; // 0x48
	::System::Boolean Field_2_11; // 0x4C
	::System::Boolean _IsWeakBinding_k__BackingField; // 0x4D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727__CTOR_OFFSET))(this);
	}

	::System::Void _OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727__ONINITOWNERREF_OFFSET))(this);
	}

	::System::Void Method_2_23AE00082AC7BEB9(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_METHOD_2_23AE00082AC7BEB9_OFFSET))(this, a1, a2, a3);
	}

	::Class_2_B992A3C719B13727* Method_2_AB8FA5409F7405E1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_2_B992A3C719B13727*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_METHOD_2_AB8FA5409F7405E1_OFFSET))(this, a1);
	}

	::System::Void Method_2_41B9EB50390851CB(::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_0347AE3FB0036865>*))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_METHOD_2_41B9EB50390851CB_OFFSET))(this, a1);
	}

	::System::Void Method_2_36BA8CACA312B650(::System::Boolean a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_METHOD_2_36BA8CACA312B650_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_EF7FF4D68C8A0DF5(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_METHOD_2_EF7FF4D68C8A0DF5_OFFSET))(this, a1);
	}

	::System::Void Method_2_5FBA6E8BC4616793(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_METHOD_2_5FBA6E8BC4616793_OFFSET))(this, a1);
	}

	::System::Void Method_2_CCF7A015FEFCDABD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_METHOD_2_CCF7A015FEFCDABD_OFFSET))(this);
	}

	::System::Void Method_2_CEF6745434255CF1(::RPG::MVector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_METHOD_2_CEF6745434255CF1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* get_Members()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_GET_MEMBERS_OFFSET))(this);
	}

	::System::Void set_Members(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_SET_MEMBERS_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* get_Leader()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_GET_LEADER_OFFSET))(this);
	}

	::System::Void set_Leader(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_SET_LEADER_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* get_MemberName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_GET_MEMBERNAME_OFFSET))(this);
	}

	::System::Void set_MemberName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_SET_MEMBERNAME_OFFSET))(this, a1);
	}

	::RPG::GameCore::CharacterGroupMemberType get_Type()
	{
		return ((::RPG::GameCore::CharacterGroupMemberType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_GET_TYPE_OFFSET))(this);
	}

	::System::Void set_Type(::RPG::GameCore::CharacterGroupMemberType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterGroupMemberType))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_SET_TYPE_OFFSET))(this, a1);
	}

	::System::Boolean get_IsWeakBinding()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_GET_ISWEAKBINDING_OFFSET))(this);
	}

	::System::Void set_IsWeakBinding(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727_SET_ISWEAKBINDING_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnInitOwnerRef()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B992A3C719B13727___IFIXBASEPROXY__ONINITOWNERREF_OFFSET))(this);
	}
};
