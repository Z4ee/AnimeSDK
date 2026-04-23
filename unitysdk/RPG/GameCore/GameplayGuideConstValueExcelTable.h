#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameplayGuideConstValueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x189551A0)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18954FF0)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18954CC0)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18954F90)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18955350)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18954D40)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18955390)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18955570)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x189556D0)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x189559E0)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x189554D0)
#define RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18955430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameplayGuideConstValueExcelTable_TypeDefinitionIndex = 12657;

	class GameplayGuideConstValueExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideConstValueRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideConstValueRow*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x34050);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x34058);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x34060);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0xCB70);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(GameplayGuideConstValueExcelTable_TypeDefinitionIndex)->GetStaticField(0xCB71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideConstValueRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideConstValueRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideConstValueRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameplayGuideConstValueRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GameplayGuideConstValueRow* GetData(::System::String* GameplayGuideConstValueName)
		{
			return ((::RPG::GameCore::GameplayGuideConstValueRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_GETDATA_OFFSET))(GameplayGuideConstValueName);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GameplayGuideConstValueRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameplayGuideConstValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDECONSTVALUEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
