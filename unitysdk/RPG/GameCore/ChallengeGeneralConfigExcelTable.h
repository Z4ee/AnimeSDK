#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengeGeneralConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17058DC0)
#define RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17058C40)
#define RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17058910)
#define RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17058BE0)
#define RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17058F50)
#define RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17058990)
#define RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17058F90)
#define RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17059170)
#define RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17059410)
#define RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17059720)
#define RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x170590D0)
#define RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17059030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeGeneralConfigExcelTable_TypeDefinitionIndex = 11803;

	class ChallengeGeneralConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeGeneralConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25B30);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeGeneralConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeGeneralConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeGeneralConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25B38);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeGeneralConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x25B40);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ChallengeGeneralConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC2D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChallengeGeneralConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xC2D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeGeneralConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeGeneralConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeGeneralConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeGeneralConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ChallengeGeneralConfigRow* GetData(::RPG::GameCore::ChallengeGroupType ChallengeGroupType)
		{
			return ((::RPG::GameCore::ChallengeGeneralConfigRow*(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE_GETDATA_OFFSET))(ChallengeGroupType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ChallengeGeneralConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeGeneralConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGENERALCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
