#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OpenUIPageTaskBase_1.h"

namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class OpenFiveDimWindowStagePage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_3C4A61C4B2F57B98_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10CA4780)
#define CLASS_3_3C4A61C4B2F57B98_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10CA4310)
#define CLASS_3_3C4A61C4B2F57B98__CTOR_OFFSET UNITYSDK_OFFSET(0x10CA4260)
#define CLASS_3_3C4A61C4B2F57B98__ONPAGECANCELCLOSE_OFFSET UNITYSDK_OFFSET(0x10CA4560)
#define CLASS_3_3C4A61C4B2F57B98__ONPAGECONFIRMCLOSE_OFFSET UNITYSDK_OFFSET(0x10CA4610)
#define CLASS_3_3C4A61C4B2F57B98___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10CA48D0)
#define CLASS_3_3C4A61C4B2F57B98___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10CA4800)
#define CLASS_3_3C4A61C4B2F57B98___IFIXBASEPROXY__ONPAGECANCELCLOSE_OFFSET UNITYSDK_OFFSET(0x10CA4810)
#define CLASS_3_3C4A61C4B2F57B98___IFIXBASEPROXY__ONPAGECONFIRMCLOSE_OFFSET UNITYSDK_OFFSET(0x10CA48C0)

inline static constexpr unsigned int Class_3_3C4A61C4B2F57B98_TypeDefinitionIndex = 42793;

class Class_3_3C4A61C4B2F57B98 : public ::RPG::GameCore::OpenUIPageTaskBase_1<::RPG::GameCore::OpenFiveDimWindowStagePage*>
{
public:
	::RPG::Client::FiveDimGameInstance* Field_3_0; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenFiveDimWindowStagePage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenFiveDimWindowStagePage*))((::PBYTE)hIl2Cpp + CLASS_3_3C4A61C4B2F57B98__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C4A61C4B2F57B98_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void _OnPageCancelClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C4A61C4B2F57B98__ONPAGECANCELCLOSE_OFFSET))(this);
	}

	::System::Void _OnPageConfirmClose(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_3C4A61C4B2F57B98__ONPAGECONFIRMCLOSE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C4A61C4B2F57B98_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C4A61C4B2F57B98___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnPageCancelClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C4A61C4B2F57B98___IFIXBASEPROXY__ONPAGECANCELCLOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnPageConfirmClose(::System::Object* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_3C4A61C4B2F57B98___IFIXBASEPROXY__ONPAGECONFIRMCLOSE_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C4A61C4B2F57B98___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
