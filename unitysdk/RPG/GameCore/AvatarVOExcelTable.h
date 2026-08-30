#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarVORow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARVOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1CE5B9F0)
#define RPG_GAMECORE_AVATARVOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CE5B880)
#define RPG_GAMECORE_AVATARVOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1CE5B570)
#define RPG_GAMECORE_AVATARVOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1CE5B820)
#define RPG_GAMECORE_AVATARVOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1CE5BB60)
#define RPG_GAMECORE_AVATARVOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CE5B5F0)
#define RPG_GAMECORE_AVATARVOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1CE5BBA0)
#define RPG_GAMECORE_AVATARVOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE5BD70)
#define RPG_GAMECORE_AVATARVOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CE5C0D0)
#define RPG_GAMECORE_AVATARVOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE5C3F0)
#define RPG_GAMECORE_AVATARVOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1CE5BCD0)
#define RPG_GAMECORE_AVATARVOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1CE5BC30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarVOExcelTable_TypeDefinitionIndex = 12661;

	class AvatarVOExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarVOExcelTable_TypeDefinitionIndex)->GetStaticField(0xA8F0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarVOExcelTable_TypeDefinitionIndex)->GetStaticField(0xA8F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarVORow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarVORow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarVOExcelTable_TypeDefinitionIndex)->GetStaticField(0xA900);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarVOExcelTable_TypeDefinitionIndex)->GetStaticField(0x24D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarVOExcelTable_TypeDefinitionIndex)->GetStaticField(0x24D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARVOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarVORow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarVORow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARVOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARVOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarVORow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarVORow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARVOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarVORow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::AvatarVORow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARVOEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARVOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARVOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARVOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARVOEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARVOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARVOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarVORow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarVORow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARVOEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
