#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateTraitMode.h"
#include "unitysdk/RPG/GameCore/FateTraitTag.h"
#include "unitysdk/System/Object.h"

class Class_1_0B49B342EAF65A7A;
class Class_1_1244640A944D6EC9;
class Class_1_F9FBCC956DFCF137_9;
namespace RPG::Client { class FateBuffTraitInfo; }
namespace System { class String; }

#define RPG_CLIENT_FATETRAITBUFFITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x96A5620)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_EFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0x96A5C70)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x96A5E10)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_MODE_OFFSET UNITYSDK_OFFSET(0x96A5DD0)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_REQUIRECOUNT_OFFSET UNITYSDK_OFFSET(0x96A5DF0)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_ROW_OFFSET UNITYSDK_OFFSET(0x96A5A00)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_SIMPLEEFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0x96A5D10)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_TAG_OFFSET UNITYSDK_OFFSET(0x96A5DB0)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_TRAITBUFFID_OFFSET UNITYSDK_OFFSET(0x96A5C50)
#define RPG_CLIENT_FATETRAITBUFFITEM_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0x96A5B40)
#define RPG_CLIENT_FATETRAITBUFFITEM_SET_TRAITBUFFID_OFFSET UNITYSDK_OFFSET(0x96A5C60)
#define RPG_CLIENT_FATETRAITBUFFITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x96A5610)
#define RPG_CLIENT_FATETRAITBUFFITEM__GETTEXTPARAMLIST_OFFSET UNITYSDK_OFFSET(0x96A5B60)

namespace RPG::Client
{
	inline static constexpr unsigned int FateTraitBuffItem_TypeDefinitionIndex = 51923;

	class FateTraitBuffItem : public ::System::Object
	{
	public:
		::RPG::Client::FateBuffTraitInfo* _BelongTraitInfo; // 0x10
		::Class_1_1244640A944D6EC9* _DynamicParamTextData; // 0x18
		::Class_1_0B49B342EAF65A7A* _Row; // 0x20
		::System::UInt32 _TraitBuffID_k__BackingField; // 0x28

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM__CTOR_OFFSET))(this, id);
		}

		static ::RPG::Client::FateTraitBuffItem* Create(::System::UInt32 id, ::RPG::Client::FateBuffTraitInfo* belongTraitInfo, ::Class_1_F9FBCC956DFCF137_9* factory)
		{
			return ((::RPG::Client::FateTraitBuffItem*(*)(::System::UInt32, ::RPG::Client::FateBuffTraitInfo*, ::Class_1_F9FBCC956DFCF137_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_CREATE_OFFSET))(id, belongTraitInfo, factory);
		}

		::Il2CppArray<::System::Object*>* _GetTextParamList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM__GETTEXTPARAMLIST_OFFSET))(this);
		}

		::System::UInt32 get_TraitBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_TRAITBUFFID_OFFSET))(this);
		}

		::System::Void set_TraitBuffID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_SET_TRAITBUFFID_OFFSET))(this, value);
		}

		::Class_1_0B49B342EAF65A7A* get_Row()
		{
			return ((::Class_1_0B49B342EAF65A7A*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITBUFFITEM_GET_ROW_OFFSET))(this);
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
