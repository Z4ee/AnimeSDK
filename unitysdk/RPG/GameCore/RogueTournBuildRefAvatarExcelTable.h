#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournBuildRefAvatarRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x176601D0)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17660020)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1765FCF0)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1765FFC0)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x176603A0)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1765FD70)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x176603E0)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x176605C0)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17660730)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17660A90)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17660520)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17660480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuildRefAvatarExcelTable_TypeDefinitionIndex = 13735;

	class RogueTournBuildRefAvatarExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuildRefAvatarRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuildRefAvatarRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x6050);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x6058);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x6060);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x3A80);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefAvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x3A81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuildRefAvatarRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuildRefAvatarRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuildRefAvatarRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuildRefAvatarRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournBuildRefAvatarRow* GetData(::System::UInt32 AvatarID)
		{
			return ((::RPG::GameCore::RogueTournBuildRefAvatarRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_GETDATA_OFFSET))(AvatarID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTournBuildRefAvatarRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournBuildRefAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATAREXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
