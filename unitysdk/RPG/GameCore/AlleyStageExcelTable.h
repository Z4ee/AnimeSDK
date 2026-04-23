#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyStageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1869ED20)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1869EBA0)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1869E870)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1869EB40)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1869EEF0)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1869E8F0)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1869EF30)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1869F110)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1869F4C0)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1869F7D0)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1869F070)
#define RPG_GAMECORE_ALLEYSTAGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1869EFD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyStageExcelTable_TypeDefinitionIndex = 11935;

	class AlleyStageExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x25AD0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x25AD8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyStageRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyStageRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x25AE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleyStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x9E20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleyStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x9E21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyStageRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyStageRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyStageRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyStageRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyStageRow* GetData(::System::UInt32 StageID)
		{
			return ((::RPG::GameCore::AlleyStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_GETDATA_OFFSET))(StageID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyStageRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyStageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSTAGEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
