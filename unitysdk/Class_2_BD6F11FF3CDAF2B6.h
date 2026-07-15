#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/VisualDebugging/Unity/ContextObserver.h"

class Class_2_80F8710F847F1248;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace Entitas::VisualDebugging::Unity { class EntityBehaviour; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_BD6F11FF3CDAF2B6_DEACTIVATE_OFFSET UNITYSDK_OFFSET(0x183A7F60)
#define CLASS_2_BD6F11FF3CDAF2B6_METHOD_2_AEFF7F3E842C9D98_OFFSET UNITYSDK_OFFSET(0x183A8340)
#define CLASS_2_BD6F11FF3CDAF2B6_ONENTITYCREATED_OFFSET UNITYSDK_OFFSET(0x183A8100)
#define CLASS_2_BD6F11FF3CDAF2B6__CTOR_OFFSET UNITYSDK_OFFSET(0x183A7DE0)

inline static constexpr unsigned int Class_2_BD6F11FF3CDAF2B6_TypeDefinitionIndex = 73297;

class Class_2_BD6F11FF3CDAF2B6 : public ::Entitas::VisualDebugging::Unity::ContextObserver
{
public:
	::Class_2_80F8710F847F1248* Field_2_0; // 0x38
	::System::Collections::Generic::Dictionary_2<::Entitas::IEntity*, ::Entitas::VisualDebugging::Unity::EntityBehaviour*>* Field_2_1; // 0x40

	::System::Void _ctor(::Entitas::IContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*))((::PBYTE)hIl2Cpp + CLASS_2_BD6F11FF3CDAF2B6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Deactivate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BD6F11FF3CDAF2B6_DEACTIVATE_OFFSET))(this);
	}

	::System::Void onEntityCreated(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BD6F11FF3CDAF2B6_ONENTITYCREATED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AEFF7F3E842C9D98(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BD6F11FF3CDAF2B6_METHOD_2_AEFF7F3E842C9D98_OFFSET))(this, a1, a2);
	}
};
