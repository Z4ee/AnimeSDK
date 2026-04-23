#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropAttractEnemy; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B1FF18A54515821F_METHOD_3_37BB383697A46FE7_OFFSET UNITYSDK_OFFSET(0x913A3F0)
#define CLASS_3_B1FF18A54515821F_METHOD_3_3D529281B522AD24_OFFSET UNITYSDK_OFFSET(0x913A0F0)
#define CLASS_3_B1FF18A54515821F_METHOD_3_A6143A14F11DAA03_OFFSET UNITYSDK_OFFSET(0x913A770)
#define CLASS_3_B1FF18A54515821F_METHOD_3_D2038C9A874038B4_OFFSET UNITYSDK_OFFSET(0x91398A0)
#define CLASS_3_B1FF18A54515821F_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9139950)
#define CLASS_3_B1FF18A54515821F__CTOR_OFFSET UNITYSDK_OFFSET(0x9139840)

inline static constexpr unsigned int Class_3_B1FF18A54515821F_TypeDefinitionIndex = 53772;

class Class_3_B1FF18A54515821F : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::PropAttractEnemy*>
{
public:
	::RPG::GameCore::TransformComponent* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PropAttractEnemy* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropAttractEnemy*))((::PBYTE)hIl2Cpp + CLASS_3_B1FF18A54515821F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_3_D2038C9A874038B4(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B1FF18A54515821F_METHOD_3_D2038C9A874038B4_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B1FF18A54515821F_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_37BB383697A46FE7(::RPG::GameCore::TransformComponent* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TransformComponent*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B1FF18A54515821F_METHOD_3_37BB383697A46FE7_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_A6143A14F11DAA03(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B1FF18A54515821F_METHOD_3_A6143A14F11DAA03_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Method_3_3D529281B522AD24(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_3_B1FF18A54515821F_METHOD_3_3D529281B522AD24_OFFSET))(this, a1);
	}
};
