#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarDemoGuideGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F9A400)
#define RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F9A250)
#define RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F99F20)
#define RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F9A1F0)
#define RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F9A5D0)
#define RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F99FA0)
#define RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F9A610)
#define RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F9A7F0)
#define RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F9A9D0)
#define RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F9AD30)
#define RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F9A750)
#define RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F9A6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDemoGuideGroupExcelTable_TypeDefinitionIndex = 11670;

	class AvatarDemoGuideGroupExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDemoGuideGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x201C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoGuideGroupRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoGuideGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDemoGuideGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x201C8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDemoGuideGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x201D0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarDemoGuideGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x8730);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarDemoGuideGroupExcelTable_TypeDefinitionIndex)->GetStaticField(0x8731);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoGuideGroupRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoGuideGroupRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoGuideGroupRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoGuideGroupRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarDemoGuideGroupRow* GetData(::System::UInt32 AvatarID)
		{
			return ((::RPG::GameCore::AvatarDemoGuideGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE_GETDATA_OFFSET))(AvatarID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarDemoGuideGroupRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarDemoGuideGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDEGROUPEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
