#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client { class SingleVCameraFreelook3rdConfigTemplate; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_VCAMERAFREELOOK3RDCONFIGTEMPLATE__CTOR_OFFSET UNITYSDK_OFFSET(0xB46AF40)

namespace RPG::Client
{
	inline static constexpr unsigned int VCameraFreelook3rdConfigTemplate_TypeDefinitionIndex = 64290;

	class VCameraFreelook3rdConfigTemplate : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::SingleVCameraFreelook3rdConfigTemplate*>* VCamFreelook3rdConfigChangeTemplate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VCAMERAFREELOOK3RDCONFIGTEMPLATE__CTOR_OFFSET))(this);
		}
	};
}
