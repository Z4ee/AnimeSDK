#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_EXITMPGAMEPROGRESS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x169BBB40)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_EXITMPGAMEPROGRESS___C__CHECKBEFORECONTINUE_B__8_1_OFFSET UNITYSDK_OFFSET(0x169BBBB0)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_EXITMPGAMEPROGRESS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x169BBB80)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_EXITMPGAMEPROGRESS___C__TRYEXIT_B__7_0_OFFSET UNITYSDK_OFFSET(0x169BBB90)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_EXITMPGAMEPROGRESS___C__TRYEXIT_B__7_1_OFFSET UNITYSDK_OFFSET(0x169BBBA0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevel_MpResult_PopWindowController_ExitMpGameProgress___c_TypeDefinitionIndex = 68958;

	class UILevel_MpResult_PopWindowController_ExitMpGameProgress___c : public ::System::Object
	{
	public:
		static ::MoleMole::UILevel_MpResult_PopWindowController_ExitMpGameProgress___c** StaticGet___9()
		{
			return (::MoleMole::UILevel_MpResult_PopWindowController_ExitMpGameProgress___c**)Il2CppClass::FromTypeDefinitionIndex(UILevel_MpResult_PopWindowController_ExitMpGameProgress___c_TypeDefinitionIndex)->GetStaticField(0x46C90);
		}
		static ::System::Action** StaticGet___9__8_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILevel_MpResult_PopWindowController_ExitMpGameProgress___c_TypeDefinitionIndex)->GetStaticField(0x46C98);
		}
		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UILevel_MpResult_PopWindowController_ExitMpGameProgress___c_TypeDefinitionIndex)->GetStaticField(0x46CA0);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__7_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UILevel_MpResult_PopWindowController_ExitMpGameProgress___c_TypeDefinitionIndex)->GetStaticField(0x46CA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_EXITMPGAMEPROGRESS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_EXITMPGAMEPROGRESS___C__CTOR_OFFSET))(this);
		}

		::System::Void _TryExit_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_EXITMPGAMEPROGRESS___C__TRYEXIT_B__7_0_OFFSET))(this);
		}

		::System::Void _TryExit_b__7_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_EXITMPGAMEPROGRESS___C__TRYEXIT_B__7_1_OFFSET))(this, _);
		}

		::System::Void _CheckBeforeContinue_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_EXITMPGAMEPROGRESS___C__CHECKBEFORECONTINUE_B__8_1_OFFSET))(this);
		}
	};
}
