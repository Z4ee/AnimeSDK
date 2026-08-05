#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

class Class_1_480FC3B3774489BF;
namespace MoleMole { class AnisotropicSamplingProfileContext; }
namespace MoleMole { class GraphicSettingProfileContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_ANISOTROPICSAMPLINGPROFILE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x134C6130)
#define MOLEMOLE_ANISOTROPICSAMPLINGPROFILE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x134C6270)
#define MOLEMOLE_ANISOTROPICSAMPLINGPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET UNITYSDK_OFFSET(0x134C6050)
#define MOLEMOLE_ANISOTROPICSAMPLINGPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x134C61F0)
#define MOLEMOLE_ANISOTROPICSAMPLINGPROFILE_GET_GRAPHICPROFILETYPE_OFFSET UNITYSDK_OFFSET(0x134C6040)
#define MOLEMOLE_ANISOTROPICSAMPLINGPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x134C6390)
#define MOLEMOLE_ANISOTROPICSAMPLINGPROFILE___BASE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x134C6420)
#define MOLEMOLE_ANISOTROPICSAMPLINGPROFILE___BASE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x134C64B0)
#define MOLEMOLE_ANISOTROPICSAMPLINGPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x134C6540)

namespace MoleMole
{
	inline static constexpr unsigned int AnisotropicSamplingProfile_TypeDefinitionIndex = 61776;

	class AnisotropicSamplingProfile : public ::MoleMole::GraphicSettingProfileBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::AnisotropicSamplingProfileContext*>* GraphicProfileContextDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANISOTROPICSAMPLINGPROFILE__CTOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_GraphicProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANISOTROPICSAMPLINGPROFILE_GET_GRAPHICPROFILETYPE_OFFSET))(this);
		}

		::MoleMole::AnisotropicSamplingProfileContext* GetGraphicProfileContextByKey(::System::String* key)
		{
			return ((::MoleMole::AnisotropicSamplingProfileContext*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANISOTROPICSAMPLINGPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET))(this, key);
		}

		::System::Boolean ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANISOTROPICSAMPLINGPROFILE_CONTAINSKEY_OFFSET))(this, key);
		}

		::Class_1_480FC3B3774489BF* GetGraphicProfileProcessor()
		{
			return ((::Class_1_480FC3B3774489BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANISOTROPICSAMPLINGPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileContextBase* GetContext(::System::String* key)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANISOTROPICSAMPLINGPROFILE_GETCONTEXT_OFFSET))(this, key);
		}

		::System::Boolean __base_ContainsKey(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANISOTROPICSAMPLINGPROFILE___BASE_CONTAINSKEY_OFFSET))(this, P0);
		}

		::MoleMole::GraphicSettingProfileContextBase* __base_GetContext(::System::String* P0)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_ANISOTROPICSAMPLINGPROFILE___BASE_GETCONTEXT_OFFSET))(this, P0);
		}

		::Class_1_480FC3B3774489BF* __base_GetGraphicProfileProcessor()
		{
			return ((::Class_1_480FC3B3774489BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ANISOTROPICSAMPLINGPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}
	};
}
