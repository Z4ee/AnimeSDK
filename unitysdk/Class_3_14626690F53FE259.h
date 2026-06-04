#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DestroyProp; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_14626690F53FE259_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA567E90)
#define CLASS_3_14626690F53FE259_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xA567ED0)
#define CLASS_3_14626690F53FE259_METHOD_3_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0xA567F40)
#define CLASS_3_14626690F53FE259_METHOD_3_51031B8CCF75DCBB_OFFSET UNITYSDK_OFFSET(0xA568450)
#define CLASS_3_14626690F53FE259_ONSKIP_OFFSET UNITYSDK_OFFSET(0xA567EE0)
#define CLASS_3_14626690F53FE259_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA568400)
#define CLASS_3_14626690F53FE259__CTOR_OFFSET UNITYSDK_OFFSET(0xA567E60)
#define CLASS_3_14626690F53FE259___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5687B0)

inline static constexpr unsigned int Class_3_14626690F53FE259_TypeDefinitionIndex = 54275;

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

	::System::Void Method_3_07280B24DFAC0CA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14626690F53FE259_METHOD_3_07280B24DFAC0CA9_OFFSET))(this);
	}

	::System::Void Method_3_51031B8CCF75DCBB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_14626690F53FE259_METHOD_3_51031B8CCF75DCBB_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14626690F53FE259___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
