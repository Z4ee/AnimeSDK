#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeliobusChallengeGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1729B110)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1729AF90)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1729AC60)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1729AF30)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1729B290)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1729ACE0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1729B2D0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1729B4B0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1729B6B0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1729B9C0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1729B410)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1729B370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusChallengeGroupExcelTable_TypeDefinitionIndex = 12598;

	class HeliobusChallengeGroupExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x23790);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x23798);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x237A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x9410);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x9411);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusChallengeGroupRow* GetData(::System::UInt32 ChallengeGroupID)
		{
			return ((::RPG::GameCore::HeliobusChallengeGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_GETDATA_OFFSET))(ChallengeGroupID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusChallengeGroupRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusChallengeGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
