#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_179553DEA16830ED_METHOD_1_2E8A4F7CDBC3ACD5_OFFSET UNITYSDK_OFFSET(0xAFE08A0)
#define CLASS_1_179553DEA16830ED_METHOD_1_A3C672A8692A1FCC_OFFSET UNITYSDK_OFFSET(0xAFE0A20)
#define CLASS_1_179553DEA16830ED_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAFE0A10)
#define CLASS_1_179553DEA16830ED__CTOR_OFFSET UNITYSDK_OFFSET(0xAFE0890)

inline static constexpr unsigned int Class_1_179553DEA16830ED_TypeDefinitionIndex = 50738;

class Class_1_179553DEA16830ED : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_2E8A4F7CDBC3ACD5()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED_METHOD_1_2E8A4F7CDBC3ACD5_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_A3C672A8692A1FCC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_179553DEA16830ED_METHOD_1_A3C672A8692A1FCC_OFFSET))(this);
	}
};
