#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyGridRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C55D700)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C55D360)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CBD5250)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CBD52D0)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C55D890)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C55D4D0)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C55D8D0)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C55DAA0)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C55DE50)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C55E1C0)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C55DA00)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C55D960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyGridExcelTable_TypeDefinitionIndex = 12505;

	class AlleyGridExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyGridExcelTable_TypeDefinitionIndex)->GetStaticField(0x16C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGridRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGridRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyGridExcelTable_TypeDefinitionIndex)->GetStaticField(0x16C8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyGridExcelTable_TypeDefinitionIndex)->GetStaticField(0x16D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleyGridExcelTable_TypeDefinitionIndex)->GetStaticField(0x940);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleyGridExcelTable_TypeDefinitionIndex)->GetStaticField(0x941);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGridRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGridRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGridRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGridRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyGridRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AlleyGridRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyGridRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyGridRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
