#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

class Class_1_480FC3B3774489BF;
namespace MoleMole { class DistortionProfileContext; }
namespace MoleMole { class GraphicSettingProfileContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_DISTORTIONPROFILE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x16276CF0)
#define MOLEMOLE_DISTORTIONPROFILE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x16276E30)
#define MOLEMOLE_DISTORTIONPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET UNITYSDK_OFFSET(0x16276C10)
#define MOLEMOLE_DISTORTIONPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x16276DB0)
#define MOLEMOLE_DISTORTIONPROFILE_GET_GRAPHICPROFILETYPE_OFFSET UNITYSDK_OFFSET(0x16276C00)
#define MOLEMOLE_DISTORTIONPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x16276F50)
#define MOLEMOLE_DISTORTIONPROFILE___BASE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x16276FE0)
#define MOLEMOLE_DISTORTIONPROFILE___BASE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x16277070)
#define MOLEMOLE_DISTORTIONPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x16277100)

namespace MoleMole
{
	inline static constexpr unsigned int DistortionProfile_TypeDefinitionIndex = 47732;

	class DistortionProfile : public ::MoleMole::GraphicSettingProfileBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::DistortionProfileContext*>* DistortionContextDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISTORTIONPROFILE__CTOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_GraphicProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISTORTIONPROFILE_GET_GRAPHICPROFILETYPE_OFFSET))(this);
		}

		::MoleMole::DistortionProfileContext* GetGraphicProfileContextByKey(::System::String* key)
		{
			return ((::MoleMole::DistortionProfileContext*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DISTORTIONPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET))(this, key);
		}

		::System::Boolean ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DISTORTIONPROFILE_CONTAINSKEY_OFFSET))(this, key);
		}

		::Class_1_480FC3B3774489BF* GetGraphicProfileProcessor()
		{
			return ((::Class_1_480FC3B3774489BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISTORTIONPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileContextBase* GetContext(::System::String* key)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DISTORTIONPROFILE_GETCONTEXT_OFFSET))(this, key);
		}

		::System::Boolean __base_ContainsKey(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DISTORTIONPROFILE___BASE_CONTAINSKEY_OFFSET))(this, P0);
		}

		::MoleMole::GraphicSettingProfileContextBase* __base_GetContext(::System::String* P0)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DISTORTIONPROFILE___BASE_GETCONTEXT_OFFSET))(this, P0);
		}

		::Class_1_480FC3B3774489BF* __base_GetGraphicProfileProcessor()
		{
			return ((::Class_1_480FC3B3774489BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DISTORTIONPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}
	};
}
