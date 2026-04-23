#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarDemoGuideConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x186BC5F0)
#define RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x186BC440)
#define RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x186BC110)
#define RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x186BC3E0)
#define RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x186BC800)
#define RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x186BC190)
#define RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x186BC840)
#define RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x186BCA20)
#define RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x186BCC70)
#define RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x186BD020)
#define RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x186BC980)
#define RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x186BC8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDemoGuideConfigExcelTable_TypeDefinitionIndex = 12077;

	class AvatarDemoGuideConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoGuideConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoGuideConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDemoGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27B80);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDemoGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27B88);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarDemoGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x27B90);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarDemoGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xA810);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarDemoGuideConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xA811);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoGuideConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoGuideConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoGuideConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarDemoGuideConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarDemoGuideConfigRow* GetData(::System::UInt32 StageID, ::System::UInt32 Index)
		{
			return ((::RPG::GameCore::AvatarDemoGuideConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE_GETDATA_OFFSET))(StageID, Index);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarDemoGuideConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarDemoGuideConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOGUIDECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
