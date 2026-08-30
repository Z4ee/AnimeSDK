#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class InteractRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INTERACTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D21EEC0)
#define RPG_GAMECORE_INTERACTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D21ED50)
#define RPG_GAMECORE_INTERACTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D21EA40)
#define RPG_GAMECORE_INTERACTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D21ECF0)
#define RPG_GAMECORE_INTERACTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D21F010)
#define RPG_GAMECORE_INTERACTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D21EAC0)
#define RPG_GAMECORE_INTERACTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D21F050)
#define RPG_GAMECORE_INTERACTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D21F220)
#define RPG_GAMECORE_INTERACTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D21F560)
#define RPG_GAMECORE_INTERACTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D21F880)
#define RPG_GAMECORE_INTERACTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D21F180)
#define RPG_GAMECORE_INTERACTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D21F0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InteractExcelTable_TypeDefinitionIndex = 14400;

	class InteractExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(InteractExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BBB0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InteractRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InteractRow*>**)Il2CppClass::FromTypeDefinitionIndex(InteractExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BBB8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InteractExcelTable_TypeDefinitionIndex)->GetStaticField(0x2BBC0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InteractExcelTable_TypeDefinitionIndex)->GetStaticField(0xC9C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(InteractExcelTable_TypeDefinitionIndex)->GetStaticField(0xC9C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InteractRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InteractRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InteractRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InteractRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::InteractRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::InteractRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::InteractRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::InteractRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERACTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
