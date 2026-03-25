#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateReijuType.h"
#include "unitysdk/System/Object.h"

class Class_1_0AA599FA215F584D;
class Class_1_1244640A944D6EC9;
class Class_1_F9FBCC956DFCF137_9;
namespace System { class String; }

#define RPG_CLIENT_FATEREIJUDATAITEM_CREATEOWNED_OFFSET UNITYSDK_OFFSET(0x9699590)
#define RPG_CLIENT_FATEREIJUDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x9690980)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET_EXTRAEFFECTS_OFFSET UNITYSDK_OFFSET(0x9691100)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET_REIJUEFFECTSIMPLE_OFFSET UNITYSDK_OFFSET(0x9699E90)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET_REIJUEFFECT_OFFSET UNITYSDK_OFFSET(0x9699D20)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET_REIJUID_OFFSET UNITYSDK_OFFSET(0x9699CF0)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET_REIJUNAME_OFFSET UNITYSDK_OFFSET(0x9690B80)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET_REIJUTYPE_OFFSET UNITYSDK_OFFSET(0x9690A50)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET_REIJUUNIQUEID_OFFSET UNITYSDK_OFFSET(0x9699D00)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET_SPAWNINDEXARRAY_OFFSET UNITYSDK_OFFSET(0x9690C50)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET_UNLOCKDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x969A000)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9699AD0)
#define RPG_CLIENT_FATEREIJUDATAITEM_SET_REIJUUNIQUEID_OFFSET UNITYSDK_OFFSET(0x9699D10)
#define RPG_CLIENT_FATEREIJUDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9699580)
#define RPG_CLIENT_FATEREIJUDATAITEM__GETTEXTPARAMLIST_OFFSET UNITYSDK_OFFSET(0x9699B30)

namespace RPG::Client
{
	inline static constexpr unsigned int FateReijuDataItem_TypeDefinitionIndex = 52035;

	class FateReijuDataItem : public ::System::Object
	{
	public:
		::Class_1_1244640A944D6EC9* _DynamicParamTextData; // 0x10
		::System::UInt32 _ReijuUniqueID_k__BackingField; // 0x18
		::System::UInt32 _ReijuID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 reijuID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUDATAITEM__CTOR_OFFSET))(this, reijuID);
		}

		static ::RPG::Client::FateReijuDataItem* Create(::System::UInt32 reijuID)
		{
			return ((::RPG::Client::FateReijuDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUDATAITEM_CREATE_OFFSET))(reijuID);
		}

		static ::RPG::Client::FateReijuDataItem* CreateOwned(::System::UInt32 reijuID, ::System::UInt32 uniqueID, ::Class_1_F9FBCC956DFCF137_9* factory)
		{
			return ((::RPG::Client::FateReijuDataItem*(*)(::System::UInt32, ::System::UInt32, ::Class_1_F9FBCC956DFCF137_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUDATAITEM_CREATEOWNED_OFFSET))(reijuID, uniqueID, factory);
		}

		::Il2CppArray<::System::Object*>* _GetTextParamList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUDATAITEM__GETTEXTPARAMLIST_OFFSET))(this);
		}

		::System::UInt32 get_ReijuID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUDATAITEM_GET_REIJUID_OFFSET))(this);
		}

		::System::UInt32 get_ReijuUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUDATAITEM_GET_REIJUUNIQUEID_OFFSET))(this);
		}

		::System::Void set_ReijuUniqueID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUDATAITEM_SET_REIJUUNIQUEID_OFFSET))(this, value);
		}

		::RPG::GameCore::FateReijuType get_ReijuType()
		{
			return ((::RPG::GameCore::FateReijuType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUDATAITEM_GET_REIJUTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_ReijuName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUDATAITEM_GET_REIJUNAME_OFFSET))(this);
		}

		::System::String* get_ReijuEffect()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUDATAITEM_GET_REIJUEFFECT_OFFSET))(this);
		}

		::System::String* get_ReijuEffectSimple()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUDATAITEM_GET_REIJUEFFECTSIMPLE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffects()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUDATAITEM_GET_EXTRAEFFECTS_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_SpawnIndexArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUDATAITEM_GET_SPAWNINDEXARRAY_OFFSET))(this);
		}

		::System::UInt32 get_UnlockDifficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUDATAITEM_GET_UNLOCKDIFFICULTY_OFFSET))(this);
		}

		::Class_1_0AA599FA215F584D* get__Row()
		{
			return ((::Class_1_0AA599FA215F584D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUDATAITEM_GET__ROW_OFFSET))(this);
		}
	};
}
