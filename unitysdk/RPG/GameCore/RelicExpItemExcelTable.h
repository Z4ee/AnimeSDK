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

#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19ABF630)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19ABF4C0)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19ABF1B0)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19ABF460)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19ABF7C0)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19ABF230)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19ABF800)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19ABF9D0)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19ABFB90)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19ABFF00)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19ABF930)
#define RPG_GAMECORE_RELICEXPITEMEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19ABF890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicExpItemExcelTable_TypeDefinitionIndex = 13914;

	class RelicExpItemExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RelicExpItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x42BF0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicExpItemRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicExpItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(RelicExpItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x42BF8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RelicExpItemExcelTable_TypeDefinitionIndex)->GetStaticField(0x42C00);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RelicExpItemExcelTable_TypeDefinitionIndex)->GetStaticField(0xBE30);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RelicExpItemExcelTable_TypeDefinitionIndex)->GetStaticField(0xBE31);
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

		static ::RPG::GameCore::RelicExpItemRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RelicExpItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPITEMEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPITEMEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPITEMEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPITEMEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RelicExpItemRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicExpItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICEXPITEMEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
