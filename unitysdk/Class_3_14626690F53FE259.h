#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

namespace RPG::GameCore { class DestroyProp; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define CLASS_3_14626690F53FE259_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165E30A0)
#define CLASS_3_14626690F53FE259_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x165E30E0)
#define CLASS_3_14626690F53FE259_METHOD_3_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0x165E3150)
#define CLASS_3_14626690F53FE259_METHOD_3_51031B8CCF75DCBB_OFFSET UNITYSDK_OFFSET(0x165E3660)
#define CLASS_3_14626690F53FE259_ONSKIP_OFFSET UNITYSDK_OFFSET(0x165E30F0)
#define CLASS_3_14626690F53FE259_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165E3610)
#define CLASS_3_14626690F53FE259__CTOR_OFFSET UNITYSDK_OFFSET(0x165E3070)

inline static constexpr unsigned int Class_3_14626690F53FE259_TypeDefinitionIndex = 58229;

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
};
