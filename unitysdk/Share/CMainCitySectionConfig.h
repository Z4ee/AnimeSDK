#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SHARE_CMAINCITYSECTIONCONFIG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C37FCF0)
#define SHARE_CMAINCITYSECTIONCONFIG_GET_BORNPOSNAME_OFFSET UNITYSDK_OFFSET(0x1C37FB00)
#define SHARE_CMAINCITYSECTIONCONFIG_GET_BORNTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C37FAE0)
#define SHARE_CMAINCITYSECTIONCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C37FAA0)
#define SHARE_CMAINCITYSECTIONCONFIG_GET_UNITYSCENEPATH_OFFSET UNITYSDK_OFFSET(0x1C37FAC0)
#define SHARE_CMAINCITYSECTIONCONFIG_SET_BORNPOSNAME_OFFSET UNITYSDK_OFFSET(0x1C37FB10)
#define SHARE_CMAINCITYSECTIONCONFIG_SET_BORNTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C37FAF0)
#define SHARE_CMAINCITYSECTIONCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0x1C37FAB0)
#define SHARE_CMAINCITYSECTIONCONFIG_SET_UNITYSCENEPATH_OFFSET UNITYSDK_OFFSET(0x1C37FAD0)
#define SHARE_CMAINCITYSECTIONCONFIG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C37FB20)
#define SHARE_CMAINCITYSECTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C37FD40)

namespace Share
{
	inline static constexpr unsigned int CMainCitySectionConfig_TypeDefinitionIndex = 14223;

	class CMainCitySectionConfig : public ::System::Object
	{
	public:
		::System::String* m_BornPosName; // 0x10
		::System::String* m_BornTransform; // 0x18
		::System::String* m_UnityScenePath; // 0x20
		::System::Int32 m_ID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYSECTIONCONFIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYSECTIONCONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYSECTIONCONFIG_SET_ID_OFFSET))(this, value);
		}

		::System::String* get_UnityScenePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYSECTIONCONFIG_GET_UNITYSCENEPATH_OFFSET))(this);
		}

		::System::Void set_UnityScenePath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYSECTIONCONFIG_SET_UNITYSCENEPATH_OFFSET))(this, value);
		}

		::System::String* get_BornTransform()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYSECTIONCONFIG_GET_BORNTRANSFORM_OFFSET))(this);
		}

		::System::Void set_BornTransform(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYSECTIONCONFIG_SET_BORNTRANSFORM_OFFSET))(this, value);
		}

		::System::String* get_BornPosName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYSECTIONCONFIG_GET_BORNPOSNAME_OFFSET))(this);
		}

		::System::Void set_BornPosName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYSECTIONCONFIG_SET_BORNPOSNAME_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYSECTIONCONFIG_TOSTRING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CMAINCITYSECTIONCONFIG_CLEAR_OFFSET))(this);
		}
	};
}
