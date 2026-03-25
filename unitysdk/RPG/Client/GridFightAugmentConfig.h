#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightAugmentConfigRow; }
namespace RPG::GameCore { class GridFightAugmentExpiredConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GETDESCDETAILOBJECT_OFFSET UNITYSDK_OFFSET(0x97CD390)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_CHAPTERLIMITLIST_OFFSET UNITYSDK_OFFSET(0x97CCCA0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_CURSEASONID_OFFSET UNITYSDK_OFFSET(0x97CE210)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_CURSUBSEASONID_OFFSET UNITYSDK_OFFSET(0x97CE280)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_DESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0x97CCCF0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_HASDETAIL_OFFSET UNITYSDK_OFFSET(0x97CCF10)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_HASEQUIPCONTEXT_OFFSET UNITYSDK_OFFSET(0x97CDBE0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x97CCD90)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x97CC2D0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x97CD180)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ISOCEFFECTIVE_OFFSET UNITYSDK_OFFSET(0x97CCED0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x97CCDE0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x97CC330)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x97CCD40)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_RAWDESC_OFFSET UNITYSDK_OFFSET(0x97CC430)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_REFTRAITID_OFFSET UNITYSDK_OFFSET(0x97CCE30)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_REFTRAITSCORE_OFFSET UNITYSDK_OFFSET(0x97CCE80)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x97CE2F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x97CC0C0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG__ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x97CE070)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentConfig_TypeDefinitionIndex = 52279;

	class GridFightAugmentConfig : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet__InfoRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugmentConfig_TypeDefinitionIndex)->GetStaticField(0x12370);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet__EquipRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugmentConfig_TypeDefinitionIndex)->GetStaticField(0x12378);
		}
		::RPG::GameCore::GridFightAugmentConfigRow* _ConfigRow; // 0x10
		::RPG::GameCore::GridFightAugmentExpiredConfigRow* _ConfigExpiredRow; // 0x18

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG__CTOR_OFFSET))(this, id);
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

		::Il2CppArray<::RPG::GameCore::FixPoint>* get_DescParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_DESCPARAMLIST_OFFSET))(this);
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
