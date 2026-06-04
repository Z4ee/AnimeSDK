#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/ContextObserver.h"

class Class_2_360C00D6092F4D31;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas::VisualDebugging::Unity { class EntityBehaviour; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_24F32BB2975938DF_1_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0xA8F9F10)
#define CLASS_2_24F32BB2975938DF_1_METHOD_2_AEFF7F3E842C9D98_OFFSET UNITYSDK_OFFSET(0xA8FA270)
#define CLASS_2_24F32BB2975938DF_1_ONENTITYCREATED_OFFSET UNITYSDK_OFFSET(0xA8FA0B0)
#define CLASS_2_24F32BB2975938DF_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA8F9D90)
#define CLASS_2_24F32BB2975938DF_1___IFIXBASEPROXY_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0xA8FA300)
#define CLASS_2_24F32BB2975938DF_1___IFIXBASEPROXY_ONENTITYCREATED_OFFSET UNITYSDK_OFFSET(0xA8FA310)

inline static constexpr unsigned int Class_2_24F32BB2975938DF_1_TypeDefinitionIndex = 72236;

class Class_2_24F32BB2975938DF_1 : public ::Entitas::VisualDebugging::Unity::ContextObserver
{
public:
	::System::Collections::Generic::Dictionary_2<::Entitas::IEntity*, ::Entitas::VisualDebugging::Unity::EntityBehaviour*>* Field_2_0; // 0x38
	::Class_2_360C00D6092F4D31* Field_2_1; // 0x40

	::System::Void _ctor(::Entitas::IContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + CLASS_2_24F32BB2975938DF_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Deactivate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24F32BB2975938DF_1_DEACTIVATE_OFFSET))(this);
	}

	::System::Void onEntityCreated(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_24F32BB2975938DF_1_ONENTITYCREATED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AEFF7F3E842C9D98(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_24F32BB2975938DF_1_METHOD_2_AEFF7F3E842C9D98_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Deactivate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_24F32BB2975938DF_1___IFIXBASEPROXY_DEACTIVATE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_onEntityCreated(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_24F32BB2975938DF_1___IFIXBASEPROXY_ONENTITYCREATED_OFFSET))(this, a1, a2);
	}
};
