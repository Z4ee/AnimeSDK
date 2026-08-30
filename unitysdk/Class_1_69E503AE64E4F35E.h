#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_9143926C2C91FB11.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_69E503AE64E4F35E_GET_CHALLENGEGROUPNAME_OFFSET UNITYSDK_OFFSET(0x15CC1AA0)
#define CLASS_1_69E503AE64E4F35E_GET_COMEFROMGOTO_OFFSET UNITYSDK_OFFSET(0x15CC1A40)
#define CLASS_1_69E503AE64E4F35E_GET_COMEFROMTEXT_OFFSET UNITYSDK_OFFSET(0x15CC1A20)
#define CLASS_1_69E503AE64E4F35E_GET_DESC_OFFSET UNITYSDK_OFFSET(0x15CC1AF0)
#define CLASS_1_69E503AE64E4F35E_GET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x15CC1A80)
#define CLASS_1_69E503AE64E4F35E_GET_ICONFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x15CC1A00)
#define CLASS_1_69E503AE64E4F35E_GET_ICONMIDDLEPATH_OFFSET UNITYSDK_OFFSET(0x15CC19E0)
#define CLASS_1_69E503AE64E4F35E_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x15CC1AC0)
#define CLASS_1_69E503AE64E4F35E_GET_ID_OFFSET UNITYSDK_OFFSET(0x15CC19A0)
#define CLASS_1_69E503AE64E4F35E_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15CC19C0)
#define CLASS_1_69E503AE64E4F35E_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x15CC1A60)
#define CLASS_1_69E503AE64E4F35E_METHOD_1_BC71F75F8E31144B_OFFSET UNITYSDK_OFFSET(0x15CC1950)
#define CLASS_1_69E503AE64E4F35E_SET_CHALLENGEGROUPNAME_OFFSET UNITYSDK_OFFSET(0x15CC1AB0)
#define CLASS_1_69E503AE64E4F35E_SET_COMEFROMGOTO_OFFSET UNITYSDK_OFFSET(0x15CC1A50)
#define CLASS_1_69E503AE64E4F35E_SET_COMEFROMTEXT_OFFSET UNITYSDK_OFFSET(0x15CC1A30)
#define CLASS_1_69E503AE64E4F35E_SET_DESC_OFFSET UNITYSDK_OFFSET(0x15CC1B00)
#define CLASS_1_69E503AE64E4F35E_SET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x15CC1A90)
#define CLASS_1_69E503AE64E4F35E_SET_ICONFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x15CC1A10)
#define CLASS_1_69E503AE64E4F35E_SET_ICONMIDDLEPATH_OFFSET UNITYSDK_OFFSET(0x15CC19F0)
#define CLASS_1_69E503AE64E4F35E_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x15CC1AE0)
#define CLASS_1_69E503AE64E4F35E_SET_ID_OFFSET UNITYSDK_OFFSET(0x15CC19B0)
#define CLASS_1_69E503AE64E4F35E_SET_NAME_OFFSET UNITYSDK_OFFSET(0x15CC19D0)
#define CLASS_1_69E503AE64E4F35E_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x15CC1A70)
#define CLASS_1_69E503AE64E4F35E__CTOR_OFFSET UNITYSDK_OFFSET(0x15CC1660)

inline static constexpr unsigned int Class_1_69E503AE64E4F35E_TypeDefinitionIndex = 74677;

class Class_1_69E503AE64E4F35E : public ::System::Object
{
public:
	::System::String* _PrefabPath_k__BackingField; // 0x10
	::System::String* _IconFigurePath_k__BackingField; // 0x18
	::System::String* _IconMiddlePath_k__BackingField; // 0x20
	::System::UInt32 _ComeFromGoto_k__BackingField; // 0x28
	::Struct_2_9143926C2C91FB11 _Identifier_k__BackingField; // 0x2C
	::System::UInt32 _ID_k__BackingField; // 0x38
	::RPG::Client::TextID _Desc_k__BackingField; // 0x40
	::RPG::Client::TextID _ChallengeGroupName_k__BackingField; // 0x50
	::RPG::Client::TextID _Name_k__BackingField; // 0x60
	::System::Int64 _ExpireTime_k__BackingField; // 0x70
	::RPG::Client::TextID _ComeFromText_k__BackingField; // 0x78

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_BC71F75F8E31144B(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_METHOD_1_BC71F75F8E31144B_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_SET_ID_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_GET_NAME_OFFSET))(this);
	}

	::System::Void set_Name(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_SET_NAME_OFFSET))(this, a1);
	}

	::System::String* get_IconMiddlePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_GET_ICONMIDDLEPATH_OFFSET))(this);
	}

	::System::Void set_IconMiddlePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_SET_ICONMIDDLEPATH_OFFSET))(this, a1);
	}

	::System::String* get_IconFigurePath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_GET_ICONFIGUREPATH_OFFSET))(this);
	}

	::System::Void set_IconFigurePath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_SET_ICONFIGUREPATH_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_ComeFromText()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_GET_COMEFROMTEXT_OFFSET))(this);
	}

	::System::Void set_ComeFromText(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_SET_COMEFROMTEXT_OFFSET))(this, a1);
	}

	::System::UInt32 get_ComeFromGoto()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_GET_COMEFROMGOTO_OFFSET))(this);
	}

	::System::Void set_ComeFromGoto(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_SET_COMEFROMGOTO_OFFSET))(this, a1);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_GET_PREFABPATH_OFFSET))(this);
	}

	::System::Void set_PrefabPath(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_SET_PREFABPATH_OFFSET))(this, a1);
	}

	::System::Int64 get_ExpireTime()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_GET_EXPIRETIME_OFFSET))(this);
	}

	::System::Void set_ExpireTime(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_SET_EXPIRETIME_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_ChallengeGroupName()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_GET_CHALLENGEGROUPNAME_OFFSET))(this);
	}

	::System::Void set_ChallengeGroupName(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_SET_CHALLENGEGROUPNAME_OFFSET))(this, a1);
	}

	::Struct_2_9143926C2C91FB11 get_Identifier()
	{
		return ((::Struct_2_9143926C2C91FB11(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_GET_IDENTIFIER_OFFSET))(this);
	}

	::System::Void set_Identifier(::Struct_2_9143926C2C91FB11 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_9143926C2C91FB11))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_SET_IDENTIFIER_OFFSET))(this, a1);
	}

	::RPG::Client::TextID get_Desc()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::RPG::Client::TextID a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + CLASS_1_69E503AE64E4F35E_SET_DESC_OFFSET))(this, a1);
	}
};
