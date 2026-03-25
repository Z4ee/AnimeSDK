#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightDivisionStageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17257990)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x172577E0)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x172574B0)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17257780)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17257B60)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17257530)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17257BA0)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17257D80)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17258410)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17258770)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17257CE0)
#define RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17257C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDivisionStageExcelTable_TypeDefinitionIndex = 12444;

	class GridFightDivisionStageExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightDivisionStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x21060);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightDivisionStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x21068);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionStageRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionStageRow*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightDivisionStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x21070);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GridFightDivisionStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x8BD0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(GridFightDivisionStageExcelTable_TypeDefinitionIndex)->GetStaticField(0x8BD1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionStageRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionStageRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionStageRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightDivisionStageRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::GridFightDivisionStageRow* GetData(::System::UInt32 DivisionID)
		{
			return ((::RPG::GameCore::GridFightDivisionStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_GETDATA_OFFSET))(DivisionID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::GridFightDivisionStageRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::GridFightDivisionStageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDIVISIONSTAGEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
