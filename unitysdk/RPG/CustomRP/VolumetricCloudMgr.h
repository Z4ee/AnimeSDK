#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class VolumetricCloudLayer; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CUSTOMRP_VOLUMETRICCLOUDMGR_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1EE5BFD0)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDMGR_GET_LAYERS_OFFSET UNITYSDK_OFFSET(0x1EE5C120)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDMGR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE5C0C0)
#define RPG_CUSTOMRP_VOLUMETRICCLOUDMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE5C0D0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int VolumetricCloudMgr_TypeDefinitionIndex = 37050;

	class VolumetricCloudMgr : public ::System::Object
	{
	public:
		static ::RPG::CustomRP::VolumetricCloudMgr** StaticGet_s_instance()
		{
			return (::RPG::CustomRP::VolumetricCloudMgr**)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudMgr_TypeDefinitionIndex)->GetStaticField(0x3C210);
		}
		::System::Collections::Generic::List_1<::RPG::CustomRP::VolumetricCloudLayer*>* _layers; // 0x10

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDMGR__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDMGR__CTOR_OFFSET))(this);
		}

		static ::RPG::CustomRP::VolumetricCloudMgr* get_Instance()
		{
			return ((::RPG::CustomRP::VolumetricCloudMgr*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDMGR_GET_INSTANCE_OFFSET))();
		}

		::System::Collections::Generic::List_1<::RPG::CustomRP::VolumetricCloudLayer*>* get_Layers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::CustomRP::VolumetricCloudLayer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VOLUMETRICCLOUDMGR_GET_LAYERS_OFFSET))(this);
		}
	};
}
