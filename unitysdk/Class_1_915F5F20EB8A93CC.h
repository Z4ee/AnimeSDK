#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlayerOp.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightAssistantMessageConfigRow; }
namespace System { class String; }

#define CLASS_1_915F5F20EB8A93CC_METHOD_1_0C902D2C92D3BF7E_OFFSET UNITYSDK_OFFSET(0x1299EA30)
#define CLASS_1_915F5F20EB8A93CC_METHOD_1_209E4250CA87B30E_OFFSET UNITYSDK_OFFSET(0x1299EA80)
#define CLASS_1_915F5F20EB8A93CC_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x1299ECD0)
#define CLASS_1_915F5F20EB8A93CC_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1299EC30)
#define CLASS_1_915F5F20EB8A93CC_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1299EBD0)
#define CLASS_1_915F5F20EB8A93CC_METHOD_1_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0x1299ECB0)
#define CLASS_1_915F5F20EB8A93CC_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x1299EC90)
#define CLASS_1_915F5F20EB8A93CC__CTOR_OFFSET UNITYSDK_OFFSET(0x1299EA20)

inline static constexpr unsigned int Class_1_915F5F20EB8A93CC_TypeDefinitionIndex = 59224;

class Class_1_915F5F20EB8A93CC : public ::System::Object
{
public:
	::RPG::GameCore::GridFightAssistantMessageConfigRow* Field_1_0; // 0x10
	::System::Int32 Field_1_3; // 0x18
	::System::Boolean Field_1_2; // 0x1C
	::System::Int32 Field_1_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::GridFightAssistantMessageConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightAssistantMessageConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C902D2C92D3BF7E(::RPG::Client::GridFightPlayerOp a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPlayerOp))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_METHOD_1_0C902D2C92D3BF7E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_209E4250CA87B30E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_METHOD_1_209E4250CA87B30E_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_METHOD_1_F5599B7DA8E7E53C_1_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
