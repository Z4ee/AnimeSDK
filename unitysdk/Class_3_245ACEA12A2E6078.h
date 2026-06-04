#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroUseBulletHitTarget; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_245ACEA12A2E6078_DISPOSE_OFFSET UNITYSDK_OFFSET(0x136564C0)
#define CLASS_3_245ACEA12A2E6078_METHOD_3_E9EBE847C2A79912_OFFSET UNITYSDK_OFFSET(0x13656F30)
#define CLASS_3_245ACEA12A2E6078_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13656510)
#define CLASS_3_245ACEA12A2E6078__CTOR_OFFSET UNITYSDK_OFFSET(0x13656450)
#define CLASS_3_245ACEA12A2E6078___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x136578A0)

inline static constexpr unsigned int Class_3_245ACEA12A2E6078_TypeDefinitionIndex = 55100;

class Class_3_245ACEA12A2E6078 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::WolfBroUseBulletHitTarget*>
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_0; // 0x28
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_3_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WolfBroUseBulletHitTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WolfBroUseBulletHitTarget*))((::PBYTE)hIl2Cpp + CLASS_3_245ACEA12A2E6078__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_245ACEA12A2E6078_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_245ACEA12A2E6078_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_E9EBE847C2A79912(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_245ACEA12A2E6078_METHOD_3_E9EBE847C2A79912_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_245ACEA12A2E6078___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
