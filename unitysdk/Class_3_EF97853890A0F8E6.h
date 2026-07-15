#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_1_64D890C466F37235;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitRotatableRegionChange; }
namespace System { class Object; }

#define CLASS_3_EF97853890A0F8E6_METHOD_3_0986B6F765C6D4BF_OFFSET UNITYSDK_OFFSET(0x18AFEA30)
#define CLASS_3_EF97853890A0F8E6__CTOR_OFFSET UNITYSDK_OFFSET(0x18AFE630)
#define CLASS_3_EF97853890A0F8E6__PREPAREDATA_OFFSET UNITYSDK_OFFSET(0x18AFE7C0)
#define CLASS_3_EF97853890A0F8E6__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x18AFE8B0)
#define CLASS_3_EF97853890A0F8E6__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x18AFE970)

inline static constexpr unsigned int Class_3_EF97853890A0F8E6_TypeDefinitionIndex = 50600;

class Class_3_EF97853890A0F8E6 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::RPG::GameCore::WaitRotatableRegionChange*>
{
public:
	::Class_1_64D890C466F37235* Field_3_0; // 0x68
	::System::Int32 Field_3_1; // 0x70

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitRotatableRegionChange* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitRotatableRegionChange*))((::PBYTE)hIl2Cpp + CLASS_3_EF97853890A0F8E6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean _PrepareData()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF97853890A0F8E6__PREPAREDATA_OFFSET))(this);
	}

	::System::Void _RegisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF97853890A0F8E6__REGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void _UnregisterEventCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EF97853890A0F8E6__UNREGISTEREVENTCALLBACK_OFFSET))(this);
	}

	::System::Void Method_3_0986B6F765C6D4BF(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_EF97853890A0F8E6_METHOD_3_0986B6F765C6D4BF_OFFSET))(this, a1);
	}
};
