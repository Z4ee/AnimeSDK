#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EvolveBuildMonsteCollectionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x171ACF40)
#define RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x171ACD90)
#define RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x171ACA60)
#define RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x171ACD30)
#define RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x171AD110)
#define RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x171ACAE0)
#define RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x171AD150)
#define RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x171AD330)
#define RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x171AD4A0)
#define RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x171AD800)
#define RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x171AD290)
#define RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x171AD1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildMonsteCollectionExcelTable_TypeDefinitionIndex = 10660;

	class EvolveBuildMonsteCollectionExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildMonsteCollectionExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C9D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildMonsteCollectionRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildMonsteCollectionRow*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildMonsteCollectionExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C9D8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildMonsteCollectionExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C9E0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildMonsteCollectionExcelTable_TypeDefinitionIndex)->GetStaticField(0xED70);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(EvolveBuildMonsteCollectionExcelTable_TypeDefinitionIndex)->GetStaticField(0xED71);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildMonsteCollectionRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildMonsteCollectionRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildMonsteCollectionRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildMonsteCollectionRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::EvolveBuildMonsteCollectionRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::EvolveBuildMonsteCollectionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::EvolveBuildMonsteCollectionRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::EvolveBuildMonsteCollectionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDMONSTECOLLECTIONEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
