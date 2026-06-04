#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StrongChallengeStageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19CC7AD0)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19CC79A0)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19CC7690)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19CC7940)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19CC7C60)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19CC7710)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19CC7CA0)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19CC7E70)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19CC8620)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19CC8940)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19CC7DD0)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19CC7D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StrongChallengeStageExcelTable_TypeDefinitionIndex = 11823;

	class StrongChallengeStageExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeStageRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeStageRow*>**)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x4FC40);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x4FC48);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x4FC50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeStageExcelTable_TypeDefinitionIndex)->GetStaticField(0xF930);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(StrongChallengeStageExcelTable_TypeDefinitionIndex)->GetStaticField(0xF931);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeStageRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeStageRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeStageRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StrongChallengeStageRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::StrongChallengeStageRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::StrongChallengeStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::StrongChallengeStageRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StrongChallengeStageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
