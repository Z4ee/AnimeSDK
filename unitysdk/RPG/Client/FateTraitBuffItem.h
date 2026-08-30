#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateTraitMode.h"
#include "unitysdk/RPG/GameCore/FateTraitTag.h"
#include "unitysdk/System/Object.h"

class Class_1_0DA034EC77530334;
class Class_1_32161F1E0F11BEF4;
class Class_1_F9FBCC956DFCF137_18;
namespace RPG::Client { class FateBuffTraitInfo; }
namespace System { class String; }

#define RPG_CLIENT_FATETRAITBUFFITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xD03EE20)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_EFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0xD03F4F0)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xD03F750)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_MODE_OFFSET UNITYSDK_OFFSET(0xD03F690)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_REQUIRECOUNT_OFFSET UNITYSDK_OFFSET(0xD03F6F0)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_ROW_OFFSET UNITYSDK_OFFSET(0xD03F240)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_SIMPLEEFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0xD03F590)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_TAG_OFFSET UNITYSDK_OFFSET(0xD03F630)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_TRAITBUFFID_OFFSET UNITYSDK_OFFSET(0xD03F4D0)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0xD03F380)
#define RPG_CLIENT_FATETRAITBUFFITEM_SET_TRAITBUFFID_OFFSET UNITYSDK_OFFSET(0xD03F4E0)
#define RPG_CLIENT_FATETRAITBUFFITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD03EE10)
#define RPG_CLIENT_FATETRAITBUFFITEM__GETTEXTPARAMLIST_OFFSET UNITYSDK_OFFSET(0xD03F3E0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateTraitBuffItem_TypeDefinitionIndex = 64068;

	class FateTraitBuffItem : public ::System::Object
	{
	public:
		::Class_1_0DA034EC77530334* _Row; // 0x10
		::RPG::Client::FateBuffTraitInfo* _BelongTraitInfo; // 0x18
		::Class_1_32161F1E0F11BEF4* _DynamicParamTextData; // 0x20
		::System::UInt32 _TraitBuffID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateTraitBuffItem* Create(::System::UInt32 a1, ::RPG::Client::FateBuffTraitInfo* a2, ::Class_1_F9FBCC956DFCF137_18* a3)
		{
			return ((::RPG::Client::FateTraitBuffItem*(*)(::System::UInt32, ::RPG::Client::FateBuffTraitInfo*, ::Class_1_F9FBCC956DFCF137_18*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_CREATE_OFFSET))(a1, a2, a3);
		}

		::Il2CppArray<::System::Object*>* _GetTextParamList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM__GETTEXTPARAMLIST_OFFSET))(this);
		}

		::System::UInt32 get_TraitBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_TRAITBUFFID_OFFSET))(this);
		}

		::System::Void set_TraitBuffID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_SET_TRAITBUFFID_OFFSET))(this, a1);
		}

		::Class_1_0DA034EC77530334* get_Row()
		{
			return ((::Class_1_0DA034EC77530334*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_TRAITID_OFFSET))(this);
		}

		::System::String* get_EffectDescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_EFFECTDESCTEXT_OFFSET))(this);
		}

		::System::String* get_SimpleEffectDescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_SIMPLEEFFECTDESCTEXT_OFFSET))(this);
		}

		::RPG::GameCore::FateTraitTag get_Tag()
		{
			return ((::RPG::GameCore::FateTraitTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_TAG_OFFSET))(this);
		}

		::RPG::GameCore::FateTraitMode get_Mode()
		{
			return ((::RPG::GameCore::FateTraitMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_MODE_OFFSET))(this);
		}

		::System::UInt32 get_RequireCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_REQUIRECOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_ISACTIVE_OFFSET))(this);
		}
	};
}
