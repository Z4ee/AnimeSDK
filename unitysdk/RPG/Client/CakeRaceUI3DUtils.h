#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E05E7A6D9DE9138B;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CAKERACEUI3DUTILS_CHANGECATMATERIAL_OFFSET UNITYSDK_OFFSET(0x924F530)
#define RPG_CLIENT_CAKERACEUI3DUTILS_CREATE_OFFSET UNITYSDK_OFFSET(0x9247FF0)
#define RPG_CLIENT_CAKERACEUI3DUTILS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9248980)
#define RPG_CLIENT_CAKERACEUI3DUTILS__CTOR_OFFSET UNITYSDK_OFFSET(0x924F500)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceUI3DUtils_TypeDefinitionIndex = 51126;

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

		::System::Void ChangeCatMaterial(::UnityEngine::GameObject* catGameObject, ::System::String* materialPath)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEUI3DUTILS_CHANGECATMATERIAL_OFFSET))(this, catGameObject, materialPath);
		}
	};
}
