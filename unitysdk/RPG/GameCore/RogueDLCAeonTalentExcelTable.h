#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCAeonTalentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C4B4F20)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C4B4DF0)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C4B4AE0)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C4B4D90)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C4B50B0)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4B4B60)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4B50F0)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C4B52C0)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C4B56D0)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4B59F0)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C4B5220)
#define RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4B5180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCAeonTalentExcelTable_TypeDefinitionIndex = 14165;

	class RogueDLCAeonTalentExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonTalentRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonTalentRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0x38BA0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0x38BA8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0x38BB0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0x97B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCAeonTalentExcelTable_TypeDefinitionIndex)->GetStaticField(0x97B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonTalentRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonTalentRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonTalentRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonTalentRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCAeonTalentRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDLCAeonTalentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCAeonTalentRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCAeonTalentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONTALENTEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
