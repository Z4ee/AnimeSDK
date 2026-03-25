#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AlleyGridRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x16F735F0)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16F73440)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x16F73110)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x16F733E0)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x16F737C0)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F73190)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x16F73800)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F739E0)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x16F73D90)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F740F0)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x16F73940)
#define RPG_GAMECORE_ALLEYGRIDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x16F738A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyGridExcelTable_TypeDefinitionIndex = 11489;

	class AlleyGridExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGridRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGridRow*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyGridExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F0A0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyGridExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F0A8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(AlleyGridExcelTable_TypeDefinitionIndex)->GetStaticField(0x1F0B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(AlleyGridExcelTable_TypeDefinitionIndex)->GetStaticField(0x8260);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AlleyGridExcelTable_TypeDefinitionIndex)->GetStaticField(0x8261);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGridRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGridRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGridRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AlleyGridRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::AlleyGridRow* GetData(::System::UInt32 GridID)
		{
			return ((::RPG::GameCore::AlleyGridRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_GETDATA_OFFSET))(GridID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::AlleyGridRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::AlleyGridRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYGRIDEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
