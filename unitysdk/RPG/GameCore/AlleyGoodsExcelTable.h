#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyGoodsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x186951A0)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18694FF0)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18694CC0)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18694F90)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18695320)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18694D40)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18695360)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18695540)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x186957F0)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18695B00)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x186954A0)
#define RPG_GAMECORE_ALLEYGOODSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18695400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyGoodsExcelTable_TypeDefinitionIndex = 11915;

	class AlleyGoodsExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyGoodsExcelTable_TypeDefinitionIndex)->GetStaticField(0x254C0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyGoodsExcelTable_TypeDefinitionIndex)->GetStaticField(0x254C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGoodsRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGoodsRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyGoodsExcelTable_TypeDefinitionIndex)->GetStaticField(0x254D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleyGoodsExcelTable_TypeDefinitionIndex)->GetStaticField(0x9C90);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleyGoodsExcelTable_TypeDefinitionIndex)->GetStaticField(0x9C91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGoodsRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGoodsRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGoodsRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGoodsRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyGoodsRow* GetData(::System::UInt32 GoodsID)
		{
			return ((::RPG::GameCore::AlleyGoodsRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE_GETDATA_OFFSET))(GoodsID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyGoodsRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyGoodsRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGOODSEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
