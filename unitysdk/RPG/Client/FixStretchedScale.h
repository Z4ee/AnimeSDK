#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class FixStretchedScaleBehavior; }
namespace System { class String; }

#define RPG_CLIENT_FIXSTRETCHEDSCALE_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0x18437E00)
#define RPG_CLIENT_FIXSTRETCHEDSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x18437E50)

namespace RPG::Client
{
	inline static constexpr unsigned int FixStretchedScale_TypeDefinitionIndex = 67442;

	class FixStretchedScale : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::FixStretchedScaleBehavior*>
	{
	public:
		::UnityEngine::Vector3 ParentInitialLocalScale; // 0x30
		::UnityEngine::Vector3 thisInitialLocalPos; // 0x3C
		::UnityEngine::Vector3 thisInitialLocalScale; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHEDSCALE__CTOR_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIXSTRETCHEDSCALE_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
