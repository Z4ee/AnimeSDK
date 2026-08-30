#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightAugmentConfigRow; }
namespace RPG::GameCore { class GridFightAugmentExpiredConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GETDESCDETAILOBJECT_OFFSET UNITYSDK_OFFSET(0x1ADB27A0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_CHAPTERLIMITLIST_OFFSET UNITYSDK_OFFSET(0x1ADB1D40)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_CURSEASONID_OFFSET UNITYSDK_OFFSET(0x1ADB38F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_CURSUBSEASONID_OFFSET UNITYSDK_OFFSET(0x1ADB39E0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_HASDETAIL_OFFSET UNITYSDK_OFFSET(0x1ADB22D0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_HASEQUIPCONTEXT_OFFSET UNITYSDK_OFFSET(0x1ADB3420)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1ADB1EE0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x1ADB0A20)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1ADB2530)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ISOCEFFECTIVE_OFFSET UNITYSDK_OFFSET(0x1ADB2220)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x1ADB1FB0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1ADB0B20)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x1ADB1E10)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_RAWDESC_OFFSET UNITYSDK_OFFSET(0x1ADB0C60)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_REFTRAITID_OFFSET UNITYSDK_OFFSET(0x1ADB2080)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_REFTRAITSCORE_OFFSET UNITYSDK_OFFSET(0x1ADB2150)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADB3AD0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADB07A0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG__ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1ADB3850)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentConfig_TypeDefinitionIndex = 64436;

	class GridFightAugmentConfig : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet__EquipRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugmentConfig_TypeDefinitionIndex)->GetStaticField(0x1B5F0);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet__InfoRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugmentConfig_TypeDefinitionIndex)->GetStaticField(0x1B5F8);
		}
		::RPG::GameCore::GridFightAugmentExpiredConfigRow* _ConfigExpiredRow; // 0x10
		::RPG::GameCore::GridFightAugmentConfigRow* _ConfigRow; // 0x18

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetDescDetailObject()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GETDESCDETAILOBJECT_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_NAME_OFFSET))(this);
		}

		::System::String* get_RawDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_RAWDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ChapterLimitList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_CHAPTERLIMITLIST_OFFSET))(this);
		}

		::RPG::GameCore::GridFightAugmentQuality get_Quality()
		{
			return ((::RPG::GameCore::GridFightAugmentQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_QUALITY_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_MINIICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RefTraitID()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_REFTRAITID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RefTraitScore()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_REFTRAITSCORE_OFFSET))(this);
		}

		::System::Boolean get_IsOCEffective()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ISOCEFFECTIVE_OFFSET))(this);
		}

		::System::Boolean get_HasDetail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_HASDETAIL_OFFSET))(this);
		}

		::System::Boolean get_HasEquipContext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_HASEQUIPCONTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ISEXPIRED_OFFSET))(this);
		}

		::System::UInt32 get_CurSeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_CURSEASONID_OFFSET))(this);
		}

		::System::UInt32 get_CurSubSeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_CURSUBSEASONID_OFFSET))(this);
		}

		::System::Boolean _IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG__ISEXPIRED_OFFSET))(this);
		}
	};
}
