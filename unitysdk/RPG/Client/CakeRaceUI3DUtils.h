#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E05E7A6D9DE9138B;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CAKERACEUI3DUTILS_CHANGECATMATERIAL_OFFSET UNITYSDK_OFFSET(0xB4AF110)
#define RPG_CLIENT_CAKERACEUI3DUTILS_CREATE_OFFSET UNITYSDK_OFFSET(0xB4A7A60)
#define RPG_CLIENT_CAKERACEUI3DUTILS_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB4A8010)
#define RPG_CLIENT_CAKERACEUI3DUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0xB4AF0E0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceUI3DUtils_TypeDefinitionIndex = 58962;

	class CakeRaceUI3DUtils : public ::System::Object
	{
	public:
		::Class_1_E05E7A6D9DE9138B* _AssetLoader; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUI3DUTILS__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceUI3DUtils* Create()
		{
			return ((::RPG::Client::CakeRaceUI3DUtils*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUI3DUTILS_CREATE_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUI3DUTILS_DISPOSE_OFFSET))(this);
		}

		::System::Void ChangeCatMaterial(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUI3DUTILS_CHANGECATMATERIAL_OFFSET))(this, a1, a2);
		}
	};
}
