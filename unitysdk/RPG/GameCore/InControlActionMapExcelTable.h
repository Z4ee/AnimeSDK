#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class InControlActionMapRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D782270)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D782140)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D781E30)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D7820E0)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D7823E0)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D781EB0)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D782420)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7825F0)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D782920)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D782C40)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D782550)
#define RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D7824B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InControlActionMapExcelTable_TypeDefinitionIndex = 13810;

	class InControlActionMapExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(InControlActionMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C100);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InControlActionMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C108);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlActionMapRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlActionMapRow*>**)Il2CppClass::FromTypeDefinitionIndex(InControlActionMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C110);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(InControlActionMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x8A10);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(InControlActionMapExcelTable_TypeDefinitionIndex)->GetStaticField(0x8A11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlActionMapRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlActionMapRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlActionMapRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::InControlActionMapRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::InControlActionMapRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::InControlActionMapRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::InControlActionMapRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::InControlActionMapRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INCONTROLACTIONMAPEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
