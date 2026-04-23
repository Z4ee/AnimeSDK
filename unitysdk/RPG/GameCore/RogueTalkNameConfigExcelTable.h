#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTalkNameConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D6A6E0)
#define RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D6A530)
#define RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D6A200)
#define RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D6A4D0)
#define RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D6A860)
#define RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D6A280)
#define RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D6A8A0)
#define RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D6AA80)
#define RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D6AD40)
#define RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D6B050)
#define RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D6A9E0)
#define RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D6A940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTalkNameConfigExcelTable_TypeDefinitionIndex = 14013;

	class RogueTalkNameConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTalkNameConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34A00);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTalkNameConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34A08);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTalkNameConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTalkNameConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTalkNameConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34A10);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTalkNameConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCFA0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueTalkNameConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCFA1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTalkNameConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTalkNameConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTalkNameConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTalkNameConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueTalkNameConfigRow* GetData(::System::UInt32 TalkNameID)
		{
			return ((::RPG::GameCore::RogueTalkNameConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE_GETDATA_OFFSET))(TalkNameID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTalkNameConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTalkNameConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
