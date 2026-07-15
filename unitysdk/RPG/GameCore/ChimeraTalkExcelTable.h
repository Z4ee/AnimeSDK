#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraTalkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CHIMERATALKEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C24D280)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C24D110)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C24CE00)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C24D0B0)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C24D410)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C24CE80)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C24D450)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C24D620)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C24D840)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C24DBB0)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C24D580)
#define RPG_GAMECORE_CHIMERATALKEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C24D4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTalkExcelTable_TypeDefinitionIndex = 12548;

	class ChimeraTalkExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x10B60);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x10B68);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTalkRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTalkRow*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x10B70);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ChimeraTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x59A0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ChimeraTalkExcelTable_TypeDefinitionIndex)->GetStaticField(0x59A1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTalkRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTalkRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTalkRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraTalkRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ChimeraTalkRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ChimeraTalkRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ChimeraTalkRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChimeraTalkRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
