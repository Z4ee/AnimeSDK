#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCBossDecayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x175FA0A0)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x175F9EF0)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x175F9BC0)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x175F9E90)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x175FA270)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x175F9C40)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x175FA2B0)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x175FA490)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x175FA9D0)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x175FAD30)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x175FA3F0)
#define RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x175FA350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCBossDecayExcelTable_TypeDefinitionIndex = 13518;

	class RogueDLCBossDecayExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBossDecayExcelTable_TypeDefinitionIndex)->GetStaticField(0x34D10);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBossDecayExcelTable_TypeDefinitionIndex)->GetStaticField(0x34D18);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBossDecayRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBossDecayRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBossDecayExcelTable_TypeDefinitionIndex)->GetStaticField(0x34D20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBossDecayExcelTable_TypeDefinitionIndex)->GetStaticField(0x10880);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBossDecayExcelTable_TypeDefinitionIndex)->GetStaticField(0x10881);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBossDecayRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBossDecayRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBossDecayRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBossDecayRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCBossDecayRow* GetData(::System::UInt32 BossDecayID)
		{
			return ((::RPG::GameCore::RogueDLCBossDecayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_GETDATA_OFFSET))(BossDecayID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCBossDecayRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCBossDecayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBOSSDECAYEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
