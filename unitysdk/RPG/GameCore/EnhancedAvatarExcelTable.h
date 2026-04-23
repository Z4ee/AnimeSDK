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

#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x188AA340)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x188AA1C0)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GETMAXENHANCEDID_OFFSET UNITYSDK_OFFSET(0x188AAD60)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x188A9E90)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x188AA160)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x188AA510)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x188A9F10)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x188AB100)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x188AA550)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x188AA730)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x188AAA00)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__ADDROWTOMAXENHANCEDIDDICT_OFFSET UNITYSDK_OFFSET(0x188AAFB0)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x188AB140)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__INITMAXENHANCEDIDDICT_OFFSET UNITYSDK_OFFSET(0x188AAE60)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x188AA690)
#define RPG_GAMECORE_ENHANCEDAVATAREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x188AA5F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnhancedAvatarExcelTable_TypeDefinitionIndex = 12008;

	class EnhancedAvatarExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__AvatarIDToMaxEnhancedID()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(EnhancedAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x35010);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EnhancedAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x35018);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAvatarRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EnhancedAvatarRow*>**)Il2CppClass::FromTypeDefinitionIndex(EnhancedAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x35020);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EnhancedAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x35028);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnhancedAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0xD090);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EnhancedAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0xD091);
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
