#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyOverrideRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x194A21A0)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x194A2030)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x194A1D20)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x194A1FD0)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x194A2330)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x194A1DA0)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x194A2370)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x194A2540)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x194A27E0)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x194A2B50)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x194A24A0)
#define RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x194A2400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarPropertyOverrideExcelTable_TypeDefinitionIndex = 12108;

	class AvatarPropertyOverrideExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPropertyOverrideRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPropertyOverrideRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x47F0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x47F8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x4800);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A40);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarPropertyOverrideExcelTable_TypeDefinitionIndex)->GetStaticField(0x2A41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPropertyOverrideRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPropertyOverrideRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPropertyOverrideRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPropertyOverrideRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarPropertyOverrideRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarPropertyOverrideRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarPropertyOverrideRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarPropertyOverrideRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARPROPERTYOVERRIDEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
