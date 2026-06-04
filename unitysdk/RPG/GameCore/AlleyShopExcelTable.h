#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyShopRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19471900)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x194717D0)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x194714C0)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19471770)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19471A90)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19471540)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19471AD0)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19471CA0)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19471EF0)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19472210)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19471C00)
#define RPG_GAMECORE_ALLEYSHOPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19471B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyShopExcelTable_TypeDefinitionIndex = 11987;

	class AlleyShopExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyShopExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BA0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyShopExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BA8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShopRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShopRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyShopExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BB0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleyShopExcelTable_TypeDefinitionIndex)->GetStaticField(0x1170);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleyShopExcelTable_TypeDefinitionIndex)->GetStaticField(0x1171);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShopRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShopRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShopRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyShopRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyShopRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AlleyShopRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyShopRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyShopRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHOPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
