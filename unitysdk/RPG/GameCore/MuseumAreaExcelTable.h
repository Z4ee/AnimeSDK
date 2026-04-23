#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MuseumAreaRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MUSEUMAREAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18B6ACD0)
#define RPG_GAMECORE_MUSEUMAREAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18B6AB20)
#define RPG_GAMECORE_MUSEUMAREAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18B6A7F0)
#define RPG_GAMECORE_MUSEUMAREAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18B6AAC0)
#define RPG_GAMECORE_MUSEUMAREAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18B6AEA0)
#define RPG_GAMECORE_MUSEUMAREAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B6A870)
#define RPG_GAMECORE_MUSEUMAREAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18B6AEE0)
#define RPG_GAMECORE_MUSEUMAREAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B6B0C0)
#define RPG_GAMECORE_MUSEUMAREAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18B6B390)
#define RPG_GAMECORE_MUSEUMAREAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B6B6F0)
#define RPG_GAMECORE_MUSEUMAREAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18B6B020)
#define RPG_GAMECORE_MUSEUMAREAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B6AF80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumAreaExcelTable_TypeDefinitionIndex = 13476;

	class MuseumAreaExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaRow*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0x3FF20);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0x3FF28);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0x3FF30);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0xE5B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaExcelTable_TypeDefinitionIndex)->GetStaticField(0xE5B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MuseumAreaRow* GetData(::System::UInt32 AreaID, ::System::UInt32 Level)
		{
			return ((::RPG::GameCore::MuseumAreaRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAEXCELTABLE_GETDATA_OFFSET))(AreaID, Level);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MuseumAreaRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MuseumAreaRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
