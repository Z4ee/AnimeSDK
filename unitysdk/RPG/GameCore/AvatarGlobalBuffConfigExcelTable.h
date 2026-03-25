#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarGlobalBuffConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_GETBYMAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x16FA1010)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16FA0150)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F9FFD0)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F9FCA0)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F9FF70)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16FA0360)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F9FD20)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x16FA1360)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16FA03A0)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FA0580)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16FA0CB0)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FA13A0)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16FA04E0)
#define RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16FA0440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarGlobalBuffConfigExcelTable_TypeDefinitionIndex = 11682;

	class AvatarGlobalBuffConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarGlobalBuffConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x20350);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AvatarGlobalBuffConfigRow*>** StaticGet__MazeBuffIDToConfigMapping()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AvatarGlobalBuffConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarGlobalBuffConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x20358);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarGlobalBuffConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x20360);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarGlobalBuffConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarGlobalBuffConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarGlobalBuffConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x20368);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarGlobalBuffConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8800);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarGlobalBuffConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8801);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarGlobalBuffConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarGlobalBuffConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarGlobalBuffConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarGlobalBuffConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarGlobalBuffConfigRow* GetData(::System::UInt32 AvatarID, ::System::UInt32 SkillID)
		{
			return ((::RPG::GameCore::AvatarGlobalBuffConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_GETDATA_OFFSET))(AvatarID, SkillID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarGlobalBuffConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarGlobalBuffConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}

		static ::RPG::GameCore::AvatarGlobalBuffConfigRow* GetByMazeBuffID(::System::UInt32 mazebuffID)
		{
			return ((::RPG::GameCore::AvatarGlobalBuffConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_GETBYMAZEBUFFID_OFFSET))(mazebuffID);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARGLOBALBUFFCONFIGEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
