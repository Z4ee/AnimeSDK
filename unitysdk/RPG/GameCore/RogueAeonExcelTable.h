#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueAeonRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEAEONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18CE9400)
#define RPG_GAMECORE_ROGUEAEONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18CE9250)
#define RPG_GAMECORE_ROGUEAEONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18CE8F20)
#define RPG_GAMECORE_ROGUEAEONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18CE91F0)
#define RPG_GAMECORE_ROGUEAEONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18CE9610)
#define RPG_GAMECORE_ROGUEAEONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18CE8FA0)
#define RPG_GAMECORE_ROGUEAEONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18CE9650)
#define RPG_GAMECORE_ROGUEAEONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CE9830)
#define RPG_GAMECORE_ROGUEAEONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18CE9C90)
#define RPG_GAMECORE_ROGUEAEONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CEA040)
#define RPG_GAMECORE_ROGUEAEONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18CE9790)
#define RPG_GAMECORE_ROGUEAEONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18CE96F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAeonExcelTable_TypeDefinitionIndex = 14028;

	class RogueAeonExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x41E70);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x41E78);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0x41E80);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0xEC80);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueAeonExcelTable_TypeDefinitionIndex)->GetStaticField(0xEC81);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueAeonRow* GetData(::System::UInt32 AeonID, ::System::UInt32 RogueVersion)
		{
			return ((::RPG::GameCore::RogueAeonRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONEXCELTABLE_GETDATA_OFFSET))(AeonID, RogueVersion);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueAeonRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueAeonRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
