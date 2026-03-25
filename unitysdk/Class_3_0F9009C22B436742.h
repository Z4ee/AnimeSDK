#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_C42FA8E003EE7719;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_3_0F9009C22B436742_METHOD_3_DF606F1BC273FE84_OFFSET UNITYSDK_OFFSET(0x11816E30)
#define CLASS_3_0F9009C22B436742__CTOR_OFFSET UNITYSDK_OFFSET(0x11816B90)
#define CLASS_3_0F9009C22B436742__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x11816D10)
#define CLASS_3_0F9009C22B436742__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x11816DC0)
#define CLASS_3_0F9009C22B436742___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x11817060)
#define CLASS_3_0F9009C22B436742___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x11817070)

inline static constexpr unsigned int Class_3_0F9009C22B436742_TypeDefinitionIndex = 43296;

class Class_3_0F9009C22B436742 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_C42FA8E003EE7719*>
{
public:
	::System::String* Field_3_0; // 0x68
	::System::Boolean Field_3_1; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_C42FA8E003EE7719* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_C42FA8E003EE7719*))((::PBYTE)hIl2Cpp + CLASS_3_0F9009C22B436742__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F9009C22B436742__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F9009C22B436742__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_DF606F1BC273FE84(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_0F9009C22B436742_METHOD_3_DF606F1BC273FE84_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F9009C22B436742___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0F9009C22B436742___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
