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

#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GETDESCDETAILOBJECT_OFFSET UNITYSDK_OFFSET(0xBAE23F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_CHAPTERLIMITLIST_OFFSET UNITYSDK_OFFSET(0xBAE1CE0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_CURSEASONID_OFFSET UNITYSDK_OFFSET(0xBAE3560)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_CURSUBSEASONID_OFFSET UNITYSDK_OFFSET(0xBAE35F0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_DESCPARAMLIST_OFFSET UNITYSDK_OFFSET(0xBAE1D30)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_HASDETAIL_OFFSET UNITYSDK_OFFSET(0xBAE1F50)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_HASEQUIPCONTEXT_OFFSET UNITYSDK_OFFSET(0xBAE2E10)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xBAE1DD0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0xBAE0E60)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xBAE21C0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ISOCEFFECTIVE_OFFSET UNITYSDK_OFFSET(0xBAE1F10)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0xBAE1E20)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0xBAE0EC0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0xBAE1D80)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_RAWDESC_OFFSET UNITYSDK_OFFSET(0xBAE0FC0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_REFTRAITID_OFFSET UNITYSDK_OFFSET(0xBAE1E70)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_REFTRAITSCORE_OFFSET UNITYSDK_OFFSET(0xBAE1EC0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0xBAE3680)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xBAE0C30)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG__ISEXPIRED_OFFSET UNITYSDK_OFFSET(0xBAE3310)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentConfig_TypeDefinitionIndex = 60166;

	class GridFightAugmentConfig : public ::System::Object
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet__EquipRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugmentConfig_TypeDefinitionIndex)->GetStaticField(0x295D0);
		}
		static ::System::Text::RegularExpressions::Regex** StaticGet__InfoRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugmentConfig_TypeDefinitionIndex)->GetStaticField(0x295D8);
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
