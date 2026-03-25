#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/Struct_2_FD0368737CBF6F9B_4.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ExtraEffectRow; }
namespace RPG::GameCore { class RogueTournKeywordRow; }
namespace System { class String; }

#define RPG_CLIENT_ROGUEKEYWORDDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA311D20)
#define RPG_CLIENT_ROGUEKEYWORDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA311BF0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_BUFFCOUNTBUFFTYPEID_OFFSET UNITYSDK_OFFSET(0xA3120A0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_DESCALL_OFFSET UNITYSDK_OFFSET(0xA312200)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_EXTRADESC_OFFSET UNITYSDK_OFFSET(0xA3123E0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_EXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0xA311FC0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_EXTRANAME_OFFSET UNITYSDK_OFFSET(0xA3123B0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xA311E70)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA311DC0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_ISACTIVATE_OFFSET UNITYSDK_OFFSET(0xA311DE0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_ISEXTRAEFFECTAVAILABLE_OFFSET UNITYSDK_OFFSET(0xA3122D0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_KEYWORDEXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0xA312030)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_MAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xA311E00)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_MAZEBUFFLIST_OFFSET UNITYSDK_OFFSET(0xA311EE0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA312110)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET_ROGUEFORMULALIST_OFFSET UNITYSDK_OFFSET(0xA311F50)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET__EXTRAEFFECTROW_OFFSET UNITYSDK_OFFSET(0xA312140)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET__KEYWORDEXTRAEFFECTROW_OFFSET UNITYSDK_OFFSET(0xA3122F0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xA311CC0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0xA311DD0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_SET_ISACTIVATE_OFFSET UNITYSDK_OFFSET(0xA311DF0)
#define RPG_CLIENT_ROGUEKEYWORDDATA_SYNCACTIVATE_OFFSET UNITYSDK_OFFSET(0xA311D70)
#define RPG_CLIENT_ROGUEKEYWORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA311CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueKeywordData_TypeDefinitionIndex = 54777;

	class RogueKeywordData : public ::System::Object
	{
	public:
		::System::Boolean _IsActivate_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RogueKeywordData* Create(::System::UInt32 id, ::System::Boolean IsActivate)
		{
			return ((::RPG::Client::RogueKeywordData*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_CREATE_OFFSET))(id, IsActivate);
		}

		static ::RPG::Client::RogueKeywordData* Create_1(::Struct_2_FD0368737CBF6F9B_4 identifier, ::System::Boolean isActivate)
		{
			return ((::RPG::Client::RogueKeywordData*(*)(::Struct_2_FD0368737CBF6F9B_4, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_CREATE_1_OFFSET))(identifier, isActivate);
		}

		::System::Void SyncActivate(::System::Boolean isActivate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_SYNCACTIVATE_OFFSET))(this, isActivate);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_SET_ID_OFFSET))(this, value);
		}

		::System::Boolean get_IsActivate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_ISACTIVATE_OFFSET))(this);
		}

		::System::Void set_IsActivate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_SET_ISACTIVATE_OFFSET))(this, value);
		}

		::System::UInt32 get_MazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_MAZEBUFFID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_ICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_MazeBuffList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_MAZEBUFFLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RogueFormulaList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_ROGUEFORMULALIST_OFFSET))(this);
		}

		::System::UInt32 get_ExtraEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_EXTRAEFFECTID_OFFSET))(this);
		}

		::System::UInt32 get_KeywordExtraEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_KEYWORDEXTRAEFFECTID_OFFSET))(this);
		}

		::System::UInt32 get_BuffCountBuffTypeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_BUFFCOUNTBUFFTYPEID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_DescAll()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_DESCALL_OFFSET))(this);
		}

		::System::Boolean get_IsExtraEffectAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_ISEXTRAEFFECTAVAILABLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_ExtraName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_EXTRANAME_OFFSET))(this);
		}

		::System::String* get_ExtraDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET_EXTRADESC_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournKeywordRow* get__Row()
		{
			return ((::RPG::GameCore::RogueTournKeywordRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET__ROW_OFFSET))(this);
		}

		::RPG::GameCore::ExtraEffectRow* get__ExtraEffectRow()
		{
			return ((::RPG::GameCore::ExtraEffectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET__EXTRAEFFECTROW_OFFSET))(this);
		}

		::RPG::GameCore::ExtraEffectRow* get__KeywordExtraEffectRow()
		{
			return ((::RPG::GameCore::ExtraEffectRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEKEYWORDDATA_GET__KEYWORDEXTRAEFFECTROW_OFFSET))(this);
		}
	};
}
