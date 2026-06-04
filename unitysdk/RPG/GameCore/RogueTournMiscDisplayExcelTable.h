#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournMiscDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19BCDC70)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19BCDB00)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19BCD7F0)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19BCDAA0)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19BCDDC0)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19BCD870)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19BCDE00)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BCDFD0)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19BCE180)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BCE4A0)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19BCDF30)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19BCDE90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournMiscDisplayExcelTable_TypeDefinitionIndex = 14257;

	class RogueTournMiscDisplayExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiscDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x47A60);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiscDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x47A68);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiscDisplayRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiscDisplayRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiscDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x47A70);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiscDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0xD190);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiscDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0xD191);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiscDisplayRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiscDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiscDisplayRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiscDisplayRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournMiscDisplayRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournMiscDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTournMiscDisplayRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournMiscDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
