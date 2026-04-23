#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueCandyCrashConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18CF2A70)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18CF28C0)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18CF2590)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18CF2860)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18CF2C40)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18CF2610)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18CF2C80)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CF2E60)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18CF30C0)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CF3420)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18CF2DC0)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18CF2D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCandyCrashConfigExcelTable_TypeDefinitionIndex = 13879;

	class RogueCandyCrashConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCandyCrashConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCandyCrashConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueCandyCrashConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x42560);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueCandyCrashConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x42568);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueCandyCrashConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x42570);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueCandyCrashConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xEE20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueCandyCrashConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xEE21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCandyCrashConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCandyCrashConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCandyCrashConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCandyCrashConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueCandyCrashConfigRow* GetData(::System::UInt32 ParamGroupID)
		{
			return ((::RPG::GameCore::RogueCandyCrashConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_GETDATA_OFFSET))(ParamGroupID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueCandyCrashConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueCandyCrashConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
