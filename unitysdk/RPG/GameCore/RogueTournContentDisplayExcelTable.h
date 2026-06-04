#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournContentDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19BC4410)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19BC42A0)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19BC3F90)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19BC4240)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19BC4560)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19BC4010)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19BC45A0)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BC4770)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19BC4920)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BC4C40)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19BC46D0)
#define RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19BC4630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournContentDisplayExcelTable_TypeDefinitionIndex = 14316;

	class RogueTournContentDisplayExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentDisplayRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentDisplayRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournContentDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0xF770);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournContentDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0xF778);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournContentDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0xF780);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTournContentDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x4E10);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueTournContentDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x4E11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentDisplayRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentDisplayRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournContentDisplayRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournContentDisplayRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournContentDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTournContentDisplayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournContentDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCONTENTDISPLAYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
