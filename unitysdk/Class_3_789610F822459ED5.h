#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::Client { class RuntimeGroupManager; }
namespace RPG::GameCore { class CreatePropV2; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_789610F822459ED5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17204460)
#define CLASS_3_789610F822459ED5_METHOD_3_50FE439550ED7B5B_OFFSET UNITYSDK_OFFSET(0x17204850)
#define CLASS_3_789610F822459ED5_METHOD_3_9DA0D46365FF3B6A_OFFSET UNITYSDK_OFFSET(0x17204920)
#define CLASS_3_789610F822459ED5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x172044B0)
#define CLASS_3_789610F822459ED5__CTOR_OFFSET UNITYSDK_OFFSET(0x17204430)
#define CLASS_3_789610F822459ED5__ONTASKBEGIN_B__2_0_OFFSET UNITYSDK_OFFSET(0x17204960)

inline static constexpr unsigned int Class_3_789610F822459ED5_TypeDefinitionIndex = 55479;

class Class_3_789610F822459ED5 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::CreatePropV2*>
{
public:
	::RPG::Client::RuntimeGroupManager* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreatePropV2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreatePropV2*))((::PBYTE)hIl2Cpp + CLASS_3_789610F822459ED5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_789610F822459ED5_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_789610F822459ED5_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_50FE439550ED7B5B(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_789610F822459ED5_METHOD_3_50FE439550ED7B5B_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::EntityClassifyType Method_3_9DA0D46365FF3B6A()
	{
		return ((::RPG::GameCore::EntityClassifyType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_789610F822459ED5_METHOD_3_9DA0D46365FF3B6A_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__2_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_789610F822459ED5__ONTASKBEGIN_B__2_0_OFFSET))(this);
	}
};
