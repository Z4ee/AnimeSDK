#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SpaceZooBagSlotsRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x177116F0)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17711540)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17711210)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x177114E0)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x177118C0)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17711290)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17711900)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17711AE0)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17711CB0)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17712010)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17711A40)
#define RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x177119A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooBagSlotsExcelTable_TypeDefinitionIndex = 11302;

	class SpaceZooBagSlotsExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooBagSlotsExcelTable_TypeDefinitionIndex)->GetStaticField(0xF950);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooBagSlotsRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooBagSlotsRow*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooBagSlotsExcelTable_TypeDefinitionIndex)->GetStaticField(0xF958);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooBagSlotsExcelTable_TypeDefinitionIndex)->GetStaticField(0xF960);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooBagSlotsExcelTable_TypeDefinitionIndex)->GetStaticField(0x5180);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooBagSlotsExcelTable_TypeDefinitionIndex)->GetStaticField(0x5181);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooBagSlotsRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooBagSlotsRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooBagSlotsRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooBagSlotsRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpaceZooBagSlotsRow* GetData(::System::UInt32 CatteryID)
		{
			return ((::RPG::GameCore::SpaceZooBagSlotsRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_GETDATA_OFFSET))(CatteryID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpaceZooBagSlotsRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpaceZooBagSlotsRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOBAGSLOTSEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
