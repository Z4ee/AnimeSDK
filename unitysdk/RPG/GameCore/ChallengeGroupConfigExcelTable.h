#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengeGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17059D60)
#define RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17059BE0)
#define RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x170598B0)
#define RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17059B80)
#define RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17059EE0)
#define RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17059930)
#define RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17059F20)
#define RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1705A100)
#define RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1705A620)
#define RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1705A930)
#define RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1705A060)
#define RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17059FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeGroupConfigExcelTable_TypeDefinitionIndex = 11819;

	class ChallengeGroupConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeGroupConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25BB0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeGroupConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeGroupConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeGroupConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25BB8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeGroupConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25BC0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ChallengeGroupConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC300);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChallengeGroupConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC301);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeGroupConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeGroupConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ChallengeGroupConfigRow* GetData(::System::UInt32 GroupID)
		{
			return ((::RPG::GameCore::ChallengeGroupConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE_GETDATA_OFFSET))(GroupID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ChallengeGroupConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeGroupConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
