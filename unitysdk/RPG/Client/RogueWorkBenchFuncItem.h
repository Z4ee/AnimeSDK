#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_91;
namespace RPG::GameCore { class RogueTournWorkbenchFuncRow; }

#define RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_GET_FUNCDESC_OFFSET UNITYSDK_OFFSET(0xA3F0270)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_GET_FUNCID_OFFSET UNITYSDK_OFFSET(0xA3F0160)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_GET_FUNCNAME_OFFSET UNITYSDK_OFFSET(0xA3F01F0)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_GET_FUNCTYPE_OFFSET UNITYSDK_OFFSET(0xA3F01A0)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA3F0180)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_SET_FUNCID_OFFSET UNITYSDK_OFFSET(0xA3F0170)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xA3F0190)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xA3EFC10)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCITEM__GETROW_OFFSET UNITYSDK_OFFSET(0xA3F02F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchFuncItem_TypeDefinitionIndex = 54857;

	class RogueWorkBenchFuncItem : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournWorkbenchFuncRow* _Row; // 0x10
		::System::Boolean _IsValid_k__BackingField; // 0x18
		::System::UInt32 _FuncID_k__BackingField; // 0x1C

		::System::Void _ctor(::Class_1_4CF8088A158DCE25_91* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_91*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCITEM__CTOR_OFFSET))(this, proto);
		}

		::System::UInt32 get_FuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_GET_FUNCID_OFFSET))(this);
		}

		::System::Void set_FuncID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_SET_FUNCID_OFFSET))(this, value);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_SET_ISVALID_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueWorkbenchFuncType get_FuncType()
		{
			return ((::RPG::GameCore::RogueWorkbenchFuncType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_GET_FUNCTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_FuncName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_GET_FUNCNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_FuncDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_GET_FUNCDESC_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournWorkbenchFuncRow* _GetRow(::System::UInt32 funcID, ::RPG::GameCore::RogueSubMode mode)
		{
			return ((::RPG::GameCore::RogueTournWorkbenchFuncRow*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCITEM__GETROW_OFFSET))(this, funcID, mode);
		}
	};
}
