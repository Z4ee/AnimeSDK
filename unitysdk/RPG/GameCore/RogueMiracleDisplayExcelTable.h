#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMiracleDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1761AAF0)
#define RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1761A940)
#define RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1761A610)
#define RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1761A8E0)
#define RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1761AC70)
#define RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1761A690)
#define RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1761ACB0)
#define RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1761AE90)
#define RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1761B160)
#define RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1761B470)
#define RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1761ADF0)
#define RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1761AD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMiracleDisplayExcelTable_TypeDefinitionIndex = 13425;

	class RogueMiracleDisplayExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D6A0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D6A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleDisplayRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleDisplayRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x1D6B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x7850);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x7851);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleDisplayRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleDisplayRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleDisplayRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueMiracleDisplayRow* GetData(::System::UInt32 MiracleDisplayID)
		{
			return ((::RPG::GameCore::RogueMiracleDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE_GETDATA_OFFSET))(MiracleDisplayID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueMiracleDisplayRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMiracleDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEDISPLAYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
