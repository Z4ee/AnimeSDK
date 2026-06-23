#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Share { class CMainCitySectionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SHARE_CMAINCITYCONFIG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AB1CD60)
#define SHARE_CMAINCITYCONFIG_GET_DEFAULTSECTIONID_OFFSET UNITYSDK_OFFSET(0x1AB1CB00)
#define SHARE_CMAINCITYCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AB1CAE0)
#define SHARE_CMAINCITYCONFIG_GET_SECTIONS_OFFSET UNITYSDK_OFFSET(0x1AB1CB20)
#define SHARE_CMAINCITYCONFIG_SET_DEFAULTSECTIONID_OFFSET UNITYSDK_OFFSET(0x1AB1CB10)
#define SHARE_CMAINCITYCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0x1AB1CAF0)
#define SHARE_CMAINCITYCONFIG_SET_SECTIONS_OFFSET UNITYSDK_OFFSET(0x1AB1CB30)
#define SHARE_CMAINCITYCONFIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AB1CB40)
#define SHARE_CMAINCITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB1CDE0)

namespace Share
{
	inline static constexpr unsigned int CMainCityConfig_TypeDefinitionIndex = 9068;

	class CMainCityConfig : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Share::CMainCitySectionConfig*>* m_Sections; // 0x10
		::System::Int32 m_ID; // 0x18
		::System::Int32 m_DefaultSectionID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYCONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYCONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYCONFIG_SET_ID_OFFSET))(this, value);
		}

		::System::Int32 get_DefaultSectionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYCONFIG_GET_DEFAULTSECTIONID_OFFSET))(this);
		}

		::System::Void set_DefaultSectionID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYCONFIG_SET_DEFAULTSECTIONID_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Share::CMainCitySectionConfig*>* get_Sections()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Share::CMainCitySectionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYCONFIG_GET_SECTIONS_OFFSET))(this);
		}

		::System::Void set_Sections(::System::Collections::Generic::Dictionary_2<::System::Int32, ::Share::CMainCitySectionConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Share::CMainCitySectionConfig*>*))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYCONFIG_SET_SECTIONS_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYCONFIG_TOSTRING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYCONFIG_CLEAR_OFFSET))(this);
		}
	};
}
