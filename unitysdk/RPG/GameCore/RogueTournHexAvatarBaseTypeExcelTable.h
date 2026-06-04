#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournHexAvatarBaseTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19BCA570)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19BCA400)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19BCA0F0)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19BCA3A0)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19BCA700)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19BCA170)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19BCA740)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BCA910)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19BCAB00)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BCAE70)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19BCA870)
#define RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19BCA7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournHexAvatarBaseTypeExcelTable_TypeDefinitionIndex = 14297;

	class RogueTournHexAvatarBaseTypeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournHexAvatarBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F850);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexAvatarBaseTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexAvatarBaseTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournHexAvatarBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F858);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournHexAvatarBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F860);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTournHexAvatarBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x9F20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueTournHexAvatarBaseTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x9F21);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexAvatarBaseTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexAvatarBaseTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexAvatarBaseTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexAvatarBaseTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournHexAvatarBaseTypeRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueTournHexAvatarBaseTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTournHexAvatarBaseTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournHexAvatarBaseTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXAVATARBASETYPEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
