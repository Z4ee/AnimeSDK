#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x198F0290)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x198F0160)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x198EFE50)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x198F0100)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x198F0430)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x198EFED0)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x198F0470)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x198F0640)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x198F0E10)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x198F1170)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x198F05A0)
#define RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x198F0500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeLevelExcelTable_TypeDefinitionIndex = 11386;

	class MatchThreeLevelExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B7A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B7A8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MatchThreeLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x2B7B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x9A80);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MatchThreeLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x9A81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MatchThreeLevelRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::MatchThreeLevelRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MatchThreeLevelRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MatchThreeLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCHTHREELEVELEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
