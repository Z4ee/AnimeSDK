#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightStageRouteConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x189D9E80)
#define RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x189D9CD0)
#define RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x189D99A0)
#define RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x189D9C70)
#define RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x189DA0D0)
#define RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x189D9A20)
#define RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x189DA110)
#define RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x189DA2F0)
#define RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x189DA700)
#define RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x189DAAD0)
#define RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x189DA250)
#define RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x189DA1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightStageRouteConfigExcelTable_TypeDefinitionIndex = 12883;

	class GridFightStageRouteConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStageRouteConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C8F0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStageRouteConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C8F8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageRouteConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageRouteConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightStageRouteConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3C900);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(GridFightStageRouteConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xD630);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GridFightStageRouteConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xD631);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageRouteConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageRouteConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageRouteConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageRouteConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GridFightStageRouteConfigRow* GetData(::System::UInt32 ID, ::System::UInt32 ChapterID, ::System::UInt32 SectionID)
		{
			return ((::RPG::GameCore::GridFightStageRouteConfigRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE_GETDATA_OFFSET))(ID, ChapterID, SectionID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GridFightStageRouteConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightStageRouteConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGEROUTECONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
