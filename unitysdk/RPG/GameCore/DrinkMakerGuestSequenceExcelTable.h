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

#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D043610)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D0434A0)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D043190)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D043440)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D043760)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D043210)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D0437A0)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D043970)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D043B70)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D043E90)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D0438D0)
#define RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D043830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DrinkMakerGuestSequenceExcelTable_TypeDefinitionIndex = 13075;

	class DrinkMakerGuestSequenceExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerGuestSequenceExcelTable_TypeDefinitionIndex)->GetStaticField(0x25060);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestSequenceRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::DrinkMakerGuestSequenceRow*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerGuestSequenceExcelTable_TypeDefinitionIndex)->GetStaticField(0x25068);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerGuestSequenceExcelTable_TypeDefinitionIndex)->GetStaticField(0x25070);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerGuestSequenceExcelTable_TypeDefinitionIndex)->GetStaticField(0xB140);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(DrinkMakerGuestSequenceExcelTable_TypeDefinitionIndex)->GetStaticField(0xB141);
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

		static ::RPG::GameCore::DrinkMakerGuestSequenceRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::DrinkMakerGuestSequenceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::DrinkMakerGuestSequenceRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::DrinkMakerGuestSequenceRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRINKMAKERGUESTSEQUENCEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
