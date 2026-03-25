#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeliobusChallengePhaseRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1729C000)
#define RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1729BE80)
#define RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1729BB50)
#define RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1729BE20)
#define RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1729C1D0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1729BBD0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1729C210)
#define RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1729C3F0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1729C440)
#define RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1729C750)
#define RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1729C350)
#define RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1729C2B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusChallengePhaseExcelTable_TypeDefinitionIndex = 12600;

	class HeliobusChallengePhaseExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengePhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x237F0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengePhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x237F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengePhaseRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengePhaseRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengePhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x23800);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengePhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x9430);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengePhaseExcelTable_TypeDefinitionIndex)->GetStaticField(0x9431);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengePhaseRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengePhaseRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengePhaseRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengePhaseRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusChallengePhaseRow* GetData(::System::UInt32 ChallengePhaseID)
		{
			return ((::RPG::GameCore::HeliobusChallengePhaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE_GETDATA_OFFSET))(ChallengePhaseID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusChallengePhaseRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusChallengePhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEPHASEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
