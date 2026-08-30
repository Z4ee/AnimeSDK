#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TaskConfig; }

#define CLASS_4_1968AB1BE3C4720D_2_METHOD_4_006ABDD1DFAA24CE_OFFSET UNITYSDK_OFFSET(0x1CA8B8F0)
#define CLASS_4_1968AB1BE3C4720D_2_METHOD_4_F1593D4CC137136F_OFFSET UNITYSDK_OFFSET(0x1CA8B940)
#define CLASS_4_1968AB1BE3C4720D_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA8B930)

inline static constexpr unsigned int Class_4_1968AB1BE3C4720D_2_TypeDefinitionIndex = 21050;

class Class_4_1968AB1BE3C4720D_2 : public ::RPG::GameCore::AdvWaitingEventBase
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* LEAHACBFJBP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_1968AB1BE3C4720D_2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_006ABDD1DFAA24CE(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_1968AB1BE3C4720D_2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_1968AB1BE3C4720D_2*&))((::PBYTE)hIl2Cpp + CLASS_4_1968AB1BE3C4720D_2_METHOD_4_006ABDD1DFAA24CE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_F1593D4CC137136F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_1968AB1BE3C4720D_2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_1968AB1BE3C4720D_2*))((::PBYTE)hIl2Cpp + CLASS_4_1968AB1BE3C4720D_2_METHOD_4_F1593D4CC137136F_OFFSET))(a1, a2);
	}
};
