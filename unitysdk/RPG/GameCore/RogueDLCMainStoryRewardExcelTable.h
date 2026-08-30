#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCMainStoryRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_ALLROWS_OFFSET UNITYSDK_OFFSET(0x1D3DE440)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D3DDB70)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D3DDA40)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D3DD730)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D3DD9E0)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D3DDD00)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3DD7B0)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_UNLOADALL_OFFSET UNITYSDK_OFFSET(0x1D3DE910)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3DDD40)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3DDF10)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D3DE120)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3DE9A0)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D3DDE70)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D3DDDD0)
#define RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__SAFEINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D3DE480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCMainStoryRewardExcelTable_TypeDefinitionIndex = 14631;

	class RogueDLCMainStoryRewardExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMainStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xD720);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMainStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xD728);
		}
		static ::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCMainStoryRewardRow*>** StaticGet__AllRows()
		{
			return (::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCMainStoryRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMainStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xD730);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMainStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xD738);
		}
		static ::System::Boolean* StaticGet__IsInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMainStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x4210);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMainStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x4211);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCMainStoryRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x4212);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryRewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCMainStoryRewardRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDLCMainStoryRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCMainStoryRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCMainStoryRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCMainStoryRewardRow*>* AllRows()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::RogueDLCMainStoryRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_ALLROWS_OFFSET))();
		}

		static ::System::Void _SafeInitialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE__SAFEINITIALIZE_OFFSET))();
		}

		static ::System::Void UnloadAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCMAINSTORYREWARDEXCELTABLE_UNLOADALL_OFFSET))();
		}
	};
}
