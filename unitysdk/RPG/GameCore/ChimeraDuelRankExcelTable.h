#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelRankRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1E33A1D0)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E33A0A0)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1E339D90)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1E33A040)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1E33A320)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E339E10)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1E33A360)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E33A530)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1E33A7B0)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E33AAD0)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1E33A490)
#define RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1E33A3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelRankExcelTable_TypeDefinitionIndex = 11115;

	class ChimeraDuelRankExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelRankExcelTable_TypeDefinitionIndex)->GetStaticField(0x19BF0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelRankExcelTable_TypeDefinitionIndex)->GetStaticField(0x19BF8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRankRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRankRow*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelRankExcelTable_TypeDefinitionIndex)->GetStaticField(0x19C00);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelRankExcelTable_TypeDefinitionIndex)->GetStaticField(0x9310);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelRankExcelTable_TypeDefinitionIndex)->GetStaticField(0x9311);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRankRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRankRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRankRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelRankRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraDuelRankRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraDuelRankRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ChimeraDuelRankRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelRankRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELRANKEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
