#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GeometryEdit/Prism.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_293;
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class EnvironmentSystem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVLOCALVOLUME_GETENVIROMENTPROFILESLIST_OFFSET UNITYSDK_OFFSET(0xFB840E0)
#define ENVLOCALVOLUME_GETENVIROMENTPROFILE_OFFSET UNITYSDK_OFFSET(0xFB840A0)
#define ENVLOCALVOLUME_GETINSIDE_OFFSET UNITYSDK_OFFSET(0xFB84470)
#define ENVLOCALVOLUME_METHOD_6_193E00E83BC3E6E8_OFFSET UNITYSDK_OFFSET(0xFB84220)
#define ENVLOCALVOLUME_METHOD_6_3FEC31896EE03459_OFFSET UNITYSDK_OFFSET(0xFB842A0)
#define ENVLOCALVOLUME_METHOD_6_7131FDE42F1B27F4_OFFSET UNITYSDK_OFFSET(0xFB843E0)
#define ENVLOCALVOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xFB841D0)
#define ENVLOCALVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0xFB84180)
#define ENVLOCALVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0xFB84830)

inline static constexpr unsigned int EnvLocalVolume_TypeDefinitionIndex = 38203;

class EnvLocalVolume : public ::GeometryEdit::Prism
{
public:
	::System::Boolean UseProfileList; // 0x40
	::EnviromentSystem::EnviromentProfile* TargetProfile; // 0x48
	::System::Collections::Generic::List_1<::EnviromentSystem::EnviromentProfile*>* TargetProfileList; // 0x50
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_293*>* Field_6_3; // 0x58
	::System::Int32 Priority; // 0x60
	::System::Single Duration; // 0x64
	::RPG::Client::EnvironmentSystem* Field_6_6; // 0x68
	::System::Boolean IsDynamicArea; // 0x70
	::RPG::CustomRP::CustomLightQualityFilter LightQualityFilter; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUME__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_293* GetEnviromentProfile()
	{
		return ((::Class_0_16E4307DCC419505_293*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUME_GETENVIROMENTPROFILE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_293*>* GetEnviromentProfilesList()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_293*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUME_GETENVIROMENTPROFILESLIST_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUME_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVLOCALVOLUME_ONDISABLE_OFFSET))(this);
	}

	::System::Boolean Method_6_193E00E83BC3E6E8(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVLOCALVOLUME_METHOD_6_193E00E83BC3E6E8_OFFSET))(this, a1);
	}

	::System::Int32 Method_6_3FEC31896EE03459(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ENVLOCALVOLUME_METHOD_6_3FEC31896EE03459_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Int32 Method_6_7131FDE42F1B27F4(::System::Single a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ENVLOCALVOLUME_METHOD_6_7131FDE42F1B27F4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean GetInside(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ENVLOCALVOLUME_GETINSIDE_OFFSET))(this, a1);
	}
};
