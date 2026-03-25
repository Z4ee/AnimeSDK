#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueImmerseLevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1760F980)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1760F7D0)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1760F4A0)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1760F770)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1760FB50)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1760F520)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1760FB90)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1760FD70)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x176102E0)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17610640)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1760FCD0)
#define RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1760FC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueImmerseLevelExcelTable_TypeDefinitionIndex = 13575;

	class RogueImmerseLevelExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueImmerseLevelRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueImmerseLevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueImmerseLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x350F0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueImmerseLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x350F8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueImmerseLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x35100);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueImmerseLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x10A30);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueImmerseLevelExcelTable_TypeDefinitionIndex)->GetStaticField(0x10A31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueImmerseLevelRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueImmerseLevelRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueImmerseLevelRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueImmerseLevelRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueImmerseLevelRow* GetData(::System::UInt32 Level)
		{
			return ((::RPG::GameCore::RogueImmerseLevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_GETDATA_OFFSET))(Level);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueImmerseLevelRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueImmerseLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEIMMERSELEVELEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
