#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class WorldLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_WORLDLEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1790EFC0)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1790EE40)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1790EB10)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1790EDE0)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1790F140)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1790EB90)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1790F180)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1790F360)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1790F6B0)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1790F9C0)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1790F2C0)
#define RPG_GAMECORE_WORLDLEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1790F220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WorldLevelExcelTable_TypeDefinitionIndex = 13241;

	class WorldLevelExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(WorldLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F480);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WorldLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F488);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WorldLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WorldLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(WorldLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F490);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(WorldLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x83A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WorldLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x83A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WorldLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WorldLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WorldLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::WorldLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::WorldLevelRow* GetData(::System::UInt32 Level)
		{
			return ((::RPG::GameCore::WorldLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE_GETDATA_OFFSET))(Level);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::WorldLevelRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::WorldLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WORLDLEVELEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
