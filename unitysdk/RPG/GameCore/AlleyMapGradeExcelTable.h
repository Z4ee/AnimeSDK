#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyMapGradeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1946D4E0)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1946D3B0)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1946D0A0)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1946D350)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1946D630)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1946D120)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1946D670)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1946D840)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1946DA40)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1946DD60)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1946D7A0)
#define RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1946D700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyMapGradeExcelTable_TypeDefinitionIndex = 12026;

	class AlleyMapGradeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyMapGradeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2AB0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapGradeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapGradeRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyMapGradeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2AB8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyMapGradeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2AC0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleyMapGradeExcelTable_TypeDefinitionIndex)->GetStaticField(0x10F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleyMapGradeExcelTable_TypeDefinitionIndex)->GetStaticField(0x10F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapGradeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapGradeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapGradeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyMapGradeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyMapGradeRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AlleyMapGradeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyMapGradeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyMapGradeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYMAPGRADEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
