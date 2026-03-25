#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DestroyProp; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_14626690F53FE259_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1157DBF0)
#define CLASS_3_14626690F53FE259_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1157DC30)
#define CLASS_3_14626690F53FE259_METHOD_3_9972734FC91A4B95_OFFSET UNITYSDK_OFFSET(0x1157E120)
#define CLASS_3_14626690F53FE259_METHOD_3_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0x1157DCA0)
#define CLASS_3_14626690F53FE259_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1157DC40)
#define CLASS_3_14626690F53FE259_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1157E0D0)
#define CLASS_3_14626690F53FE259__CTOR_OFFSET UNITYSDK_OFFSET(0x1157DBC0)
#define CLASS_3_14626690F53FE259___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1157E470)

inline static constexpr unsigned int Class_3_14626690F53FE259_TypeDefinitionIndex = 46850;

class Class_3_14626690F53FE259 : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::DestroyProp*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DestroyProp* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DestroyProp*))((::PBYTE)hIl2Cpp + CLASS_3_14626690F53FE259__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14626690F53FE259_DISPOSE_OFFSET))(this);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14626690F53FE259_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14626690F53FE259_ONSKIP_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14626690F53FE259_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14626690F53FE259_METHOD_3_DDFCBBB54CA12CE0_OFFSET))(this);
	}

	::System::Void Method_3_9972734FC91A4B95(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_14626690F53FE259_METHOD_3_9972734FC91A4B95_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14626690F53FE259___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
