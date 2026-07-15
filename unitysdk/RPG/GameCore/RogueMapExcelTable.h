#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMapRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMAPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CFBB970)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CFBB800)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE_GETSTARTSITEID_OFFSET UNITYSDK_OFFSET(0x1CFBC3F0)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CFBB4F0)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CFBB7A0)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CFBBB40)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFBB570)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1CFBC840)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFBBB80)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CFBBD50)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CFBC050)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFBC8D0)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CFBBCB0)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CFBBC10)
#define RPG_GAMECORE_ROGUEMAPEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1CFBC470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMapExcelTable_TypeDefinitionIndex = 14123;

	class RogueMapExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x4E840);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x4E848);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMapRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMapRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x4E850);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>** StaticGet__MapToStartSite()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x4E858);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueMapExcelTable_TypeDefinitionIndex)->GetStaticField(0xE0F0);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueMapExcelTable_TypeDefinitionIndex)->GetStaticField(0xE0F1);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueMapExcelTable_TypeDefinitionIndex)->GetStaticField(0xE0F2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMapRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMapRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMapRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMapRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueMapRow* GetData(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::RogueMapRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueMapRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMapRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::UInt32 GetStartSiteID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE_GETSTARTSITEID_OFFSET))(a1);
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE_UNLOADALL_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAPEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}
	};
}
