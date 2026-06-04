#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeliobusChallengeRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19825840)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19825710)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19825400)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x198256B0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x198259D0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19825480)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19825A10)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19825BE0)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19825E60)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19826180)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19825B40)
#define RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19825AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusChallengeRewardExcelTable_TypeDefinitionIndex = 13124;

	class HeliobusChallengeRewardExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x7980);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x7988);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x7990);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x3690);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(HeliobusChallengeRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x3691);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeRewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeRewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeliobusChallengeRewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::HeliobusChallengeRewardRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::HeliobusChallengeRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::HeliobusChallengeRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::HeliobusChallengeRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HELIOBUSCHALLENGEREWARDEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
