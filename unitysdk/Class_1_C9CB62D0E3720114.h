#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_B90130297D7470CE.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C9CB62D0E3720114_GET_CHALLENGEGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1281E210)
#define CLASS_1_C9CB62D0E3720114_GET_COMEFROMGOTO_OFFSET UNITYSDK_OFFSET(0x1281E1B0)
#define CLASS_1_C9CB62D0E3720114_GET_COMEFROMTEXT_OFFSET UNITYSDK_OFFSET(0x1281E190)
#define CLASS_1_C9CB62D0E3720114_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1281E270)
#define CLASS_1_C9CB62D0E3720114_GET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x1281E1F0)
#define CLASS_1_C9CB62D0E3720114_GET_ICONFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x1281E170)
#define CLASS_1_C9CB62D0E3720114_GET_ICONMIDDLEPATH_OFFSET UNITYSDK_OFFSET(0x1281E150)
#define CLASS_1_C9CB62D0E3720114_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1281E230)
#define CLASS_1_C9CB62D0E3720114_GET_ID_OFFSET UNITYSDK_OFFSET(0x1281E110)
#define CLASS_1_C9CB62D0E3720114_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1281E130)
#define CLASS_1_C9CB62D0E3720114_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1281E1D0)
#define CLASS_1_C9CB62D0E3720114_METHOD_1_BC71F75F8E31144B_OFFSET UNITYSDK_OFFSET(0x1281E0C0)
#define CLASS_1_C9CB62D0E3720114_SET_CHALLENGEGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1281E220)
#define CLASS_1_C9CB62D0E3720114_SET_COMEFROMGOTO_OFFSET UNITYSDK_OFFSET(0x1281E1C0)
#define CLASS_1_C9CB62D0E3720114_SET_COMEFROMTEXT_OFFSET UNITYSDK_OFFSET(0x1281E1A0)
#define CLASS_1_C9CB62D0E3720114_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1281E280)
#define CLASS_1_C9CB62D0E3720114_SET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x1281E200)
#define CLASS_1_C9CB62D0E3720114_SET_ICONFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x1281E180)
#define CLASS_1_C9CB62D0E3720114_SET_ICONMIDDLEPATH_OFFSET UNITYSDK_OFFSET(0x1281E160)
#define CLASS_1_C9CB62D0E3720114_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x1281E250)
#define CLASS_1_C9CB62D0E3720114_SET_ID_OFFSET UNITYSDK_OFFSET(0x1281E120)
#define CLASS_1_C9CB62D0E3720114_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1281E140)
#define CLASS_1_C9CB62D0E3720114_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1281E1E0)
#define CLASS_1_C9CB62D0E3720114__CTOR_OFFSET UNITYSDK_OFFSET(0x1281DE80)

inline static constexpr unsigned int Class_1_C9CB62D0E3720114_TypeDefinitionIndex = 69035;

class Class_1_C9CB62D0E3720114 : public ::System::Object
{
public:
	::System::String* _PrefabPath_k__BackingField; // 0x10
	::System::String* _IconMiddlePath_k__BackingField; // 0x18
	::System::String* _IconFigurePath_k__BackingField; // 0x20
	::RPG::Client::TextID _ChallengeGroupName_k__BackingField; // 0x28
	::RPG::Client::TextID _Desc_k__BackingField; // 0x38
	::RPG::Client::TextID _Name_k__BackingField; // 0x48
	::System::UInt32 _ID_k__BackingField; // 0x58
	::System::UInt32 _ComeFromGoto_k__BackingField; // 0x5C
	::System::Int64 _ExpireTime_k__BackingField; // 0x60
	::RPG::Client::TextID _ComeFromText_k__BackingField; // 0x68
	::Struct_2_B90130297D7470CE _Identifier_k__BackingField; // 0x78

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

	::System::Void set_ID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_ID_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_NAME_OFFSET))(this, value);
	}

	::System::String* get_IconMiddlePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_ICONMIDDLEPATH_OFFSET))(this);
	}

	::System::Void set_IconMiddlePath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_ICONMIDDLEPATH_OFFSET))(this, value);
	}

	::System::String* get_IconFigurePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_ICONFIGUREPATH_OFFSET))(this);
	}

	::System::Void set_IconFigurePath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_ICONFIGUREPATH_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_ComeFromText()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_COMEFROMTEXT_OFFSET))(this);
	}

	::System::Void set_ComeFromText(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_COMEFROMTEXT_OFFSET))(this, value);
	}

	::System::UInt32 get_ComeFromGoto()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_COMEFROMGOTO_OFFSET))(this);
	}

	::System::Void set_ComeFromGoto(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_COMEFROMGOTO_OFFSET))(this, value);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Void set_PrefabPath(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_PREFABPATH_OFFSET))(this, value);
	}

	::System::Int64 get_ExpireTime()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_EXPIRETIME_OFFSET))(this);
	}

	::System::Void set_ExpireTime(::System::Int64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_EXPIRETIME_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_ChallengeGroupName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_CHALLENGEGROUPNAME_OFFSET))(this);
	}

	::System::Void set_ChallengeGroupName(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_CHALLENGEGROUPNAME_OFFSET))(this, value);
	}

	::Struct_2_B90130297D7470CE get_Identifier()
	{
		return ((::Struct_2_B90130297D7470CE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::Void set_Identifier(::Struct_2_B90130297D7470CE value)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B90130297D7470CE))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_IDENTIFIER_OFFSET))(this, value);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_C9CB62D0E3720114_SET_DESC_OFFSET))(this, value);
	}
};
