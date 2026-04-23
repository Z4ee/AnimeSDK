#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DrinkMakerGuestSequenceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18888A50)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x188888A0)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18888570)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18888840)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18888BD0)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x188885F0)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18888C10)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18888DF0)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18888FF0)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18889300)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18888D50)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18888CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerGuestSequenceExcelTable_TypeDefinitionIndex = 12459;

	class DrinkMakerGuestSequenceExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestSequenceRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestSequenceRow*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerGuestSequenceExcelTable_TypeDefinitionIndex)->GetStaticField(0x33E80);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerGuestSequenceExcelTable_TypeDefinitionIndex)->GetStaticField(0x33E88);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerGuestSequenceExcelTable_TypeDefinitionIndex)->GetStaticField(0x33E90);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerGuestSequenceExcelTable_TypeDefinitionIndex)->GetStaticField(0xCAD0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerGuestSequenceExcelTable_TypeDefinitionIndex)->GetStaticField(0xCAD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestSequenceRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestSequenceRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestSequenceRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestSequenceRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::DrinkMakerGuestSequenceRow* GetData(::System::UInt32 SequenceID)
		{
			return ((::RPG::GameCore::DrinkMakerGuestSequenceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_GETDATA_OFFSET))(SequenceID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DrinkMakerGuestSequenceRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerGuestSequenceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
