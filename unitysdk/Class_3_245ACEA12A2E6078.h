#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WolfBroUseBulletHitTarget; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_245ACEA12A2E6078_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2828B0)
#define CLASS_3_245ACEA12A2E6078_METHOD_3_1BE9309EAA0FB824_OFFSET UNITYSDK_OFFSET(0xB283150)
#define CLASS_3_245ACEA12A2E6078_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB282900)
#define CLASS_3_245ACEA12A2E6078__CTOR_OFFSET UNITYSDK_OFFSET(0xB282840)
#define CLASS_3_245ACEA12A2E6078___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2839D0)

inline static constexpr unsigned int Class_3_245ACEA12A2E6078_TypeDefinitionIndex = 47635;

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

	::System::Void Method_3_1BE9309EAA0FB824(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_245ACEA12A2E6078_METHOD_3_1BE9309EAA0FB824_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_245ACEA12A2E6078___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
