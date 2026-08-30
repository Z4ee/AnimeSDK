#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class CameraModuleConfigBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAMERAMODULECONFIGCOLLECTION_METHOD_3_2EBC7AD3C6D407E3_OFFSET UNITYSDK_OFFSET(0xC9EA370)
#define RPG_CLIENT_CAMERAMODULECONFIGCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC9EA500)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraModuleConfigCollection_TypeDefinitionIndex = 69634;

	class CameraModuleConfigCollection : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CameraModuleConfigBase*>* ModuleConfigList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMODULECONFIGCOLLECTION__CTOR_OFFSET))(this);
		}

		::RPG::Client::CameraModuleConfigBase* Method_3_2EBC7AD3C6D407E3(::RPG::Client::CameraModuleType a1)
		{
			return ((::RPG::Client::CameraModuleConfigBase*(*)(::PVOID, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMODULECONFIGCOLLECTION_METHOD_3_2EBC7AD3C6D407E3_OFFSET))(this, a1);
		}
	};
}
