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

#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19822B50)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19822A20)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19822710)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x198229C0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19822CE0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19822790)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19822D20)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19822EF0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x198230F0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19823410)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19822E50)
#define RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19822DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusChallengeGroupExcelTable_TypeDefinitionIndex = 13118;

	class HeliobusChallengeGroupExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x243C0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x243C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x243D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x91A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x91A1);
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

		static ::RPG::GameCore::HeliobusChallengeGroupRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeliobusChallengeGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusChallengeGroupRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusChallengeGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEGROUPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
