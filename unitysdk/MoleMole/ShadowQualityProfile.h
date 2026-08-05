#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

class Class_1_480FC3B3774489BF;
namespace MoleMole { class GraphicSettingProfileContextBase; }
namespace MoleMole { class ShadowQualityProfileContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_SHADOWQUALITYPROFILE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x173A49E0)
#define MOLEMOLE_SHADOWQUALITYPROFILE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x173A4B20)
#define MOLEMOLE_SHADOWQUALITYPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET UNITYSDK_OFFSET(0x173A4900)
#define MOLEMOLE_SHADOWQUALITYPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x173A4AA0)
#define MOLEMOLE_SHADOWQUALITYPROFILE_GET_GRAPHICPROFILETYPE_OFFSET UNITYSDK_OFFSET(0x173A48F0)
#define MOLEMOLE_SHADOWQUALITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x173A4C40)
#define MOLEMOLE_SHADOWQUALITYPROFILE___BASE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x173A4CD0)
#define MOLEMOLE_SHADOWQUALITYPROFILE___BASE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x173A4D60)
#define MOLEMOLE_SHADOWQUALITYPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x173A4DF0)

namespace MoleMole
{
	inline static constexpr unsigned int ShadowQualityProfile_TypeDefinitionIndex = 82905;

	class ShadowQualityProfile : public ::MoleMole::GraphicSettingProfileBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ShadowQualityProfileContext*>* GraphicProfileContextDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADOWQUALITYPROFILE__CTOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_GraphicProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADOWQUALITYPROFILE_GET_GRAPHICPROFILETYPE_OFFSET))(this);
		}

		::MoleMole::ShadowQualityProfileContext* GetGraphicProfileContextByKey(::System::String* key)
		{
			return ((::MoleMole::ShadowQualityProfileContext*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADOWQUALITYPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET))(this, key);
		}

		::System::Boolean ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADOWQUALITYPROFILE_CONTAINSKEY_OFFSET))(this, key);
		}

		::Class_1_480FC3B3774489BF* GetGraphicProfileProcessor()
		{
			return ((::Class_1_480FC3B3774489BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADOWQUALITYPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileContextBase* GetContext(::System::String* key)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADOWQUALITYPROFILE_GETCONTEXT_OFFSET))(this, key);
		}

		::System::Boolean __base_ContainsKey(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADOWQUALITYPROFILE___BASE_CONTAINSKEY_OFFSET))(this, P0);
		}

		::MoleMole::GraphicSettingProfileContextBase* __base_GetContext(::System::String* P0)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADOWQUALITYPROFILE___BASE_GETCONTEXT_OFFSET))(this, P0);
		}

		::Class_1_480FC3B3774489BF* __base_GetGraphicProfileProcessor()
		{
			return ((::Class_1_480FC3B3774489BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADOWQUALITYPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}
	};
}
