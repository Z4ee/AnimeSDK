#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnvLocalVolume.h"

class Class_0_16E4307DCC419505_299;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVLOCALVOLUMEV2_GETENVIROMENTPROFILESLIST_OFFSET UNITYSDK_OFFSET(0xF2F88A0)
#define ENVLOCALVOLUMEV2_GETENVIROMENTPROFILE_OFFSET UNITYSDK_OFFSET(0xF2F8760)
#define ENVLOCALVOLUMEV2__CTOR_OFFSET UNITYSDK_OFFSET(0xF2F8B30)
#define ENVLOCALVOLUMEV2___IFIXBASEPROXY_GETENVIROMENTPROFILESLIST_OFFSET UNITYSDK_OFFSET(0xF2F8C50)
#define ENVLOCALVOLUMEV2___IFIXBASEPROXY_GETENVIROMENTPROFILE_OFFSET UNITYSDK_OFFSET(0xF2F8C10)

inline static constexpr unsigned int EnvLocalVolumeV2_TypeDefinitionIndex = 44090;

class EnvLocalVolumeV2 : public ::EnvLocalVolume
{
public:
	::System::String* prof; // 0x78
	::System::Collections::Generic::List_1<::System::String*>* profiles; // 0x80
	::Class_0_16E4307DCC419505_299* Field_7_2; // 0x88
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_299*>* Field_7_3; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUMEV2__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_299* GetEnviromentProfile()
	{
		return ((::Class_0_16E4307DCC419505_299*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUMEV2_GETENVIROMENTPROFILE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_299*>* GetEnviromentProfilesList()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_299*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUMEV2_GETENVIROMENTPROFILESLIST_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_299* __iFixBaseProxy_GetEnviromentProfile()
	{
		return ((::Class_0_16E4307DCC419505_299*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUMEV2___IFIXBASEPROXY_GETENVIROMENTPROFILE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_299*>* __iFixBaseProxy_GetEnviromentProfilesList()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_299*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUMEV2___IFIXBASEPROXY_GETENVIROMENTPROFILESLIST_OFFSET))(this);
	}
};
