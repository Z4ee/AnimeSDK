#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OpenUIPageTaskBase_1.h"

namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::GameCore { class OpenFiveDimWindowStagePage; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_3C4A61C4B2F57B98_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1618E7A0)
#define CLASS_3_3C4A61C4B2F57B98_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1618E3C0)
#define CLASS_3_3C4A61C4B2F57B98__CTOR_OFFSET UNITYSDK_OFFSET(0x1618E310)
#define CLASS_3_3C4A61C4B2F57B98__ONPAGECANCELCLOSE_OFFSET UNITYSDK_OFFSET(0x1618E610)
#define CLASS_3_3C4A61C4B2F57B98__ONPAGECONFIRMCLOSE_OFFSET UNITYSDK_OFFSET(0x1618E6C0)

inline static constexpr unsigned int Class_3_3C4A61C4B2F57B98_TypeDefinitionIndex = 53159;

class Class_3_3C4A61C4B2F57B98 : public ::RPG::GameCore::OpenUIPageTaskBase_1<::RPG::GameCore::OpenFiveDimWindowStagePage*>
{
public:
	::RPG::Client::FiveDimGameInstance* FLMODBLFAGD; // 0x40

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
};
