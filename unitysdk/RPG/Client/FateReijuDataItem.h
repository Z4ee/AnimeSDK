#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateReijuType.h"
#include "unitysdk/System/Object.h"

class Class_1_0AA599FA215F584D;
class Class_1_32161F1E0F11BEF4;
class Class_1_F9FBCC956DFCF137_18;
namespace System { class String; }

#define RPG_CLIENT_FATEREIJUDATAITEM_CREATEOWNED_OFFSET UNITYSDK_OFFSET(0x1CA1E060)
#define RPG_CLIENT_FATEREIJUDATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x1CA1DFE0)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET_EXTRAEFFECTS_OFFSET UNITYSDK_OFFSET(0x1CA1EC70)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET_REIJUEFFECTSIMPLE_OFFSET UNITYSDK_OFFSET(0x1CA1EAF0)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET_REIJUEFFECT_OFFSET UNITYSDK_OFFSET(0x1CA1E970)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET_REIJUID_OFFSET UNITYSDK_OFFSET(0x1CA1E7C0)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET_REIJUNAME_OFFSET UNITYSDK_OFFSET(0x1CA1E890)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET_REIJUTYPE_OFFSET UNITYSDK_OFFSET(0x1CA1E7F0)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET_REIJUUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CA1E7D0)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET_SPAWNINDEXARRAY_OFFSET UNITYSDK_OFFSET(0x1CA1ED10)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET_UNLOCKDIFFICULTY_OFFSET UNITYSDK_OFFSET(0x1CA1EDB0)
#define RPG_CLIENT_FATEREIJUDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1CA1E5A0)
#define RPG_CLIENT_FATEREIJUDATAITEM_SET_REIJUUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1CA1E7E0)
#define RPG_CLIENT_FATEREIJUDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA1E050)
#define RPG_CLIENT_FATEREIJUDATAITEM__GETTEXTPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1CA1E600)

namespace RPG::Client
{
	inline static constexpr unsigned int FateReijuDataItem_TypeDefinitionIndex = 64180;

	class FateReijuDataItem : public ::System::Object
	{
	public:
		::Class_1_32161F1E0F11BEF4* _DynamicParamTextData; // 0x10
		::System::UInt32 _ReijuUniqueID_k__BackingField; // 0x18
		::System::UInt32 _ReijuID_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUDATAITEM__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateReijuDataItem* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::FateReijuDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUDATAITEM_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::FateReijuDataItem* CreateOwned(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_F9FBCC956DFCF137_18* a3)
		{
			return ((::RPG::Client::FateReijuDataItem*(*)(::System::UInt32, ::System::UInt32, ::Class_1_F9FBCC956DFCF137_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUDATAITEM_CREATEOWNED_OFFSET))(a1, a2, a3);
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

		::System::Void set_ReijuUniqueID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEREIJUDATAITEM_SET_REIJUUNIQUEID_OFFSET))(this, a1);
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
