#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournMiscDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18D7A450)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18D7A2A0)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18D79F70)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18D7A240)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18D7A5D0)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D79FF0)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18D7A610)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D7A7F0)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18D7A9A0)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D7ACB0)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18D7A750)
#define RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18D7A6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournMiscDisplayExcelTable_TypeDefinitionIndex = 14198;

	class RogueTournMiscDisplayExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiscDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x48E60);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiscDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x48E68);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiscDisplayRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiscDisplayRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiscDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0x48E70);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiscDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0xF920);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueTournMiscDisplayExcelTable_TypeDefinitionIndex)->GetStaticField(0xF921);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiscDisplayRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiscDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiscDisplayRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournMiscDisplayRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueTournMiscDisplayRow* GetData(::System::UInt32 DisplayID)
		{
			return ((::RPG::GameCore::RogueTournMiscDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_GETDATA_OFFSET))(DisplayID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueTournMiscDisplayRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueTournMiscDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMISCDISPLAYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
