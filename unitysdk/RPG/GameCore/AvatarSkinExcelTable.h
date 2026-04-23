#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarSkinRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARSKINEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x186DEE10)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x186DEC90)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x186DE960)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x186DEC30)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x186DEF90)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x186DE9E0)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x186DEFD0)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x186DF1B0)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x186DFDB0)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x186E00D0)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x186DF110)
#define RPG_GAMECORE_AVATARSKINEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x186DF070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkinExcelTable_TypeDefinitionIndex = 12011;

	class AvatarSkinExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkinExcelTable_TypeDefinitionIndex)->GetStaticField(0x29500);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkinExcelTable_TypeDefinitionIndex)->GetStaticField(0x29508);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkinRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkinRow*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarSkinExcelTable_TypeDefinitionIndex)->GetStaticField(0x29510);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AvatarSkinExcelTable_TypeDefinitionIndex)->GetStaticField(0xAFE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AvatarSkinExcelTable_TypeDefinitionIndex)->GetStaticField(0xAFE1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkinRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkinRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkinRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarSkinRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AvatarSkinRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::AvatarSkinRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AvatarSkinRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AvatarSkinRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
