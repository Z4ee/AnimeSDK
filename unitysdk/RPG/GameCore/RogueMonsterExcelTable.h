#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMonsterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19B9DD90)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19B9DC20)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19B9D910)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19B9DBC0)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19B9DEE0)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19B9D990)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19B9DF20)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B9E0F0)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19B9E2E0)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B9E600)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19B9E050)
#define RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19B9DFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMonsterExcelTable_TypeDefinitionIndex = 13953;

	class RogueMonsterExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A210);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A218);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x1A220);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueMonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x87D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueMonsterExcelTable_TypeDefinitionIndex)->GetStaticField(0x87D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMonsterRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueMonsterRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueMonsterRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueMonsterRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMonsterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMONSTEREXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
