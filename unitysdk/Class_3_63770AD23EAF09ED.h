#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAnimatorLayerEmotion; }
namespace System { class String; }

#define CLASS_3_63770AD23EAF09ED_METHOD_3_24D4EB641B41AC50_OFFSET UNITYSDK_OFFSET(0x138E4650)
#define CLASS_3_63770AD23EAF09ED_METHOD_3_5BDE15C160A24569_OFFSET UNITYSDK_OFFSET(0x138E47F0)
#define CLASS_3_63770AD23EAF09ED_METHOD_3_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x138E40F0)
#define CLASS_3_63770AD23EAF09ED_METHOD_3_7F10F3A00DFF6619_OFFSET UNITYSDK_OFFSET(0x138E44E0)
#define CLASS_3_63770AD23EAF09ED_METHOD_3_A2172401030892FD_OFFSET UNITYSDK_OFFSET(0x138E3F00)
#define CLASS_3_63770AD23EAF09ED_METHOD_3_D1C2FADE6220C1AD_OFFSET UNITYSDK_OFFSET(0x138E4560)
#define CLASS_3_63770AD23EAF09ED_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x138E3E80)
#define CLASS_3_63770AD23EAF09ED__CTOR_OFFSET UNITYSDK_OFFSET(0x138E3E50)

inline static constexpr unsigned int Class_3_63770AD23EAF09ED_TypeDefinitionIndex = 52225;

class Class_3_63770AD23EAF09ED : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::TriggerAnimatorLayerEmotion*>
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAnimatorLayerEmotion* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAnimatorLayerEmotion*))((::PBYTE)hIl2Cpp + CLASS_3_63770AD23EAF09ED__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_63770AD23EAF09ED_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_A2172401030892FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_63770AD23EAF09ED_METHOD_3_A2172401030892FD_OFFSET))(this);
	}

	::System::Void Method_3_6A0EBEECA245A27C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_63770AD23EAF09ED_METHOD_3_6A0EBEECA245A27C_OFFSET))(this);
	}

	::System::Boolean Method_3_24D4EB641B41AC50(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_63770AD23EAF09ED_METHOD_3_24D4EB641B41AC50_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_3_7F10F3A00DFF6619()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_63770AD23EAF09ED_METHOD_3_7F10F3A00DFF6619_OFFSET))(this);
	}

	::System::String* Method_3_D1C2FADE6220C1AD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_63770AD23EAF09ED_METHOD_3_D1C2FADE6220C1AD_OFFSET))(this, a1);
	}

	::System::String* Method_3_5BDE15C160A24569(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_63770AD23EAF09ED_METHOD_3_5BDE15C160A24569_OFFSET))(this, a1);
	}
};
