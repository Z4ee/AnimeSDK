#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueEventSpecialOptionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17609740)
#define RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17609590)
#define RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17609260)
#define RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17609530)
#define RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x176098C0)
#define RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x176092E0)
#define RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17609900)
#define RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17609AE0)
#define RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17609C80)
#define RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17609F90)
#define RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17609A40)
#define RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x176099A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueEventSpecialOptionExcelTable_TypeDefinitionIndex = 13548;

	class RogueEventSpecialOptionExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueEventSpecialOptionExcelTable_TypeDefinitionIndex)->GetStaticField(0x35010);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueEventSpecialOptionExcelTable_TypeDefinitionIndex)->GetStaticField(0x35018);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueEventSpecialOptionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueEventSpecialOptionRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueEventSpecialOptionExcelTable_TypeDefinitionIndex)->GetStaticField(0x35020);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueEventSpecialOptionExcelTable_TypeDefinitionIndex)->GetStaticField(0x109D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueEventSpecialOptionExcelTable_TypeDefinitionIndex)->GetStaticField(0x109D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueEventSpecialOptionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueEventSpecialOptionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueEventSpecialOptionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueEventSpecialOptionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueEventSpecialOptionRow* GetData(::System::UInt32 SpecialOptionID)
		{
			return ((::RPG::GameCore::RogueEventSpecialOptionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE_GETDATA_OFFSET))(SpecialOptionID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueEventSpecialOptionRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueEventSpecialOptionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEEVENTSPECIALOPTIONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
