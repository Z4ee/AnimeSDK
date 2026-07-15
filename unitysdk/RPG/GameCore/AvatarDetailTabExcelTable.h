#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarDetailTabRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1A075030)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1A074EC0)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1A074BB0)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1A074E60)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1A0751C0)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1A074C30)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1A075200)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A0753D0)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1A0755A0)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A075910)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1A075330)
#define RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1A075290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDetailTabExcelTable_TypeDefinitionIndex = 12287;

	class AvatarDetailTabExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDetailTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x221C0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDetailTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x221C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDetailTabRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDetailTabRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDetailTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x221D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarDetailTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x6BE0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarDetailTabExcelTable_TypeDefinitionIndex)->GetStaticField(0x6BE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDetailTabRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDetailTabRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDetailTabRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDetailTabRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarDetailTabRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarDetailTabRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarDetailTabRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarDetailTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDETAILTABEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
