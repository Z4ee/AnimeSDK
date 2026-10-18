#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_A03349FE0C87E33D;
namespace System { class String; }

#define CLASS_1_70ADFD6024364ADE_GET_CMT_OFFSET UNITYSDK_OFFSET(0xDFD3070)
#define CLASS_1_70ADFD6024364ADE_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0xDFD3050)
#define CLASS_1_70ADFD6024364ADE_GET_ID_OFFSET UNITYSDK_OFFSET(0xDFD3040)
#define CLASS_1_70ADFD6024364ADE_GET_ISPOSTER_OFFSET UNITYSDK_OFFSET(0xDFD3090)
#define CLASS_1_70ADFD6024364ADE_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDFD3060)
#define CLASS_1_70ADFD6024364ADE_GET_PARENT_OFFSET UNITYSDK_OFFSET(0xDFD3080)
#define CLASS_1_70ADFD6024364ADE__CTOR_OFFSET UNITYSDK_OFFSET(0xDFD30A0)

inline static constexpr unsigned int Class_1_70ADFD6024364ADE_TypeDefinitionIndex = 80141;

class Class_1_70ADFD6024364ADE : public ::System::Object
{
public:
	::System::String* _HeadIcon_k__BackingField; // 0x10
	::System::UInt32 _Parent_k__BackingField; // 0x18
	::RPG::Client::TextID _Name_k__BackingField; // 0x20
	::RPG::Client::TextID _Cmt_k__BackingField; // 0x30
	::System::Boolean _IsPoster_k__BackingField; // 0x40
	::System::UInt32 _ID_k__BackingField; // 0x44

	::System::Void _ctor(::Class_1_A03349FE0C87E33D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A03349FE0C87E33D*))((::PBYTE)hIl2Cpp + CLASS_1_70ADFD6024364ADE__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70ADFD6024364ADE_GET_ID_OFFSET))(this);
	}

	::System::String* get_HeadIcon()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70ADFD6024364ADE_GET_HEADICON_OFFSET))(this);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70ADFD6024364ADE_GET_NAME_OFFSET))(this);
	}

	::RPG::Client::TextID get_Cmt()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70ADFD6024364ADE_GET_CMT_OFFSET))(this);
	}

	::System::UInt32 get_Parent()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70ADFD6024364ADE_GET_PARENT_OFFSET))(this);
	}

	::System::Boolean get_IsPoster()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_70ADFD6024364ADE_GET_ISPOSTER_OFFSET))(this);
	}
};
