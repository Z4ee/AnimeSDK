#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SpaceZooQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17755680)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17755500)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x177551D0)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x177554A0)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17755850)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17755250)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17755890)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17755A70)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17755CD0)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17755FE0)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x177559D0)
#define RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17755930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooQuestExcelTable_TypeDefinitionIndex = 11306;

	class SpaceZooQuestExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x11230);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooQuestRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooQuestRow*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x11238);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x11240);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x5370);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooQuestExcelTable_TypeDefinitionIndex)->GetStaticField(0x5371);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooQuestRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooQuestRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooQuestRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooQuestRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpaceZooQuestRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::SpaceZooQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpaceZooQuestRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpaceZooQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOQUESTEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
