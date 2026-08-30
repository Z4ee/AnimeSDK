#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/ContextObserver.h"

class Class_2_360C00D6092F4D31;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas::VisualDebugging::Unity { class EntityBehaviour; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_BD6F11FF3CDAF2B6_1_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1705A410)
#define CLASS_2_BD6F11FF3CDAF2B6_1_METHOD_2_AEFF7F3E842C9D98_OFFSET UNITYSDK_OFFSET(0x1705A7F0)
#define CLASS_2_BD6F11FF3CDAF2B6_1_ONENTITYCREATED_OFFSET UNITYSDK_OFFSET(0x1705A5B0)
#define CLASS_2_BD6F11FF3CDAF2B6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1705A290)

inline static constexpr unsigned int Class_2_BD6F11FF3CDAF2B6_1_TypeDefinitionIndex = 77245;

class Class_2_BD6F11FF3CDAF2B6_1 : public ::Entitas::VisualDebugging::Unity::ContextObserver
{
public:
	::System::Collections::Generic::Dictionary_2<::Entitas::IEntity*, ::Entitas::VisualDebugging::Unity::EntityBehaviour*>* HIHDEEBFGIL; // 0x38
	::Class_2_360C00D6092F4D31* EEFMDEHLLFI; // 0x40

	::System::Void _ctor(::Entitas::IContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + CLASS_2_BD6F11FF3CDAF2B6_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Deactivate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD6F11FF3CDAF2B6_1_DEACTIVATE_OFFSET))(this);
	}

	::System::Void onEntityCreated(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BD6F11FF3CDAF2B6_1_ONENTITYCREATED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AEFF7F3E842C9D98(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BD6F11FF3CDAF2B6_1_METHOD_2_AEFF7F3E842C9D98_OFFSET))(this, a1, a2);
	}
};
