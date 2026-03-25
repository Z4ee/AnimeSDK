#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/SpaceZooChannelType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SpaceZooChannelConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17751380)
#define RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x177511D0)
#define RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17750EA0)
#define RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17751170)
#define RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17751510)
#define RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17750F20)
#define RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17751550)
#define RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17751730)
#define RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x177519A0)
#define RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17751CB0)
#define RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17751690)
#define RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x177515F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooChannelConfigExcelTable_TypeDefinitionIndex = 11287;

	class SpaceZooChannelConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooChannelConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooChannelConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooChannelConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x10DD0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooChannelConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x10DD8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SpaceZooChannelConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x10DE0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooChannelConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x52D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SpaceZooChannelConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x52D1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooChannelConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooChannelConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooChannelConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SpaceZooChannelConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SpaceZooChannelConfigRow* GetData(::RPG::GameCore::SpaceZooChannelType Channel)
		{
			return ((::RPG::GameCore::SpaceZooChannelConfigRow*(*)(::RPG::GameCore::SpaceZooChannelType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE_GETDATA_OFFSET))(Channel);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SpaceZooChannelConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::SpaceZooChannelConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPACEZOOCHANNELCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
