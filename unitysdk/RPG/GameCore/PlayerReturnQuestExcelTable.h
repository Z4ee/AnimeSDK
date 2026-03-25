#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayerReturnQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x174E9670)
#define RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x174E94C0)
#define RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x174E9190)
#define RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x174E9460)
#define RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x174E9840)
#define RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x174E9210)
#define RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x174E9880)
#define RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x174E9A60)
#define RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x174E9C20)
#define RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x174E9F80)
#define RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x174E99C0)
#define RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x174E9920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerReturnQuestExcelTable_TypeDefinitionIndex = 13267;

	class PlayerReturnQuestExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A030);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A038);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnQuestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnQuestRow*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A040);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x75F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlayerReturnQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x75F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnQuestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnQuestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnQuestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnQuestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PlayerReturnQuestRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::PlayerReturnQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlayerReturnQuestRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerReturnQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNQUESTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
