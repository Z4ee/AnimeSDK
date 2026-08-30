#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnvLocalVolume.h"

class Class_0_16E4307DCC419505_357;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVLOCALVOLUMEV2_GETENVIROMENTPROFILESLIST_OFFSET UNITYSDK_OFFSET(0x152F6310)
#define ENVLOCALVOLUMEV2_GETENVIROMENTPROFILE_OFFSET UNITYSDK_OFFSET(0x152F61D0)
#define ENVLOCALVOLUMEV2__CTOR_OFFSET UNITYSDK_OFFSET(0x152F6610)

inline static constexpr unsigned int EnvLocalVolumeV2_TypeDefinitionIndex = 47759;

class EnvLocalVolumeV2 : public ::EnvLocalVolume
{
public:
	::System::String* prof; // 0x78
	::System::Collections::Generic::List_1<::System::String*>* profiles; // 0x80
	::Class_0_16E4307DCC419505_357* KGIMFPHDGMJ; // 0x88
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_357*>* ANANEMEGPMD; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUMEV2__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_357* GetEnviromentProfile()
	{
		return ((::Class_0_16E4307DCC419505_357*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUMEV2_GETENVIROMENTPROFILE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_357*>* GetEnviromentProfilesList()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_357*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUMEV2_GETENVIROMENTPROFILESLIST_OFFSET))(this);
	}
};
