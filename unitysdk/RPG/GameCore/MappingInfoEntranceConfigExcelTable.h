#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MappingInfoEntranceConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17384FA0)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17384DF0)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17384AC0)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17384D90)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17385120)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17384B40)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17385160)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17385340)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17385480)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17385790)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x173852A0)
#define RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17385200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MappingInfoEntranceConfigExcelTable_TypeDefinitionIndex = 11477;

	class MappingInfoEntranceConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MappingInfoEntranceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27130);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoEntranceConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoEntranceConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MappingInfoEntranceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27138);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MappingInfoEntranceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27140);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MappingInfoEntranceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCC10);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MappingInfoEntranceConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xCC11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoEntranceConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoEntranceConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoEntranceConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MappingInfoEntranceConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MappingInfoEntranceConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MappingInfoEntranceConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MappingInfoEntranceConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MappingInfoEntranceConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPINGINFOENTRANCECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
