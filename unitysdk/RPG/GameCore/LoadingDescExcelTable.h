#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LoadingDescRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_LOADINGDESCEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17364B20)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x173649A0)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17364670)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17364940)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17364CF0)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x173646F0)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17364D30)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17364F10)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17365510)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17365820)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17364E70)
#define RPG_GAMECORE_LOADINGDESCEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17364DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LoadingDescExcelTable_TypeDefinitionIndex = 12771;

	class LoadingDescExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingDescRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingDescRow*>**)Il2CppClass::FromTypeDefinitionIndex(LoadingDescExcelTable_TypeDefinitionIndex)->GetStaticField(0x26860);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(LoadingDescExcelTable_TypeDefinitionIndex)->GetStaticField(0x26868);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(LoadingDescExcelTable_TypeDefinitionIndex)->GetStaticField(0x26870);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(LoadingDescExcelTable_TypeDefinitionIndex)->GetStaticField(0xC940);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(LoadingDescExcelTable_TypeDefinitionIndex)->GetStaticField(0xC941);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingDescRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingDescRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingDescRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingDescRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::LoadingDescRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::LoadingDescRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::LoadingDescRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::LoadingDescRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOADINGDESCEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
