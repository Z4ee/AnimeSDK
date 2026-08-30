#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RelicMainAffixAvatarValueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1DB862A0)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DB86130)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1DB85E20)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1DB860D0)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1DB86430)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB85EA0)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB86470)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB86640)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1DB86A70)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DB86DE0)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1DB865A0)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1DB86500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicMainAffixAvatarValueExcelTable_TypeDefinitionIndex = 10864;

	class RelicMainAffixAvatarValueExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RelicMainAffixAvatarValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x84B0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixAvatarValueRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixAvatarValueRow*>**)Il2CppClass::FromTypeDefinitionIndex(RelicMainAffixAvatarValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x84B8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RelicMainAffixAvatarValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x84C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RelicMainAffixAvatarValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x22F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RelicMainAffixAvatarValueExcelTable_TypeDefinitionIndex)->GetStaticField(0x22F1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixAvatarValueRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixAvatarValueRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixAvatarValueRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RelicMainAffixAvatarValueRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RelicMainAffixAvatarValueRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RelicMainAffixAvatarValueRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RelicMainAffixAvatarValueRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RelicMainAffixAvatarValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
