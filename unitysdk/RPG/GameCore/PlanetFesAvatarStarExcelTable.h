#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesAvatarStarRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x174B7610)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x174B7460)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x174B7130)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x174B7400)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x174B7820)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x174B71B0)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x174B7860)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x174B7A40)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x174B7C40)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x174B7FF0)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x174B79A0)
#define RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x174B7900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAvatarStarExcelTable_TypeDefinitionIndex = 11124;

	class PlanetFesAvatarStarExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAvatarStarExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C480);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarStarRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarStarRow*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAvatarStarExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C488);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAvatarStarExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C490);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAvatarStarExcelTable_TypeDefinitionIndex)->GetStaticField(0xEB90);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAvatarStarExcelTable_TypeDefinitionIndex)->GetStaticField(0xEB91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarStarRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarStarRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarStarRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarStarRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesAvatarStarRow* GetData(::System::UInt32 Rarity, ::System::UInt32 StarLevel)
		{
			return ((::RPG::GameCore::PlanetFesAvatarStarRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_GETDATA_OFFSET))(Rarity, StarLevel);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlanetFesAvatarStarRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesAvatarStarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTAREXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
