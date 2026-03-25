#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EnhancedAvatarRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1719CC00)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1719CA80)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GETMAXENHANCEDID_OFFSET UNITYSDK_OFFSET(0x1719D620)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1719C750)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1719CA20)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1719CDD0)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1719C7D0)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1719D9C0)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1719CE10)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1719CFF0)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1719D2C0)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__ADDROWTOMAXENHANCEDIDDICT_OFFSET UNITYSDK_OFFSET(0x1719D870)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1719DA00)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__INITMAXENHANCEDIDDICT_OFFSET UNITYSDK_OFFSET(0x1719D720)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1719CF50)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1719CEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnhancedAvatarExcelTable_TypeDefinitionIndex = 11597;

	class EnhancedAvatarExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EnhancedAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x20CB0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__AvatarIDToMaxEnhancedID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(EnhancedAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x20CB8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EnhancedAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x20CC0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAvatarRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAvatarRow*>**)Il2CppClass::FromTypeDefinitionIndex(EnhancedAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x20CC8);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnhancedAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x8B40);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EnhancedAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x8B41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAvatarRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAvatarRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAvatarRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAvatarRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EnhancedAvatarRow* GetData(::System::UInt32 AvatarID, ::System::UInt32 EnhancedID)
		{
			return ((::RPG::GameCore::EnhancedAvatarRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GETDATA_OFFSET))(AvatarID, EnhancedID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EnhancedAvatarRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::EnhancedAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::System::UInt32 GetMaxEnhancedID(::System::UInt32 avatarID)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GETMAXENHANCEDID_OFFSET))(avatarID);
		}

		static ::System::Void _InitMaxEnhancedIDDict()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__INITMAXENHANCEDIDDICT_OFFSET))();
		}

		static ::System::Void _AddRowToMaxEnhancedIDDict(::RPG::GameCore::EnhancedAvatarRow* row)
		{
			return ((::System::Void(*)(::RPG::GameCore::EnhancedAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__ADDROWTOMAXENHANCEDIDDICT_OFFSET))(row);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
