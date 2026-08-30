#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlayerOp.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightAssistantMessageConfigRow; }
namespace System { class String; }

#define CLASS_1_915F5F20EB8A93CC_METHOD_1_0C902D2C92D3BF7E_OFFSET UNITYSDK_OFFSET(0x17934EB0)
#define CLASS_1_915F5F20EB8A93CC_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x17935220)
#define CLASS_1_915F5F20EB8A93CC_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x17935120)
#define CLASS_1_915F5F20EB8A93CC_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x179350C0)
#define CLASS_1_915F5F20EB8A93CC_METHOD_1_507A5122CD01412B_OFFSET UNITYSDK_OFFSET(0x17934F00)
#define CLASS_1_915F5F20EB8A93CC_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0x179351D0)
#define CLASS_1_915F5F20EB8A93CC_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x17935180)
#define CLASS_1_915F5F20EB8A93CC__CTOR_OFFSET UNITYSDK_OFFSET(0x17934EA0)

inline static constexpr unsigned int Class_1_915F5F20EB8A93CC_TypeDefinitionIndex = 64429;

class Class_1_915F5F20EB8A93CC : public ::System::Object
{
public:
	::RPG::GameCore::GridFightAssistantMessageConfigRow* NOPAMNLEDHK; // 0x10
	::System::Int32 CDIBGJLEABI; // 0x18
	::System::Int32 GDPKHJOEIJI; // 0x1C
	::System::Boolean ECLHEOOOMDO; // 0x20

	::System::Void _ctor(::RPG::GameCore::GridFightAssistantMessageConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightAssistantMessageConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C902D2C92D3BF7E(::RPG::Client::GridFightPlayerOp a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPlayerOp))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_METHOD_1_0C902D2C92D3BF7E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_507A5122CD01412B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_METHOD_1_507A5122CD01412B_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
