#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_2519D80EDC986A74;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_83DC5E42D68FBA44_METHOD_3_E49FC3D0AC1CB0F6_OFFSET UNITYSDK_OFFSET(0x110E3E80)
#define CLASS_3_83DC5E42D68FBA44__CTOR_OFFSET UNITYSDK_OFFSET(0x110E3C40)
#define CLASS_3_83DC5E42D68FBA44__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x110E3DA0)
#define CLASS_3_83DC5E42D68FBA44__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x110E3E10)
#define CLASS_3_83DC5E42D68FBA44___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x110E4000)
#define CLASS_3_83DC5E42D68FBA44___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x110E4070)

inline static constexpr unsigned int Class_3_83DC5E42D68FBA44_TypeDefinitionIndex = 43320;

class Class_3_83DC5E42D68FBA44 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_2519D80EDC986A74*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_2519D80EDC986A74* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_2519D80EDC986A74*))((::PBYTE)hIl2Cpp + CLASS_3_83DC5E42D68FBA44__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83DC5E42D68FBA44__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83DC5E42D68FBA44__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_E49FC3D0AC1CB0F6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_83DC5E42D68FBA44_METHOD_3_E49FC3D0AC1CB0F6_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83DC5E42D68FBA44___IFIXBASEPROXY__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_83DC5E42D68FBA44___IFIXBASEPROXY__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}
};
