#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/ComponentInvisibleReason.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace System { class String; }

#define CLASS_1_DE9FECC5B78033A2_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DBE50D0)
#define CLASS_1_DE9FECC5B78033A2_METHOD_1_281B950638FB72F0_OFFSET UNITYSDK_OFFSET(0x1DBE5420)
#define CLASS_1_DE9FECC5B78033A2_METHOD_1_61B928F36566F4C4_OFFSET UNITYSDK_OFFSET(0x1DBE51F0)
#define CLASS_1_DE9FECC5B78033A2_METHOD_1_DE178B53A45D0949_OFFSET UNITYSDK_OFFSET(0x1DBE5370)
#define CLASS_1_DE9FECC5B78033A2_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1DBE5010)
#define CLASS_1_DE9FECC5B78033A2_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1DBE5090)
#define CLASS_1_DE9FECC5B78033A2__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBE5510)

inline static constexpr unsigned int Class_1_DE9FECC5B78033A2_TypeDefinitionIndex = 41668;

class Class_1_DE9FECC5B78033A2 : public ::System::Object
{
public:
	::RPG::PoolHashSet_1<::System::String*>* KBJJMGMOFDL; // 0x10
	::RPG::PoolDictionary_2<::System::String*, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason>* BPGGBFKMEGC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE9FECC5B78033A2__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE9FECC5B78033A2_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE9FECC5B78033A2_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DE9FECC5B78033A2_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_61B928F36566F4C4(::System::String* a1, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_DE9FECC5B78033A2_METHOD_1_61B928F36566F4C4_OFFSET))(this, a1, a2, a3);
	}

	::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason Method_1_DE178B53A45D0949(::System::String* a1)
	{
		return ((::RPG::Client::LittleGame::FiveDim::ComponentInvisibleReason(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DE9FECC5B78033A2_METHOD_1_DE178B53A45D0949_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_281B950638FB72F0(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DE9FECC5B78033A2_METHOD_1_281B950638FB72F0_OFFSET))(this, a1);
	}
};
