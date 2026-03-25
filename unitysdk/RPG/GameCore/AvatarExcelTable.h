#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATAREXCELTABLE_ASZLINQENUMERABLE_OFFSET UNITYSDK_OFFSET(0x16F9D5F0)
#define RPG_GAMECORE_AVATAREXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F96790)
#define RPG_GAMECORE_AVATAREXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F97090)
#define RPG_GAMECORE_AVATAREXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F9D2C0)
#define RPG_GAMECORE_AVATAREXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F9D590)
#define RPG_GAMECORE_AVATAREXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F9D6B0)
#define RPG_GAMECORE_AVATAREXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F9D340)
#define RPG_GAMECORE_AVATAREXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F9D6F0)
#define RPG_GAMECORE_AVATAREXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F9D8D0)
#define RPG_GAMECORE_AVATAREXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F9E900)
#define RPG_GAMECORE_AVATAREXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F9EC20)
#define RPG_GAMECORE_AVATAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F9D830)
#define RPG_GAMECORE_AVATAREXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F9D790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarExcelTable_TypeDefinitionIndex = 11595;

	class AvatarExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x202A0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x202A8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x202B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x87B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarExcelTable_TypeDefinitionIndex)->GetStaticField(0x87B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarRow*>, ::RPG::GameCore::AvatarRow*> AsZLinqEnumerable()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarRow*>, ::RPG::GameCore::AvatarRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXCELTABLE_ASZLINQENUMERABLE_OFFSET))();
		}

		static ::RPG::GameCore::AvatarRow* GetData(::System::UInt32 AvatarID)
		{
			return ((::RPG::GameCore::AvatarRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXCELTABLE_GETDATA_OFFSET))(AvatarID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATAREXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
