#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RelicExpItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1758F480)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1758F2D0)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1758EFA0)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1758F270)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1758F650)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1758F020)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1758F690)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1758F870)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1758FA30)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1758FD90)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1758F7D0)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1758F730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicExpItemExcelTable_TypeDefinitionIndex = 13369;

	class RelicExpItemExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RelicExpItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x31BC0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicExpItemRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicExpItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(RelicExpItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x31BC8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RelicExpItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x31BD0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RelicExpItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x10340);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RelicExpItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x10341);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPITEMEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicExpItemRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicExpItemRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPITEMEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPITEMEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicExpItemRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicExpItemRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPITEMEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RelicExpItemRow* GetData(::System::UInt32 ItemID)
		{
			return ((::RPG::GameCore::RelicExpItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPITEMEXCELTABLE_GETDATA_OFFSET))(ItemID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPITEMEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPITEMEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPITEMEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPITEMEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RelicExpItemRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicExpItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPITEMEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
