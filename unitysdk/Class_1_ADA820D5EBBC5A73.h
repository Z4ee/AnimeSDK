#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1503;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_ADA820D5EBBC5A73_GET_CMTCONTENT_OFFSET UNITYSDK_OFFSET(0x1596A5C0)
#define CLASS_1_ADA820D5EBBC5A73_GET_CMTS_OFFSET UNITYSDK_OFFSET(0x1596A590)
#define CLASS_1_ADA820D5EBBC5A73_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0x1596A5A0)
#define CLASS_1_ADA820D5EBBC5A73_GET_ISPOSTER_OFFSET UNITYSDK_OFFSET(0x1596A5D0)
#define CLASS_1_ADA820D5EBBC5A73_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1596A5B0)
#define CLASS_1_ADA820D5EBBC5A73__CTOR_OFFSET UNITYSDK_OFFSET(0x1596A5E0)

inline static constexpr unsigned int Class_1_ADA820D5EBBC5A73_TypeDefinitionIndex = 79683;

class Class_1_ADA820D5EBBC5A73 : public ::System::Object
{
public:
	::System::String* _HeadIcon_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1503*>* _Cmts_k__BackingField; // 0x18
	::RPG::Client::TextID _CmtContent_k__BackingField; // 0x20
	::RPG::Client::TextID _Name_k__BackingField; // 0x30
	::System::Boolean _IsPoster_k__BackingField; // 0x40

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1503*>* a1, ::System::String* a2, ::RPG::Client::TextID a3, ::RPG::Client::TextID a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1503*>*, ::System::String*, ::RPG::Client::TextID, ::RPG::Client::TextID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_ADA820D5EBBC5A73__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1503*>* get_Cmts()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_1503*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADA820D5EBBC5A73_GET_CMTS_OFFSET))(this);
	}

	::System::String* get_HeadIcon()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADA820D5EBBC5A73_GET_HEADICON_OFFSET))(this);
	}

	::RPG::Client::TextID get_Name()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADA820D5EBBC5A73_GET_NAME_OFFSET))(this);
	}

	::RPG::Client::TextID get_CmtContent()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADA820D5EBBC5A73_GET_CMTCONTENT_OFFSET))(this);
	}

	::System::Boolean get_IsPoster()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ADA820D5EBBC5A73_GET_ISPOSTER_OFFSET))(this);
	}
};
