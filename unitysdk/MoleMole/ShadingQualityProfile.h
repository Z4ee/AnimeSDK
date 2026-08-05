#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

class Class_1_480FC3B3774489BF;
namespace MoleMole { class GraphicSettingProfileContextBase; }
namespace MoleMole { class ShadingQualityProfileContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_SHADINGQUALITYPROFILE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x108243A0)
#define MOLEMOLE_SHADINGQUALITYPROFILE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x108244E0)
#define MOLEMOLE_SHADINGQUALITYPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET UNITYSDK_OFFSET(0x108242C0)
#define MOLEMOLE_SHADINGQUALITYPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x10824460)
#define MOLEMOLE_SHADINGQUALITYPROFILE_GET_GRAPHICPROFILETYPE_OFFSET UNITYSDK_OFFSET(0x108242B0)
#define MOLEMOLE_SHADINGQUALITYPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x10824600)
#define MOLEMOLE_SHADINGQUALITYPROFILE___BASE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x10824690)
#define MOLEMOLE_SHADINGQUALITYPROFILE___BASE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x10824720)
#define MOLEMOLE_SHADINGQUALITYPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x108247B0)

namespace MoleMole
{
	inline static constexpr unsigned int ShadingQualityProfile_TypeDefinitionIndex = 66372;

	class ShadingQualityProfile : public ::MoleMole::GraphicSettingProfileBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ShadingQualityProfileContext*>* ShadingQualityContextDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADINGQUALITYPROFILE__CTOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_GraphicProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADINGQUALITYPROFILE_GET_GRAPHICPROFILETYPE_OFFSET))(this);
		}

		::MoleMole::ShadingQualityProfileContext* GetGraphicProfileContextByKey(::System::String* key)
		{
			return ((::MoleMole::ShadingQualityProfileContext*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADINGQUALITYPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET))(this, key);
		}

		::System::Boolean ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADINGQUALITYPROFILE_CONTAINSKEY_OFFSET))(this, key);
		}

		::Class_1_480FC3B3774489BF* GetGraphicProfileProcessor()
		{
			return ((::Class_1_480FC3B3774489BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADINGQUALITYPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileContextBase* GetContext(::System::String* key)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADINGQUALITYPROFILE_GETCONTEXT_OFFSET))(this, key);
		}

		::System::Boolean __base_ContainsKey(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADINGQUALITYPROFILE___BASE_CONTAINSKEY_OFFSET))(this, P0);
		}

		::MoleMole::GraphicSettingProfileContextBase* __base_GetContext(::System::String* P0)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADINGQUALITYPROFILE___BASE_GETCONTEXT_OFFSET))(this, P0);
		}

		::Class_1_480FC3B3774489BF* __base_GetGraphicProfileProcessor()
		{
			return ((::Class_1_480FC3B3774489BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADINGQUALITYPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}
	};
}
