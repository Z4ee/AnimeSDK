#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyOrderRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYORDEREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F77AB0)
#define RPG_GAMECORE_ALLEYORDEREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F77930)
#define RPG_GAMECORE_ALLEYORDEREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F77600)
#define RPG_GAMECORE_ALLEYORDEREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F778D0)
#define RPG_GAMECORE_ALLEYORDEREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F77C30)
#define RPG_GAMECORE_ALLEYORDEREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F77680)
#define RPG_GAMECORE_ALLEYORDEREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F77C70)
#define RPG_GAMECORE_ALLEYORDEREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F77E50)
#define RPG_GAMECORE_ALLEYORDEREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F78180)
#define RPG_GAMECORE_ALLEYORDEREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F78490)
#define RPG_GAMECORE_ALLEYORDEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F77DB0)
#define RPG_GAMECORE_ALLEYORDEREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F77D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyOrderExcelTable_TypeDefinitionIndex = 11516;

	class AlleyOrderExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyOrderRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyOrderRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F1B0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F1B8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F1C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleyOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x82A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleyOrderExcelTable_TypeDefinitionIndex)->GetStaticField(0x82A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYORDEREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyOrderRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyOrderRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYORDEREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYORDEREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyOrderRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyOrderRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYORDEREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyOrderRow* GetData(::System::UInt32 OrderID)
		{
			return ((::RPG::GameCore::AlleyOrderRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYORDEREXCELTABLE_GETDATA_OFFSET))(OrderID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYORDEREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYORDEREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYORDEREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYORDEREXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYORDEREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYORDEREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyOrderRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyOrderRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYORDEREXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
