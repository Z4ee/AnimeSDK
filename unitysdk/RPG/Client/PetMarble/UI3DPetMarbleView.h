#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Pet { class IPetAppearance; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW_CREATE_OFFSET UNITYSDK_OFFSET(0xDAE16F0)
#define RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDAE23E0)
#define RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW_LOADMODEL_OFFSET UNITYSDK_OFFSET(0xDAE1760)
#define RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW_RELEASEMODEL_OFFSET UNITYSDK_OFFSET(0xDAE1DD0)
#define RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW_SETSWIMRINGACTIVE_OFFSET UNITYSDK_OFFSET(0xDAE2430)
#define RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE16E0)
#define RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW__GETPETMARBLEENTITY_OFFSET UNITYSDK_OFFSET(0xDAE1E30)
#define RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW__NEEDREFRESH_OFFSET UNITYSDK_OFFSET(0xDAE1B60)
#define RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW__ONMODELLOADED_OFFSET UNITYSDK_OFFSET(0xDAE1EF0)
#define RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW__RELEASEPETMARBLEENTITY_OFFSET UNITYSDK_OFFSET(0xDAE22B0)

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int UI3DPetMarbleView_TypeDefinitionIndex = 74736;

	class UI3DPetMarbleView : public ::System::Object
	{
	public:
		::System::String* _PrefabPath; // 0x10
		::RPG::GameCore::CharacterModelComponent* _ModelCmpt; // 0x18
		::RPG::GameCore::GameEntity* _PetMarbleEntity; // 0x20
		::RPG::Client::Pet::IPetAppearance* _Appearance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PetMarble::UI3DPetMarbleView* Create()
		{
			return ((::RPG::Client::PetMarble::UI3DPetMarbleView*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW_CREATE_OFFSET))();
		}

		::System::Void LoadModel(::UnityEngine::Transform* a1, ::System::String* a2, ::System::Boolean a3, ::RPG::Client::Pet::IPetAppearance* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*, ::System::Boolean, ::RPG::Client::Pet::IPetAppearance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW_LOADMODEL_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ReleaseModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW_RELEASEMODEL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW_DISPOSE_OFFSET))(this);
		}

		::System::Void SetSwimRingActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW_SETSWIMRINGACTIVE_OFFSET))(this, a1);
		}

		::System::Void _ReleasePetMarbleEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW__RELEASEPETMARBLEENTITY_OFFSET))(this);
		}

		::System::Void _OnModelLoaded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW__ONMODELLOADED_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* _GetPetMarbleEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW__GETPETMARBLEENTITY_OFFSET))(this);
		}

		::System::Boolean _NeedRefresh(::System::String* a1, ::RPG::Client::Pet::IPetAppearance* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::Pet::IPetAppearance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLE_UI3DPETMARBLEVIEW__NEEDREFRESH_OFFSET))(this, a1, a2);
		}
	};
}
