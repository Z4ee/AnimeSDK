#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IUI3DController; }
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }

#define RPG_CLIENT_UI3DTRANSITION_EXECUTEEXIT_1_OFFSET UNITYSDK_OFFSET(0xE3285B0)
#define RPG_CLIENT_UI3DTRANSITION_EXECUTEEXIT_OFFSET UNITYSDK_OFFSET(0xE327DD0)
#define RPG_CLIENT_UI3DTRANSITION_EXECUTESHOW_1_OFFSET UNITYSDK_OFFSET(0xE328240)
#define RPG_CLIENT_UI3DTRANSITION_EXECUTESHOW_OFFSET UNITYSDK_OFFSET(0xE327500)
#define RPG_CLIENT_UI3DTRANSITION__CLOSEABOVETRANSFER_OFFSET UNITYSDK_OFFSET(0xE328B50)
#define RPG_CLIENT_UI3DTRANSITION__CLOSEBELOWTRANSFER_OFFSET UNITYSDK_OFFSET(0xE328DB0)
#define RPG_CLIENT_UI3DTRANSITION__RESOLVED_OFFSET UNITYSDK_OFFSET(0xE327B50)
#define RPG_CLIENT_UI3DTRANSITION__SHOWABOVETRANSFER_OFFSET UNITYSDK_OFFSET(0xE327C80)
#define RPG_CLIENT_UI3DTRANSITION__SHOWBELOWTRANSFER_OFFSET UNITYSDK_OFFSET(0xE327D10)
#define RPG_CLIENT_UI3DTRANSITION__WAITFOR_OFFSET UNITYSDK_OFFSET(0xE328870)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DTransition_TypeDefinitionIndex = 72925;

	class UI3DTransition : public ::System::Object
	{
	public:
		// static const ::System::Single DEFAULT_TRANSFER_DURATION; // 0x0

		static ::RPG::Client::Promises::Promise* ExecuteShow(::RPG::Client::IUI3DController* a1, ::RPG::Client::IUI3DController* a2, ::RPG::Client::UIController* a3, ::RPG::Client::UIController* a4)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::RPG::Client::IUI3DController*, ::RPG::Client::IUI3DController*, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION_EXECUTESHOW_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::Promises::Promise* ExecuteExit(::RPG::Client::IUI3DController* a1, ::RPG::Client::IUI3DController* a2, ::RPG::Client::UIController* a3, ::RPG::Client::UIController* a4)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::RPG::Client::IUI3DController*, ::RPG::Client::IUI3DController*, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION_EXECUTEEXIT_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::Promises::Promise* ExecuteShow_1(::RPG::Client::IUI3DController* a1, ::RPG::Client::IUI3DController* a2)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::RPG::Client::IUI3DController*, ::RPG::Client::IUI3DController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION_EXECUTESHOW_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Promises::Promise* ExecuteExit_1(::RPG::Client::IUI3DController* a1, ::RPG::Client::IUI3DController* a2)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::RPG::Client::IUI3DController*, ::RPG::Client::IUI3DController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION_EXECUTEEXIT_1_OFFSET))(a1, a2);
		}

		static ::RPG::Client::Promises::Promise* _Resolved()
		{
			return ((::RPG::Client::Promises::Promise*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION__RESOLVED_OFFSET))();
		}

		static ::RPG::Client::Promises::Promise* _WaitFor(::System::Single a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION__WAITFOR_OFFSET))(a1);
		}

		static ::System::Void _ShowAboveTransfer(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION__SHOWABOVETRANSFER_OFFSET))(a1);
		}

		static ::System::Void _CloseAboveTransfer(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION__CLOSEABOVETRANSFER_OFFSET))(a1);
		}

		static ::System::Void _ShowBelowTransfer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION__SHOWBELOWTRANSFER_OFFSET))();
		}

		static ::System::Void _CloseBelowTransfer(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DTRANSITION__CLOSEBELOWTRANSFER_OFFSET))(a1);
		}
	};
}
