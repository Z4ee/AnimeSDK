#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYID_OFFSET UNITYSDK_OFFSET(0x1BFED490)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1BFED360)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYID_OFFSET UNITYSDK_OFFSET(0x1BFED220)
#define CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYNAME_OFFSET UNITYSDK_OFFSET(0x1BFED0E0)
#define CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_1_OFFSET UNITYSDK_OFFSET(0x1BFED410)
#define CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_OFFSET UNITYSDK_OFFSET(0x1BFED2B0)
#define CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_1_OFFSET UNITYSDK_OFFSET(0x1BFED190)
#define CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_OFFSET UNITYSDK_OFFSET(0x1BFED030)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExCategory_TypeDefinitionIndex = 32716;

	class CriAtomExCategory : public ::System::Object
	{
	public:
		static ::System::Void SetVolume(::System::String* name, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_OFFSET))(name, volume);
		}

		static ::System::Void SetVolume_1(::System::Int32 id, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_SETVOLUME_1_OFFSET))(id, volume);
		}

		static ::System::Single GetVolume(::System::String* name)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_OFFSET))(name);
		}

		static ::System::Single GetVolume_1(::System::Int32 id)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_GETVOLUME_1_OFFSET))(id);
		}

		static ::System::Void criAtomExCategory_SetVolumeByName(::System::String* name, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYNAME_OFFSET))(name, volume);
		}

		static ::System::Single criAtomExCategory_GetVolumeByName(::System::String* name)
		{
			return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYNAME_OFFSET))(name);
		}

		static ::System::Void criAtomExCategory_SetVolumeById(::System::Int32 id, ::System::Single volume)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_SETVOLUMEBYID_OFFSET))(id, volume);
		}

		static ::System::Single criAtomExCategory_GetVolumeById(::System::Int32 id)
		{
			return ((::System::Single(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXCATEGORY_CRIATOMEXCATEGORY_GETVOLUMEBYID_OFFSET))(id);
		}
	};
}
