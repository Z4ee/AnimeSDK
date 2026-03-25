#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengeBossGroupExtraConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17057BD0)
#define RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17057A20)
#define RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x170576F0)
#define RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x170579C0)
#define RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17057D50)
#define RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17057770)
#define RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17057D90)
#define RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17057F70)
#define RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17058360)
#define RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17058670)
#define RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17057ED0)
#define RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17057E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeBossGroupExtraConfigExcelTable_TypeDefinitionIndex = 11813;

	class ChallengeBossGroupExtraConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeBossGroupExtraConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeBossGroupExtraConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeBossGroupExtraConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25A40);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeBossGroupExtraConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25A48);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeBossGroupExtraConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25A50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChallengeBossGroupExtraConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC280);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ChallengeBossGroupExtraConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC281);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeBossGroupExtraConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeBossGroupExtraConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeBossGroupExtraConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeBossGroupExtraConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ChallengeBossGroupExtraConfigRow* GetData(::System::UInt32 GroupID)
		{
			return ((::RPG::GameCore::ChallengeBossGroupExtraConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE_GETDATA_OFFSET))(GroupID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ChallengeBossGroupExtraConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeBossGroupExtraConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEBOSSGROUPEXTRACONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
