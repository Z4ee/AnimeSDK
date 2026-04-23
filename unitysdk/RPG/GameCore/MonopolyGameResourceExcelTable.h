#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonopolyGameResourceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18B47A60)
#define RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18B47690)
#define RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18B475B0)
#define RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18B47630)
#define RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18B47BE0)
#define RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B47810)
#define RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18B47C20)
#define RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B47E00)
#define RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18B48020)
#define RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B48330)
#define RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18B47D60)
#define RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B47CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyGameResourceExcelTable_TypeDefinitionIndex = 11459;

	class MonopolyGameResourceExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyGameResourceExcelTable_TypeDefinitionIndex)->GetStaticField(0x3E560);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGameResourceRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGameResourceRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyGameResourceExcelTable_TypeDefinitionIndex)->GetStaticField(0x3E568);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyGameResourceExcelTable_TypeDefinitionIndex)->GetStaticField(0x3E570);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonopolyGameResourceExcelTable_TypeDefinitionIndex)->GetStaticField(0xDF20);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonopolyGameResourceExcelTable_TypeDefinitionIndex)->GetStaticField(0xDF21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGameResourceRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGameResourceRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGameResourceRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGameResourceRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyGameResourceRow* GetData(::System::UInt32 ResourceID)
		{
			return ((::RPG::GameCore::MonopolyGameResourceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE_GETDATA_OFFSET))(ResourceID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonopolyGameResourceRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyGameResourceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGAMERESOURCEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
