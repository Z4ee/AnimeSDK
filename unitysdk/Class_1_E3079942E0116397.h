#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IUI3DController; }
namespace RPG::Client { class LuaUI3DController; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class UI3DLinkRegistry; }
namespace RPG::Client { class UIController; }
namespace Sofa { class BaseSofaUI3DWindow; }
namespace Sofa { class BaseSofaWindow; }
namespace Sofa { class BaseSofaWindow_SofaUIController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E3079942E0116397_METHOD_1_1CF14504077C4370_OFFSET UNITYSDK_OFFSET(0x15815CB0)
#define CLASS_1_E3079942E0116397_METHOD_1_49913F3354539C30_OFFSET UNITYSDK_OFFSET(0x15816240)
#define CLASS_1_E3079942E0116397_METHOD_1_61184538D56CF7E3_OFFSET UNITYSDK_OFFSET(0x15815E20)
#define CLASS_1_E3079942E0116397_METHOD_1_6B87C4C2789399CA_OFFSET UNITYSDK_OFFSET(0x15815D30)
#define CLASS_1_E3079942E0116397_METHOD_1_ABA8551E23870683_OFFSET UNITYSDK_OFFSET(0x15816170)
#define CLASS_1_E3079942E0116397_METHOD_1_DC782C38C313AB8C_OFFSET UNITYSDK_OFFSET(0x15815E80)
#define CLASS_1_E3079942E0116397__CTOR_OFFSET UNITYSDK_OFFSET(0x158162F0)

inline static constexpr unsigned int Class_1_E3079942E0116397_TypeDefinitionIndex = 72910;

class Class_1_E3079942E0116397 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Sofa::BaseSofaWindow*, ::Sofa::BaseSofaUI3DWindow*>* ELBFCIAOFIO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3079942E0116397__CTOR_OFFSET))(this);
	}

	::RPG::Client::UI3DLinkRegistry* Method_1_1CF14504077C4370()
	{
		return ((::RPG::Client::UI3DLinkRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3079942E0116397_METHOD_1_1CF14504077C4370_OFFSET))(this);
	}

	::RPG::Client::IUI3DController* Method_1_6B87C4C2789399CA(::RPG::Client::UIController* a1)
	{
		return ((::RPG::Client::IUI3DController*(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + CLASS_1_E3079942E0116397_METHOD_1_6B87C4C2789399CA_OFFSET))(this, a1);
	}

	::System::Void Method_1_ABA8551E23870683(::Sofa::BaseSofaWindow* a1, ::Sofa::BaseSofaUI3DWindow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaWindow*, ::Sofa::BaseSofaUI3DWindow*))((::PBYTE)hIl2Cpp + CLASS_1_E3079942E0116397_METHOD_1_ABA8551E23870683_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_49913F3354539C30(::Sofa::BaseSofaWindow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaWindow*))((::PBYTE)hIl2Cpp + CLASS_1_E3079942E0116397_METHOD_1_49913F3354539C30_OFFSET))(this, a1);
	}

	::RPG::Client::LuaUI3DController* Method_1_61184538D56CF7E3(::RPG::Client::LuaUIController* a1)
	{
		return ((::RPG::Client::LuaUI3DController*(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + CLASS_1_E3079942E0116397_METHOD_1_61184538D56CF7E3_OFFSET))(this, a1);
	}

	::Sofa::BaseSofaUI3DWindow* Method_1_DC782C38C313AB8C(::Sofa::BaseSofaWindow_SofaUIController* a1)
	{
		return ((::Sofa::BaseSofaUI3DWindow*(*)(::PVOID, ::Sofa::BaseSofaWindow_SofaUIController*))((::PBYTE)hIl2Cpp + CLASS_1_E3079942E0116397_METHOD_1_DC782C38C313AB8C_OFFSET))(this, a1);
	}
};
