#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class CreateBattleEvent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRow; }
namespace RPG::GameCore { class TaskContext; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_8F6F8BA02AC9B962_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1173D850)
#define CLASS_3_8F6F8BA02AC9B962_METHOD_3_6C435ADAAFBF6CA9_1_OFFSET UNITYSDK_OFFSET(0x1173D640)
#define CLASS_3_8F6F8BA02AC9B962_METHOD_3_6C435ADAAFBF6CA9_OFFSET UNITYSDK_OFFSET(0x1173CC10)
#define CLASS_3_8F6F8BA02AC9B962_METHOD_3_94F51401C22E529F_OFFSET UNITYSDK_OFFSET(0x1173CE20)
#define CLASS_3_8F6F8BA02AC9B962_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1173CB10)
#define CLASS_3_8F6F8BA02AC9B962__CTOR_OFFSET UNITYSDK_OFFSET(0x1173C9D0)
#define CLASS_3_8F6F8BA02AC9B962___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1173D8F0)

inline static constexpr unsigned int Class_3_8F6F8BA02AC9B962_TypeDefinitionIndex = 46819;

class Class_3_8F6F8BA02AC9B962 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreateBattleEvent*>
{
public:
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_3_2; // 0x28
	::Class_3_5775A4FEC79026BC* Field_3_0; // 0x30
	::Class_3_5775A4FEC79026BC* Field_3_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateBattleEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateBattleEvent*))((::PBYTE)hIl2Cpp + CLASS_3_8F6F8BA02AC9B962__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F6F8BA02AC9B962_ONTASKBEGIN_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_3_94F51401C22E529F(::System::UInt32 a1, ::RPG::GameCore::StageRow* a2)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::StageRow*))((::PBYTE)hIl2Cpp + CLASS_3_8F6F8BA02AC9B962_METHOD_3_94F51401C22E529F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_6C435ADAAFBF6CA9(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_8F6F8BA02AC9B962_METHOD_3_6C435ADAAFBF6CA9_OFFSET))(this, a1);
	}

	::System::Void Method_3_6C435ADAAFBF6CA9_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_8F6F8BA02AC9B962_METHOD_3_6C435ADAAFBF6CA9_1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F6F8BA02AC9B962_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8F6F8BA02AC9B962___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
