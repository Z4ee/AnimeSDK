#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesAvatarRarityRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18C01540)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18C01390)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18C01060)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18C01330)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18C01710)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C010E0)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18C01750)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18C01930)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18C01C40)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C01FA0)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18C01890)
#define RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18C017F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesAvatarRarityExcelTable_TypeDefinitionIndex = 11523;

	class PlanetFesAvatarRarityExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAvatarRarityExcelTable_TypeDefinitionIndex)->GetStaticField(0x44460);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAvatarRarityExcelTable_TypeDefinitionIndex)->GetStaticField(0x44468);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRarityRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRarityRow*>**)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAvatarRarityExcelTable_TypeDefinitionIndex)->GetStaticField(0x44470);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAvatarRarityExcelTable_TypeDefinitionIndex)->GetStaticField(0xF340);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PlanetFesAvatarRarityExcelTable_TypeDefinitionIndex)->GetStaticField(0xF341);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRarityRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRarityRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRarityRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesAvatarRarityRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PlanetFesAvatarRarityRow* GetData(::System::UInt32 Rarity)
		{
			return ((::RPG::GameCore::PlanetFesAvatarRarityRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_GETDATA_OFFSET))(Rarity);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlanetFesAvatarRarityRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlanetFesAvatarRarityRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARRARITYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
