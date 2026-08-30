#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicTypeExtra.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_CB986F8DD1655D73_GET_ANIMATORSTATEHASH_OFFSET UNITYSDK_OFFSET(0x177DEBD0)
#define CLASS_1_CB986F8DD1655D73_GET_ISFIXEDTRANSITION_OFFSET UNITYSDK_OFFSET(0x177DEBB0)
#define CLASS_1_CB986F8DD1655D73_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x177DE960)
#define CLASS_1_CB986F8DD1655D73_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x177DEA00)
#define CLASS_1_CB986F8DD1655D73_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x177DEB50)
#define CLASS_1_CB986F8DD1655D73_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x177DEAE0)
#define CLASS_1_CB986F8DD1655D73_METHOD_1_5323F2DF46A044DA_1_OFFSET UNITYSDK_OFFSET(0x177DEB40)
#define CLASS_1_CB986F8DD1655D73_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x177DEAD0)
#define CLASS_1_CB986F8DD1655D73_METHOD_1_941C404C800CB723_OFFSET UNITYSDK_OFFSET(0x177DEA10)
#define CLASS_1_CB986F8DD1655D73_SET_ANIMATORSTATEHASH_OFFSET UNITYSDK_OFFSET(0x177DEBE0)
#define CLASS_1_CB986F8DD1655D73_SET_ISFIXEDTRANSITION_OFFSET UNITYSDK_OFFSET(0x177DEBC0)
#define CLASS_1_CB986F8DD1655D73__CTOR_OFFSET UNITYSDK_OFFSET(0x177DEBF0)

inline static constexpr unsigned int Class_1_CB986F8DD1655D73_TypeDefinitionIndex = 56128;

class Class_1_CB986F8DD1655D73 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::AnimStateLogicTypeExtra>* MCJBGFCJFDF; // 0x10
	::System::String* BLKCDLBENFP; // 0x18
	::RPG::GameCore::AnimStateLogicType HEOJLHCIINP; // 0x20
	::System::Single ADPMMNEFDPA; // 0x24
	::System::Single FMHMAHCNDGB; // 0x28
	::System::Single EJOAJDOPCHE; // 0x2C
	::System::Boolean _IsFixedTransition_k__BackingField; // 0x30
	::System::Boolean DJPDHADCKLO; // 0x31
	::System::Single NNNAGHMNFKB; // 0x34
	::RPG::GameCore::AnimStateLogicTypeExtra HBOPCMCGHAA; // 0x38
	::System::UInt32 AECGNOEOCFC; // 0x3C
	::System::Int32 _AnimatorStateHash_k__BackingField; // 0x40
	::System::Int32 BIKLAFLEIOC; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_CB986F8DD1655D73* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CB986F8DD1655D73*))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_1_941C404C800CB723(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_METHOD_1_941C404C800CB723_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Single Method_1_5323F2DF46A044DA_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_METHOD_1_5323F2DF46A044DA_1_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
	}

	::System::Boolean get_IsFixedTransition()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_GET_ISFIXEDTRANSITION_OFFSET))(this);
	}

	::System::Void set_IsFixedTransition(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_SET_ISFIXEDTRANSITION_OFFSET))(this, a1);
	}

	::System::Int32 get_AnimatorStateHash()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_GET_ANIMATORSTATEHASH_OFFSET))(this);
	}

	::System::Void set_AnimatorStateHash(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_CB986F8DD1655D73_SET_ANIMATORSTATEHASH_OFFSET))(this, a1);
	}
};
