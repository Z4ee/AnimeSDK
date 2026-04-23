#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournBuffTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE_ASZLINQENUMERABLE_OFFSET UNITYSDK_OFFSET(0x18D6CC30)
#define RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D6CCF0)
#define RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D6CA80)
#define RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D6C750)
#define RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D6CA20)
#define RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D6CE70)
#define RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D6C7D0)
#define RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D6CEB0)
#define RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D6D090)
#define RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D6D470)
#define RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D6D780)
#define RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D6CFF0)
#define RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D6CF50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuffTypeExcelTable_TypeDefinitionIndex = 14226;

	class RogueTournBuffTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuffTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x483D0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuffTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x483D8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuffTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x483E0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuffTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xF820);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuffTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xF821);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffTypeRow*>, ::RPG::GameCore::RogueTournBuffTypeRow*> AsZLinqEnumerable()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffTypeRow*>, ::RPG::GameCore::RogueTournBuffTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE_ASZLINQENUMERABLE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournBuffTypeRow* GetData(::System::UInt32 RogueBuffType)
		{
			return ((::RPG::GameCore::RogueTournBuffTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE_GETDATA_OFFSET))(RogueBuffType);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTournBuffTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournBuffTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFTYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
