#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class UIRedDotRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_UIREDDOTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19E32050)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19E31F20)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19E31E40)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19E31EC0)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19E31460)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19E314A0)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19E316D0)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19E318A0)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19E31B20)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E32200)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19E31800)
#define RPG_GAMECORE_UIREDDOTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19E31760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UIRedDotExcelTable_TypeDefinitionIndex = 14638;

	class UIRedDotExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIRedDotRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIRedDotRow*>**)Il2CppClass::FromTypeDefinitionIndex(UIRedDotExcelTable_TypeDefinitionIndex)->GetStaticField(0x82F0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(UIRedDotExcelTable_TypeDefinitionIndex)->GetStaticField(0x82F8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIRedDotExcelTable_TypeDefinitionIndex)->GetStaticField(0x8300);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(UIRedDotExcelTable_TypeDefinitionIndex)->GetStaticField(0x3860);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIRedDotExcelTable_TypeDefinitionIndex)->GetStaticField(0x3861);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::UIRedDotRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::UIRedDotRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIRedDotRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIRedDotRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIRedDotRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UIRedDotRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::UIRedDotRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::UIRedDotRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UIREDDOTEXCELTABLE_GETDATA_OFFSET))(a1);
		}
	};
}
