#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StretchMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/RPG/Client/TextureInfo.h"
#include "unitysdk/RPG/Client/UVMode.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class FixStretchUVBehavior; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_FIXSTRETCHUV_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA3BD490)
#define RPG_CLIENT_FIXSTRETCHUV__CTOR_OFFSET UNITYSDK_OFFSET(0xA3BD4E0)
#define RPG_CLIENT_FIXSTRETCHUV___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xA3BD5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int FixStretchUV_TypeDefinitionIndex = 65089;

	class FixStretchUV : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::FixStretchUVBehavior*>
	{
	public:
		::RPG::Client::StretchMode CurrentStrecthMode; // 0x30
		::RPG::Client::UVMode CurrentUVMode; // 0x34
		::System::Boolean IsUseWorldScale; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::TextureInfo>* initialTiling; // 0x40
		::UnityEngine::Vector3 initialScale; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::TextureInfo>* textureTiling; // 0x58
		::System::Boolean isChangeable; // 0x60
		::System::Single HiddenThreshold; // 0x64
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* NeedHiddenGO; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUV__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUV_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHUV___IFIXBASEPROXY_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
