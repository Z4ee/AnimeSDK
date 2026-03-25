#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ReactionItemConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_1_E105E8A7A7654142_DISPOSE_OFFSET UNITYSDK_OFFSET(0x88A96E0)
#define CLASS_1_E105E8A7A7654142_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x88A9770)
#define CLASS_1_E105E8A7A7654142_METHOD_1_8377BC0DCBA8CDB6_OFFSET UNITYSDK_OFFSET(0x88A9860)
#define CLASS_1_E105E8A7A7654142_METHOD_1_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x88A97F0)
#define CLASS_1_E105E8A7A7654142__CTOR_OFFSET UNITYSDK_OFFSET(0x88A9560)

inline static constexpr unsigned int Class_1_E105E8A7A7654142_TypeDefinitionIndex = 42123;

class Class_1_E105E8A7A7654142 : public ::System::Object
{
public:
	::Class_3_5775A4FEC79026BC* Field_1_2; // 0x10
	::RPG::GameCore::TaskContext* Field_1_4; // 0x18
	::Class_3_5775A4FEC79026BC* Field_1_3; // 0x20
	::System::String* Field_1_0; // 0x28
	::System::String* Field_1_1; // 0x30

	::System::Void _ctor(::RPG::GameCore::ReactionItemConfig* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ReactionItemConfig*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_E105E8A7A7654142__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E105E8A7A7654142_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E105E8A7A7654142_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E105E8A7A7654142_METHOD_1_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::RPG::GameCore::TaskContext* Method_1_8377BC0DCBA8CDB6()
	{
		return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E105E8A7A7654142_METHOD_1_8377BC0DCBA8CDB6_OFFSET))(this);
	}
};
