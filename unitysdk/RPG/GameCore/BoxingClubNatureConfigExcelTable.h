#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BoxingClubNatureConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16FF5440)
#define RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16FF5290)
#define RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16FF4F60)
#define RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16FF5230)
#define RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16FF5610)
#define RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FF4FE0)
#define RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16FF5650)
#define RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FF5830)
#define RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16FF5A90)
#define RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FF5DF0)
#define RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16FF5790)
#define RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FF56F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BoxingClubNatureConfigExcelTable_TypeDefinitionIndex = 11799;

	class BoxingClubNatureConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(BoxingClubNatureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x23980);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(BoxingClubNatureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x23988);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubNatureConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubNatureConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(BoxingClubNatureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x23990);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(BoxingClubNatureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x94F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BoxingClubNatureConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x94F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubNatureConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubNatureConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubNatureConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BoxingClubNatureConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::BoxingClubNatureConfigRow* GetData(::RPG::GameCore::AttackDamageType BoxingClubNatureType)
		{
			return ((::RPG::GameCore::BoxingClubNatureConfigRow*(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE_GETDATA_OFFSET))(BoxingClubNatureType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::BoxingClubNatureConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::BoxingClubNatureConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBNATURECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
