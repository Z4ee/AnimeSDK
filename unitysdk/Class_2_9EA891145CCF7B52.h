#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AbsDownloadData_1.h"
#include "unitysdk/RPG/Client/ByteHash16.h"

class Class_1_0D2F9EE261815B73;
class Class_1_1DFA6DC6E14150AA;
class Class_1_945ACFB1FEBC7A2C_25;
namespace System { class String; }

#define CLASS_2_9EA891145CCF7B52_GETSERVERBLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBA71960)
#define CLASS_2_9EA891145CCF7B52_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0xBA71620)
#define CLASS_2_9EA891145CCF7B52_GET_BLOCKMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBA71730)
#define CLASS_2_9EA891145CCF7B52_GET_BLOCKVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xBA716F0)
#define CLASS_2_9EA891145CCF7B52_GET_BUNDLEMANIFESTNAME_OFFSET UNITYSDK_OFFSET(0xBA716E0)
#define CLASS_2_9EA891145CCF7B52_GET_BUNDLEVERSIONNAME_OFFSET UNITYSDK_OFFSET(0xBA716D0)
#define CLASS_2_9EA891145CCF7B52_GET_DEFAULTABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0xBA71670)
#define CLASS_2_9EA891145CCF7B52_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xBA71770)
#define CLASS_2_9EA891145CCF7B52_GET_RELATIVEPATH_OFFSET UNITYSDK_OFFSET(0xBA716A0)
#define CLASS_2_9EA891145CCF7B52_ONALLSUCCEED_OFFSET UNITYSDK_OFFSET(0xBA71AA0)
#define CLASS_2_9EA891145CCF7B52_SET_ISENABLE_OFFSET UNITYSDK_OFFSET(0xBA71780)
#define CLASS_2_9EA891145CCF7B52__CTOR_OFFSET UNITYSDK_OFFSET(0xBA71790)
#define CLASS_2_9EA891145CCF7B52__LOADINDEXINFO_OFFSET UNITYSDK_OFFSET(0xBA71910)

inline static constexpr unsigned int Class_2_9EA891145CCF7B52_TypeDefinitionIndex = 59612;

class Class_2_9EA891145CCF7B52 : public ::RPG::Client::AbsDownloadData_1<::Class_1_0D2F9EE261815B73*>
{
public:
	::System::Boolean _IsEnable_k__BackingField; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EA891145CCF7B52__CTOR_OFFSET))(this);
	}

	::System::String* GetTypeName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EA891145CCF7B52_GETTYPENAME_OFFSET))(this);
	}

	::Class_1_1DFA6DC6E14150AA* get_DefaultAbsolutePath()
	{
		return ((::Class_1_1DFA6DC6E14150AA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EA891145CCF7B52_GET_DEFAULTABSOLUTEPATH_OFFSET))(this);
	}

	::Class_1_945ACFB1FEBC7A2C_25* get_RelativePath()
	{
		return ((::Class_1_945ACFB1FEBC7A2C_25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EA891145CCF7B52_GET_RELATIVEPATH_OFFSET))(this);
	}

	::System::String* get_BundleVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EA891145CCF7B52_GET_BUNDLEVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BundleManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EA891145CCF7B52_GET_BUNDLEMANIFESTNAME_OFFSET))(this);
	}

	::System::String* get_BlockVersionName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EA891145CCF7B52_GET_BLOCKVERSIONNAME_OFFSET))(this);
	}

	::System::String* get_BlockManifestName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EA891145CCF7B52_GET_BLOCKMANIFESTNAME_OFFSET))(this);
	}

	::System::Boolean get_IsEnable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EA891145CCF7B52_GET_ISENABLE_OFFSET))(this);
	}

	::System::Void set_IsEnable(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_9EA891145CCF7B52_SET_ISENABLE_OFFSET))(this, a1);
	}

	::Class_1_0D2F9EE261815B73* _LoadIndexInfo(::System::String* a1)
	{
		return ((::Class_1_0D2F9EE261815B73*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_9EA891145CCF7B52__LOADINDEXINFO_OFFSET))(this, a1);
	}

	::System::Boolean GetServerBlockManifestName(::System::String*& a1, ::RPG::Client::ByteHash16& a2, ::System::Int64& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*&, ::RPG::Client::ByteHash16&, ::System::Int64&))((::PBYTE)hIl2Cpp + CLASS_2_9EA891145CCF7B52_GETSERVERBLOCKMANIFESTNAME_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnAllSucceed()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9EA891145CCF7B52_ONALLSUCCEED_OFFSET))(this);
	}
};
