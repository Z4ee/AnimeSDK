#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_9A4CDF455A54D6E8;
namespace RPG::GameCore { class TaskContext; }
namespace UnityEngine { class Animator; }

#define CLASS_3_FE3BC0A9B1372E7D_3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7FD420)
#define CLASS_3_FE3BC0A9B1372E7D_3_METHOD_3_7B11840D799BD05B_OFFSET UNITYSDK_OFFSET(0xA7FD270)
#define CLASS_3_FE3BC0A9B1372E7D_3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA7FCD10)
#define CLASS_3_FE3BC0A9B1372E7D_3__CTOR_OFFSET UNITYSDK_OFFSET(0xA7FCC90)
#define CLASS_3_FE3BC0A9B1372E7D_3___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA7FD470)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_3_TypeDefinitionIndex = 49256;

class Class_3_FE3BC0A9B1372E7D_3 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_9A4CDF455A54D6E8*>
{
public:
	::Class_2_5436AF4270279182* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9A4CDF455A54D6E8* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9A4CDF455A54D6E8*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_3_DISPOSE_OFFSET))(this);
	}

	::System::Single Method_3_7B11840D799BD05B(::UnityEngine::Animator* a1)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_3_METHOD_3_7B11840D799BD05B_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_3___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
