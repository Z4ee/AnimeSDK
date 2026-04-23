#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/ContextObserver.h"

class Class_2_43D1AA62A6D00FFF;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas::VisualDebugging::Unity { class EntityBehaviour; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_5FE6508B6F987EA5_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0xB48AA70)
#define CLASS_2_5FE6508B6F987EA5_METHOD_2_280C380FB0735DBF_OFFSET UNITYSDK_OFFSET(0xB48ADD0)
#define CLASS_2_5FE6508B6F987EA5_ONENTITYCREATED_OFFSET UNITYSDK_OFFSET(0xB48AC10)
#define CLASS_2_5FE6508B6F987EA5__CTOR_OFFSET UNITYSDK_OFFSET(0xB48A900)
#define CLASS_2_5FE6508B6F987EA5___IFIXBASEPROXY_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0xB48AE60)
#define CLASS_2_5FE6508B6F987EA5___IFIXBASEPROXY_ONENTITYCREATED_OFFSET UNITYSDK_OFFSET(0xB48AE70)

inline static constexpr unsigned int Class_2_5FE6508B6F987EA5_TypeDefinitionIndex = 70950;

class Class_2_5FE6508B6F987EA5 : public ::Entitas::VisualDebugging::Unity::ContextObserver
{
public:
	::System::Collections::Generic::Dictionary_2<::Entitas::IEntity*, ::Entitas::VisualDebugging::Unity::EntityBehaviour*>* Field_2_1; // 0x38
	::Class_2_43D1AA62A6D00FFF* Field_2_0; // 0x40

	::System::Void _ctor(::Entitas::IContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + CLASS_2_5FE6508B6F987EA5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Deactivate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FE6508B6F987EA5_DEACTIVATE_OFFSET))(this);
	}

	::System::Void onEntityCreated(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5FE6508B6F987EA5_ONENTITYCREATED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_280C380FB0735DBF(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5FE6508B6F987EA5_METHOD_2_280C380FB0735DBF_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Deactivate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5FE6508B6F987EA5___IFIXBASEPROXY_DEACTIVATE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_onEntityCreated(::Entitas::IContext* P0, ::Entitas::IEntity* P1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_5FE6508B6F987EA5___IFIXBASEPROXY_ONENTITYCREATED_OFFSET))(this, P0, P1);
	}
};
