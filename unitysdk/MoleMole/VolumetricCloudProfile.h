#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

class Class_1_480FC3B3774489BF;
namespace MoleMole { class GraphicSettingProfileContextBase; }
namespace MoleMole { class VolumetricCloudProfileContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_VOLUMETRICCLOUDPROFILE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x13B492C0)
#define MOLEMOLE_VOLUMETRICCLOUDPROFILE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x13B49400)
#define MOLEMOLE_VOLUMETRICCLOUDPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET UNITYSDK_OFFSET(0x13B491E0)
#define MOLEMOLE_VOLUMETRICCLOUDPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x13B49380)
#define MOLEMOLE_VOLUMETRICCLOUDPROFILE_GET_GRAPHICPROFILETYPE_OFFSET UNITYSDK_OFFSET(0x13B491D0)
#define MOLEMOLE_VOLUMETRICCLOUDPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x13B49520)
#define MOLEMOLE_VOLUMETRICCLOUDPROFILE___BASE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x13B495B0)
#define MOLEMOLE_VOLUMETRICCLOUDPROFILE___BASE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x13B49640)
#define MOLEMOLE_VOLUMETRICCLOUDPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x13B496D0)

namespace MoleMole
{
	inline static constexpr unsigned int VolumetricCloudProfile_TypeDefinitionIndex = 80279;

	class VolumetricCloudProfile : public ::MoleMole::GraphicSettingProfileBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::VolumetricCloudProfileContext*>* GraphicProfileContextDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOLUMETRICCLOUDPROFILE__CTOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_GraphicProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOLUMETRICCLOUDPROFILE_GET_GRAPHICPROFILETYPE_OFFSET))(this);
		}

		::MoleMole::VolumetricCloudProfileContext* GetGraphicProfileContextByKey(::System::String* key)
		{
			return ((::MoleMole::VolumetricCloudProfileContext*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOLUMETRICCLOUDPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET))(this, key);
		}

		::System::Boolean ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOLUMETRICCLOUDPROFILE_CONTAINSKEY_OFFSET))(this, key);
		}

		::Class_1_480FC3B3774489BF* GetGraphicProfileProcessor()
		{
			return ((::Class_1_480FC3B3774489BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOLUMETRICCLOUDPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileContextBase* GetContext(::System::String* key)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOLUMETRICCLOUDPROFILE_GETCONTEXT_OFFSET))(this, key);
		}

		::System::Boolean __base_ContainsKey(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOLUMETRICCLOUDPROFILE___BASE_CONTAINSKEY_OFFSET))(this, P0);
		}

		::MoleMole::GraphicSettingProfileContextBase* __base_GetContext(::System::String* P0)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_VOLUMETRICCLOUDPROFILE___BASE_GETCONTEXT_OFFSET))(this, P0);
		}

		::Class_1_480FC3B3774489BF* __base_GetGraphicProfileProcessor()
		{
			return ((::Class_1_480FC3B3774489BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOLUMETRICCLOUDPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}
	};
}
