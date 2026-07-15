#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"

namespace RPG::GameCore { class EventManager; }
namespace System { class Object; }

#define CLASS_2_24222339AD802068_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15EE32F0)
#define CLASS_2_24222339AD802068_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15EE33C0)
#define CLASS_2_24222339AD802068_METHOD_2_709E9C02EF9B7181_OFFSET UNITYSDK_OFFSET(0x15EE30E0)
#define CLASS_2_24222339AD802068_METHOD_2_7A74CBCA024E5DDB_OFFSET UNITYSDK_OFFSET(0x15EE3090)
#define CLASS_2_24222339AD802068_METHOD_2_974A70E8019154E7_OFFSET UNITYSDK_OFFSET(0x15EE31F0)
#define CLASS_2_24222339AD802068__CTOR_OFFSET UNITYSDK_OFFSET(0x15EE2F60)
#define CLASS_2_24222339AD802068__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x15EE2FB0)
#define CLASS_2_24222339AD802068__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x15EE3040)

inline static constexpr unsigned int Class_2_24222339AD802068_TypeDefinitionIndex = 68410;

class Class_2_24222339AD802068 : public ::RPG::Client::UIController
{
public:
	::RPG::GameCore::EventManager* Field_2_0; // 0x180

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068__CTOR_OFFSET))(this);
	}

	::System::Void _CustomBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068__CUSTOMBINDVIEW_OFFSET))(this);
	}

	::System::Void _UnBindView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068__UNBINDVIEW_OFFSET))(this);
	}

	::System::Void Method_2_7A74CBCA024E5DDB(::RPG::GameCore::EventManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EventManager*))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068_METHOD_2_7A74CBCA024E5DDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_709E9C02EF9B7181(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068_METHOD_2_709E9C02EF9B7181_OFFSET))(this, a1);
	}

	::System::Void Method_2_974A70E8019154E7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068_METHOD_2_974A70E8019154E7_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24222339AD802068_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
