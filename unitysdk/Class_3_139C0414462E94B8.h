#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_1_999AE0B49D951C72;
namespace RPG::GameCore { class AdvPlayerForceUseDefaultOutfit; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_3_139C0414462E94B8_METHOD_3_3762323332F6C880_OFFSET UNITYSDK_OFFSET(0x19230E80)
#define CLASS_3_139C0414462E94B8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x192314D0)
#define CLASS_3_139C0414462E94B8__CTOR_OFFSET UNITYSDK_OFFSET(0x19230E50)

inline static constexpr unsigned int Class_3_139C0414462E94B8_TypeDefinitionIndex = 50082;

class Class_3_139C0414462E94B8 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::AdvPlayerForceUseDefaultOutfit*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvPlayerForceUseDefaultOutfit* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvPlayerForceUseDefaultOutfit*))((::PBYTE)hIl2Cpp + CLASS_3_139C0414462E94B8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3762323332F6C880(::RPG::GameCore::GameEntity* a1, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>* a2, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>*, ::System::Collections::Generic::IList_1<::Class_1_999AE0B49D951C72*>*))((::PBYTE)hIl2Cpp + CLASS_3_139C0414462E94B8_METHOD_3_3762323332F6C880_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_139C0414462E94B8_ONTASKBEGIN_OFFSET))(this);
	}
};
