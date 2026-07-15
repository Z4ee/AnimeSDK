#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazePuzzleChallengeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1AF4CD30)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AF4CBC0)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1AF4C8B0)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1AF4CB60)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1AF4CEC0)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AF4C930)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1AF4CF00)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AF4D0D0)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1AF4D550)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF4D8C0)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1AF4D030)
#define RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AF4CF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazePuzzleChallengeExcelTable_TypeDefinitionIndex = 13510;

	class MazePuzzleChallengeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleChallengeExcelTable_TypeDefinitionIndex)->GetStaticField(0x406D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleChallengeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleChallengeRow*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleChallengeExcelTable_TypeDefinitionIndex)->GetStaticField(0x406D8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleChallengeExcelTable_TypeDefinitionIndex)->GetStaticField(0x406E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleChallengeExcelTable_TypeDefinitionIndex)->GetStaticField(0xACC0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MazePuzzleChallengeExcelTable_TypeDefinitionIndex)->GetStaticField(0xACC1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleChallengeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleChallengeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleChallengeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazePuzzleChallengeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MazePuzzleChallengeRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::MazePuzzleChallengeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MazePuzzleChallengeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::MazePuzzleChallengeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZEPUZZLECHALLENGEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
