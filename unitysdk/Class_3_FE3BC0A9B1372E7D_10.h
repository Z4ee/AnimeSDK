#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_5436AF4270279182;
class Class_3_C8EB502E39B055D1_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_FE3BC0A9B1372E7D_10_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA5F8C0)
#define CLASS_3_FE3BC0A9B1372E7D_10_METHOD_3_9B78EADB6CBA8DA3_OFFSET UNITYSDK_OFFSET(0xAA5F780)
#define CLASS_3_FE3BC0A9B1372E7D_10_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAA5F5F0)
#define CLASS_3_FE3BC0A9B1372E7D_10__CTOR_OFFSET UNITYSDK_OFFSET(0xAA5F570)
#define CLASS_3_FE3BC0A9B1372E7D_10___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAA5F910)

inline static constexpr unsigned int Class_3_FE3BC0A9B1372E7D_10_TypeDefinitionIndex = 49274;

class Class_3_FE3BC0A9B1372E7D_10 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_C8EB502E39B055D1_1*>
{
public:
	::Class_2_5436AF4270279182* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_C8EB502E39B055D1_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_C8EB502E39B055D1_1*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_10__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_10_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_9B78EADB6CBA8DA3(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_10_METHOD_3_9B78EADB6CBA8DA3_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_10_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE3BC0A9B1372E7D_10___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
