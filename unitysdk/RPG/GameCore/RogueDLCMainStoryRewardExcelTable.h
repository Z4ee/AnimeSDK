#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCMainStoryRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_ALLROWS_OFFSET UNITYSDK_OFFSET(0x18D0F950)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D0F040)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D0EEC0)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D0EB90)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D0EE60)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D0F210)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D0EC10)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x18D0FD70)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D0F250)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D0F430)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D0F640)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D0FDD0)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D0F390)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D0F2F0)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x18D0F990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCMainStoryRewardExcelTable_TypeDefinitionIndex = 13999;

	class RogueDLCMainStoryRewardExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMainStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x435D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMainStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x435D8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMainStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x435E0);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCMainStoryRewardRow*>** StaticGet__AllRows()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCMainStoryRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMainStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x435E8);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMainStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xF170);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMainStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xF171);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMainStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xF172);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCMainStoryRewardRow* GetData(::System::UInt32 MainStoryReward)
		{
			return ((::RPG::GameCore::RogueDLCMainStoryRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_GETDATA_OFFSET))(MainStoryReward);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCMainStoryRewardRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCMainStoryRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCMainStoryRewardRow*>* AllRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCMainStoryRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_ALLROWS_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
