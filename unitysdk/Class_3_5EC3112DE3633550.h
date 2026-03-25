#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OpenUIPageTaskBase_1.h"

namespace RPG::GameCore { class OpenFarmElement; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_5EC3112DE3633550_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x110DE4F0)
#define CLASS_3_5EC3112DE3633550__CTOR_OFFSET UNITYSDK_OFFSET(0x110DE4A0)
#define CLASS_3_5EC3112DE3633550__ONPAGECONFIRMCLOSE_OFFSET UNITYSDK_OFFSET(0x110DE870)
#define CLASS_3_5EC3112DE3633550___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x110DEAE0)
#define CLASS_3_5EC3112DE3633550___IFIXBASEPROXY__ONPAGECONFIRMCLOSE_OFFSET UNITYSDK_OFFSET(0x110DEAF0)

inline static constexpr unsigned int Class_3_5EC3112DE3633550_TypeDefinitionIndex = 46980;

class Class_3_5EC3112DE3633550 : public ::RPG::GameCore::OpenUIPageTaskBase_1<::RPG::GameCore::OpenFarmElement*>
{
public:
	::System::UInt32 Field_3_1; // 0x40
	::System::UInt32 Field_3_0; // 0x44

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenFarmElement* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenFarmElement*))((::PBYTE)hIl2Cpp + CLASS_3_5EC3112DE3633550__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EC3112DE3633550_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void _OnPageConfirmClose(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_5EC3112DE3633550__ONPAGECONFIRMCLOSE_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5EC3112DE3633550___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnPageConfirmClose(::System::Object* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_5EC3112DE3633550___IFIXBASEPROXY__ONPAGECONFIRMCLOSE_OFFSET))(this, P0);
	}
};
