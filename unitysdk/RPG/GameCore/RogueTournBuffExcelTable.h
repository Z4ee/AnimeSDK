#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournBuffRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE_ASZLINQENUMERABLE_OFFSET UNITYSDK_OFFSET(0x18D6B8D0)
#define RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D6B990)
#define RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D6B750)
#define RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D6B420)
#define RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D6B6F0)
#define RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D6BB60)
#define RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D6B4A0)
#define RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D6BBA0)
#define RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D6BD80)
#define RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D6C0E0)
#define RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D6C440)
#define RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D6BCE0)
#define RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D6BC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuffExcelTable_TypeDefinitionIndex = 14222;

	class RogueTournBuffExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x48350);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x48358);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0x48360);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0xF810);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuffExcelTable_TypeDefinitionIndex)->GetStaticField(0xF811);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffRow*>, ::RPG::GameCore::RogueTournBuffRow*> AsZLinqEnumerable()
		{
			return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournBuffRow*>, ::RPG::GameCore::RogueTournBuffRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE_ASZLINQENUMERABLE_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournBuffRow* GetData(::System::UInt32 MazeBuffID, ::System::UInt32 MazeBuffLevel)
		{
			return ((::RPG::GameCore::RogueTournBuffRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE_GETDATA_OFFSET))(MazeBuffID, MazeBuffLevel);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTournBuffRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
