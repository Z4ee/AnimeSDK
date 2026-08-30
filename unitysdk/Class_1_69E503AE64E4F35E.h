#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_9143926C2C91FB11.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_69E503AE64E4F35E_GET_CHALLENGEGROUPNAME_OFFSET UNITYSDK_OFFSET(0x18A394C0)
#define CLASS_1_69E503AE64E4F35E_GET_COMEFROMGOTO_OFFSET UNITYSDK_OFFSET(0x18A39460)
#define CLASS_1_69E503AE64E4F35E_GET_COMEFROMTEXT_OFFSET UNITYSDK_OFFSET(0x18A39440)
#define CLASS_1_69E503AE64E4F35E_GET_DESC_OFFSET UNITYSDK_OFFSET(0x18A39510)
#define CLASS_1_69E503AE64E4F35E_GET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x18A394A0)
#define CLASS_1_69E503AE64E4F35E_GET_ICONFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x18A39420)
#define CLASS_1_69E503AE64E4F35E_GET_ICONMIDDLEPATH_OFFSET UNITYSDK_OFFSET(0x18A39400)
#define CLASS_1_69E503AE64E4F35E_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x18A394E0)
#define CLASS_1_69E503AE64E4F35E_GET_ID_OFFSET UNITYSDK_OFFSET(0x18A393C0)
#define CLASS_1_69E503AE64E4F35E_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18A393E0)
#define CLASS_1_69E503AE64E4F35E_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x18A39480)
#define CLASS_1_69E503AE64E4F35E_METHOD_1_BC71F75F8E31144B_OFFSET UNITYSDK_OFFSET(0x18A39370)
#define CLASS_1_69E503AE64E4F35E_SET_CHALLENGEGROUPNAME_OFFSET UNITYSDK_OFFSET(0x18A394D0)
#define CLASS_1_69E503AE64E4F35E_SET_COMEFROMGOTO_OFFSET UNITYSDK_OFFSET(0x18A39470)
#define CLASS_1_69E503AE64E4F35E_SET_COMEFROMTEXT_OFFSET UNITYSDK_OFFSET(0x18A39450)
#define CLASS_1_69E503AE64E4F35E_SET_DESC_OFFSET UNITYSDK_OFFSET(0x18A39520)
#define CLASS_1_69E503AE64E4F35E_SET_EXPIRETIME_OFFSET UNITYSDK_OFFSET(0x18A394B0)
#define CLASS_1_69E503AE64E4F35E_SET_ICONFIGUREPATH_OFFSET UNITYSDK_OFFSET(0x18A39430)
#define CLASS_1_69E503AE64E4F35E_SET_ICONMIDDLEPATH_OFFSET UNITYSDK_OFFSET(0x18A39410)
#define CLASS_1_69E503AE64E4F35E_SET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x18A39500)
#define CLASS_1_69E503AE64E4F35E_SET_ID_OFFSET UNITYSDK_OFFSET(0x18A393D0)
#define CLASS_1_69E503AE64E4F35E_SET_NAME_OFFSET UNITYSDK_OFFSET(0x18A393F0)
#define CLASS_1_69E503AE64E4F35E_SET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x18A39490)
#define CLASS_1_69E503AE64E4F35E__CTOR_OFFSET UNITYSDK_OFFSET(0x18A39080)

inline static constexpr unsigned int Class_1_69E503AE64E4F35E_TypeDefinitionIndex = 74676;

class Class_1_69E503AE64E4F35E : public ::System::Object
{
public:
	::System::String* _PrefabPath_k__BackingField; // 0x10
	::System::String* _IconFigurePath_k__BackingField; // 0x18
	::System::String* _IconMiddlePath_k__BackingField; // 0x20
	::Struct_2_9143926C2C91FB11 _Identifier_k__BackingField; // 0x28
	::RPG::Client::TextID _Desc_k__BackingField; // 0x38
	::System::UInt32 _ID_k__BackingField; // 0x48
	::System::UInt32 _ComeFromGoto_k__BackingField; // 0x4C
	::RPG::Client::TextID _Name_k__BackingField; // 0x50
	::RPG::Client::TextID _ComeFromText_k__BackingField; // 0x60
	::RPG::Client::TextID _ChallengeGroupName_k__BackingField; // 0x70
	::System::Int64 _ExpireTime_k__BackingField; // 0x80

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
