#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LoadingImageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LOADINGIMAGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18A73D50)
#define RPG_GAMECORE_LOADINGIMAGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18A73BA0)
#define RPG_GAMECORE_LOADINGIMAGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18A73870)
#define RPG_GAMECORE_LOADINGIMAGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18A73B40)
#define RPG_GAMECORE_LOADINGIMAGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18A73ED0)
#define RPG_GAMECORE_LOADINGIMAGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A738F0)
#define RPG_GAMECORE_LOADINGIMAGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18A73F10)
#define RPG_GAMECORE_LOADINGIMAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A740F0)
#define RPG_GAMECORE_LOADINGIMAGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18A74240)
#define RPG_GAMECORE_LOADINGIMAGEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A74550)
#define RPG_GAMECORE_LOADINGIMAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18A74050)
#define RPG_GAMECORE_LOADINGIMAGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18A73FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingImageExcelTable_TypeDefinitionIndex = 13243;

	class LoadingImageExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingImageRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingImageRow*>**)Il2CppClass::FromTypeDefinitionIndex(LoadingImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x315E0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(LoadingImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x315E8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LoadingImageExcelTable_TypeDefinitionIndex)->GetStaticField(0x315F0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LoadingImageExcelTable_TypeDefinitionIndex)->GetStaticField(0xC600);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(LoadingImageExcelTable_TypeDefinitionIndex)->GetStaticField(0xC601);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGIMAGEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingImageRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingImageRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGIMAGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGIMAGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingImageRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingImageRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGIMAGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::LoadingImageRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::LoadingImageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGIMAGEEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGIMAGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGIMAGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGIMAGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGIMAGEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGIMAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGIMAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::LoadingImageRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::LoadingImageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGIMAGEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
