#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/RPG/GameCore/RogueWorkbenchFuncType.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_132;
namespace RPG::GameCore { class RogueTournWorkbenchFuncRow; }

#define RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_GET_DISABLEFUNCDESC_OFFSET UNITYSDK_OFFSET(0xE05A020)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_GET_FUNCDESC_OFFSET UNITYSDK_OFFSET(0xE059FA0)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_GET_FUNCID_OFFSET UNITYSDK_OFFSET(0xE059E90)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_GET_FUNCNAME_OFFSET UNITYSDK_OFFSET(0xE059F20)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_GET_FUNCTYPE_OFFSET UNITYSDK_OFFSET(0xE059ED0)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0xE059EB0)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_SET_FUNCID_OFFSET UNITYSDK_OFFSET(0xE059EA0)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0xE059EC0)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xE059910)
#define RPG_CLIENT_ROGUEWORKBENCHFUNCITEM__GETROW_OFFSET UNITYSDK_OFFSET(0xE05A130)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueWorkBenchFuncItem_TypeDefinitionIndex = 67342;

	class RogueWorkBenchFuncItem : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournWorkbenchFuncRow* _Row; // 0x10
		::System::UInt32 _FuncID_k__BackingField; // 0x18
		::System::Boolean _IsValid_k__BackingField; // 0x1C

		::System::Void _ctor(::Class_1_21C7581DFE99F091_132* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_132*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCITEM__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_FuncID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_GET_FUNCID_OFFSET))(this);
		}

		::System::Void set_FuncID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_SET_FUNCID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_SET_ISVALID_OFFSET))(this, a1);
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

		::RPG::Client::TextID get_DisableFuncDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCITEM_GET_DISABLEFUNCDESC_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournWorkbenchFuncRow* _GetRow(::System::UInt32 a1, ::RPG::GameCore::RogueSubMode a2)
		{
			return ((::RPG::GameCore::RogueTournWorkbenchFuncRow*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEWORKBENCHFUNCITEM__GETROW_OFFSET))(this, a1, a2);
		}
	};
}
