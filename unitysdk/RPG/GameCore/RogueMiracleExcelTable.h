#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMiracleRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_ASZLINQENUMERABLE_OFFSET UNITYSDK_OFFSET(0x1761BDA0)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1761BE60)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1761BBF0)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1761B8C0)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1761BB90)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1761BFE0)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1761B940)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1761C020)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1761C200)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1761C3D0)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1761C6E0)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1761C160)
#define RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1761C0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMiracleExcelTable_TypeDefinitionIndex = 13456;

	class RogueMiracleExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F4A0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F4A8);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F4B0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0xF4B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueMiracleExcelTable_TypeDefinitionIndex)->GetStaticField(0xF4B1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleRow*>, ::RPG::GameCore::RogueMiracleRow*> AsZLinqEnumerable()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMiracleRow*>, ::RPG::GameCore::RogueMiracleRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_ASZLINQENUMERABLE_OFFSET))();
		}

		static ::RPG::GameCore::RogueMiracleRow* GetData(::System::UInt32 MiracleID)
		{
			return ((::RPG::GameCore::RogueMiracleRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_GETDATA_OFFSET))(MiracleID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueMiracleRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueMiracleRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
