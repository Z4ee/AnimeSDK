#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_179553DEA16830ED_METHOD_1_34FAD805B2009967_OFFSET UNITYSDK_OFFSET(0x15D12900)
#define CLASS_1_179553DEA16830ED_METHOD_1_AF320DDE69C62D4F_OFFSET UNITYSDK_OFFSET(0x15D12A10)
#define CLASS_1_179553DEA16830ED_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15D12A00)
#define CLASS_1_179553DEA16830ED__CTOR_OFFSET UNITYSDK_OFFSET(0x15D128F0)

inline static constexpr unsigned int Class_1_179553DEA16830ED_TypeDefinitionIndex = 55006;

class Class_1_179553DEA16830ED : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_34FAD805B2009967()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED_METHOD_1_34FAD805B2009967_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_AF320DDE69C62D4F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED_METHOD_1_AF320DDE69C62D4F_OFFSET))(this);
	}
};
