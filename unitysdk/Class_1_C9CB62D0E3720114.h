#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_9143926C2C91FB11.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C9CB62D0E3720114_GET_CHALLENGEGROUPNAME_OFFSET UNITYSDK_OFFSET(0x13C2B7D0)
#define CLASS_1_C9CB62D0E3720114_GET_COMEFROMGOTO_OFFSET UNITYSDK_OFFSET(0x13C2B770)
#define CLASS_1_C9CB62D0E3720114_GET_COMEFROMTEXT_OFFSET UNITYSDK_OFFSET(0x13C2B750)
#define CLASS_1_C9CB62D0E3720114_GET_DESC_OFFSET UNITYSDK_OFFSET(0x13C2B820)
#define CLASS_1_C9CB62D0E3720114_GET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x13C2B7B0)
#define CLASS_1_C9CB62D0E3720114_GET_ICONFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x13C2B730)
#define CLASS_1_C9CB62D0E3720114_GET_ICONMIDDLEPATH_OFFSET UNITYSDK_OFFSET(0x13C2B710)
#define CLASS_1_C9CB62D0E3720114_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x13C2B7F0)
#define CLASS_1_C9CB62D0E3720114_GET_ID_OFFSET UNITYSDK_OFFSET(0x13C2B6D0)
#define CLASS_1_C9CB62D0E3720114_GET_NAME_OFFSET UNITYSDK_OFFSET(0x13C2B6F0)
#define CLASS_1_C9CB62D0E3720114_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x13C2B790)
#define CLASS_1_C9CB62D0E3720114_METHOD_1_BC71F75F8E31144B_OFFSET UNITYSDK_OFFSET(0x13C2B680)
#define CLASS_1_C9CB62D0E3720114_SET_CHALLENGEGROUPNAME_OFFSET UNITYSDK_OFFSET(0x13C2B7E0)
#define CLASS_1_C9CB62D0E3720114_SET_COMEFROMGOTO_OFFSET UNITYSDK_OFFSET(0x13C2B780)
#define CLASS_1_C9CB62D0E3720114_SET_COMEFROMTEXT_OFFSET UNITYSDK_OFFSET(0x13C2B760)
#define CLASS_1_C9CB62D0E3720114_SET_DESC_OFFSET UNITYSDK_OFFSET(0x13C2B830)
#define CLASS_1_C9CB62D0E3720114_SET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x13C2B7C0)
#define CLASS_1_C9CB62D0E3720114_SET_ICONFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x13C2B740)
#define CLASS_1_C9CB62D0E3720114_SET_ICONMIDDLEPATH_OFFSET UNITYSDK_OFFSET(0x13C2B720)
#define CLASS_1_C9CB62D0E3720114_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x13C2B810)
#define CLASS_1_C9CB62D0E3720114_SET_ID_OFFSET UNITYSDK_OFFSET(0x13C2B6E0)
#define CLASS_1_C9CB62D0E3720114_SET_NAME_OFFSET UNITYSDK_OFFSET(0x13C2B700)
#define CLASS_1_C9CB62D0E3720114_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x13C2B7A0)
#define CLASS_1_C9CB62D0E3720114__CTOR_OFFSET UNITYSDK_OFFSET(0x13C2B440)

inline static constexpr unsigned int Class_1_C9CB62D0E3720114_TypeDefinitionIndex = 69847;

class Class_1_C9CB62D0E3720114 : public ::System::Object
{
public:
	::System::String* _PrefabPath_k__BackingField; // 0x10
	::System::String* _IconFigurePath_k__BackingField; // 0x18
	::System::String* _IconMiddlePath_k__BackingField; // 0x20
	::RPG::Client::TextID _Desc_k__BackingField; // 0x28
	::RPG::Client::TextID _ChallengeGroupName_k__BackingField; // 0x38
	::System::Int64 _ExpireTime_k__BackingField; // 0x48
	::System::UInt32 _ID_k__BackingField; // 0x50
	::System::UInt32 _ComeFromGoto_k__BackingField; // 0x54
	::Struct_2_9143926C2C91FB11 _Identifier_k__BackingField; // 0x58
	::RPG::Client::TextID _Name_k__BackingField; // 0x68
	::RPG::Client::TextID _ComeFromText_k__BackingField; // 0x78

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_BC71F75F8E31144B(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_METHOD_1_BC71F75F8E31144B_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_ID_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_NAME_OFFSET))(this, a1);
	}

	::System::String* get_IconMiddlePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_ICONMIDDLEPATH_OFFSET))(this);
	}

	::System::Void set_IconMiddlePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_ICONMIDDLEPATH_OFFSET))(this, a1);
	}

	::System::String* get_IconFigurePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_ICONFIGUREPATH_OFFSET))(this);
	}

	::System::Void set_IconFigurePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_ICONFIGUREPATH_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_ComeFromText()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_COMEFROMTEXT_OFFSET))(this);
	}

	::System::Void set_ComeFromText(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_COMEFROMTEXT_OFFSET))(this, a1);
	}

	::System::UInt32 get_ComeFromGoto()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_COMEFROMGOTO_OFFSET))(this);
	}

	::System::Void set_ComeFromGoto(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_COMEFROMGOTO_OFFSET))(this, a1);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Void set_PrefabPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_PREFABPATH_OFFSET))(this, a1);
	}

	::System::Int64 get_ExpireTime()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_EXPIRETIME_OFFSET))(this);
	}

	::System::Void set_ExpireTime(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_EXPIRETIME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_ChallengeGroupName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_CHALLENGEGROUPNAME_OFFSET))(this);
	}

	::System::Void set_ChallengeGroupName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_CHALLENGEGROUPNAME_OFFSET))(this, a1);
	}

	::Struct_2_9143926C2C91FB11 get_Identifier()
	{
		return ((::Struct_2_9143926C2C91FB11(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::Void set_Identifier(::Struct_2_9143926C2C91FB11 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_9143926C2C91FB11))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_IDENTIFIER_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_DESC_OFFSET))(this, a1);
	}
};
