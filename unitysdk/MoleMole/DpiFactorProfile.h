#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileBase.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"

class Class_1_480FC3B3774489BF;
namespace MoleMole { class DpiFactorProfileContext; }
namespace MoleMole { class GraphicSettingProfileContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_DPIFACTORPROFILE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1C529B60)
#define MOLEMOLE_DPIFACTORPROFILE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C529CA0)
#define MOLEMOLE_DPIFACTORPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET UNITYSDK_OFFSET(0x1C529A80)
#define MOLEMOLE_DPIFACTORPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1C529C20)
#define MOLEMOLE_DPIFACTORPROFILE_GET_GRAPHICPROFILETYPE_OFFSET UNITYSDK_OFFSET(0x1C529A70)
#define MOLEMOLE_DPIFACTORPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C529DC0)
#define MOLEMOLE_DPIFACTORPROFILE___BASE_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1C529E50)
#define MOLEMOLE_DPIFACTORPROFILE___BASE_GETCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C529EE0)
#define MOLEMOLE_DPIFACTORPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1C529F70)

namespace MoleMole
{
	inline static constexpr unsigned int DpiFactorProfile_TypeDefinitionIndex = 61851;

	class DpiFactorProfile : public ::MoleMole::GraphicSettingProfileBase
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::DpiFactorProfileContext*>* GraphicProfileContextDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DPIFACTORPROFILE__CTOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileType get_GraphicProfileType()
		{
			return ((::MoleMole::GraphicSettingProfileType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DPIFACTORPROFILE_GET_GRAPHICPROFILETYPE_OFFSET))(this);
		}

		::MoleMole::DpiFactorProfileContext* GetGraphicProfileContextByKey(::System::String* key)
		{
			return ((::MoleMole::DpiFactorProfileContext*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DPIFACTORPROFILE_GETGRAPHICPROFILECONTEXTBYKEY_OFFSET))(this, key);
		}

		::System::Boolean ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DPIFACTORPROFILE_CONTAINSKEY_OFFSET))(this, key);
		}

		::Class_1_480FC3B3774489BF* GetGraphicProfileProcessor()
		{
			return ((::Class_1_480FC3B3774489BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DPIFACTORPROFILE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}

		::MoleMole::GraphicSettingProfileContextBase* GetContext(::System::String* key)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DPIFACTORPROFILE_GETCONTEXT_OFFSET))(this, key);
		}

		::System::Boolean __base_ContainsKey(::System::String* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DPIFACTORPROFILE___BASE_CONTAINSKEY_OFFSET))(this, P0);
		}

		::MoleMole::GraphicSettingProfileContextBase* __base_GetContext(::System::String* P0)
		{
			return ((::MoleMole::GraphicSettingProfileContextBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_DPIFACTORPROFILE___BASE_GETCONTEXT_OFFSET))(this, P0);
		}

		::Class_1_480FC3B3774489BF* __base_GetGraphicProfileProcessor()
		{
			return ((::Class_1_480FC3B3774489BF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DPIFACTORPROFILE___BASE_GETGRAPHICPROFILEPROCESSOR_OFFSET))(this);
		}
	};
}
