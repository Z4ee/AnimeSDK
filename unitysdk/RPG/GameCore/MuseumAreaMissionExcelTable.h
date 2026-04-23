#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MuseumAreaMissionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18B6BD10)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18B6BB60)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18B6B830)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18B6BB00)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18B6BF20)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B6B8B0)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18B6BF60)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B6C140)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18B6C390)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B6C740)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18B6C0A0)
#define RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B6C000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumAreaMissionExcelTable_TypeDefinitionIndex = 13478;

	class MuseumAreaMissionExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x3FF50);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaMissionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaMissionRow*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x3FF58);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0x3FF60);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0xE5C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MuseumAreaMissionExcelTable_TypeDefinitionIndex)->GetStaticField(0xE5C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaMissionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaMissionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaMissionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MuseumAreaMissionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MuseumAreaMissionRow* GetData(::System::UInt32 AreaID, ::System::UInt32 CollectItemNum)
		{
			return ((::RPG::GameCore::MuseumAreaMissionRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_GETDATA_OFFSET))(AreaID, CollectItemNum);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MuseumAreaMissionRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MuseumAreaMissionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREAMISSIONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
