#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengeStoryGroupExtraConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x195FFBE0)
#define RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x195FFA70)
#define RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x195FF760)
#define RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x195FFA10)
#define RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x195FFD30)
#define RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x195FF7E0)
#define RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x195FFD70)
#define RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x195FFF40)
#define RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x196002E0)
#define RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19600600)
#define RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x195FFEA0)
#define RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x195FFE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeStoryGroupExtraConfigExcelTable_TypeDefinitionIndex = 12362;

	class ChallengeStoryGroupExtraConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeStoryGroupExtraConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xB960);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeStoryGroupExtraConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xB968);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryGroupExtraConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryGroupExtraConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(ChallengeStoryGroupExtraConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xB970);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChallengeStoryGroupExtraConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x46B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ChallengeStoryGroupExtraConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x46B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryGroupExtraConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryGroupExtraConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryGroupExtraConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryGroupExtraConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ChallengeStoryGroupExtraConfigRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChallengeStoryGroupExtraConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ChallengeStoryGroupExtraConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeStoryGroupExtraConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGESTORYGROUPEXTRACONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
