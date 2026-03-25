#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnvLocalVolume.h"

class Class_0_16E4307DCC419505_293;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVLOCALVOLUMEV2_GETENVIROMENTPROFILESLIST_OFFSET UNITYSDK_OFFSET(0xFB849D0)
#define ENVLOCALVOLUMEV2_GETENVIROMENTPROFILE_OFFSET UNITYSDK_OFFSET(0xFB84890)
#define ENVLOCALVOLUMEV2__CTOR_OFFSET UNITYSDK_OFFSET(0xFB84C60)
#define ENVLOCALVOLUMEV2___IFIXBASEPROXY_GETENVIROMENTPROFILESLIST_OFFSET UNITYSDK_OFFSET(0xFB84D80)
#define ENVLOCALVOLUMEV2___IFIXBASEPROXY_GETENVIROMENTPROFILE_OFFSET UNITYSDK_OFFSET(0xFB84D40)

inline static constexpr unsigned int EnvLocalVolumeV2_TypeDefinitionIndex = 38206;

class EnvLocalVolumeV2 : public ::EnvLocalVolume
{
public:
	::System::String* prof; // 0x78
	::System::Collections::Generic::List_1<::System::String*>* profiles; // 0x80
	::Class_0_16E4307DCC419505_293* Field_7_2; // 0x88
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_293*>* Field_7_3; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUMEV2__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_293* GetEnviromentProfile()
	{
		return ((::Class_0_16E4307DCC419505_293*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUMEV2_GETENVIROMENTPROFILE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_293*>* GetEnviromentProfilesList()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_293*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUMEV2_GETENVIROMENTPROFILESLIST_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_293* __iFixBaseProxy_GetEnviromentProfile()
	{
		return ((::Class_0_16E4307DCC419505_293*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUMEV2___IFIXBASEPROXY_GETENVIROMENTPROFILE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_293*>* __iFixBaseProxy_GetEnviromentProfilesList()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_293*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUMEV2___IFIXBASEPROXY_GETENVIROMENTPROFILESLIST_OFFSET))(this);
	}
};
