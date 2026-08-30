#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlayerOp.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightAssistantMessageConfigRow; }
namespace System { class String; }

#define CLASS_1_915F5F20EB8A93CC_1_METHOD_1_0C902D2C92D3BF7E_OFFSET UNITYSDK_OFFSET(0xCFCDF90)
#define CLASS_1_915F5F20EB8A93CC_1_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0xCFCE5B0)
#define CLASS_1_915F5F20EB8A93CC_1_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCFCE4B0)
#define CLASS_1_915F5F20EB8A93CC_1_METHOD_1_5153F4D739F20289_OFFSET UNITYSDK_OFFSET(0xCFCDFE0)
#define CLASS_1_915F5F20EB8A93CC_1_METHOD_1_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0xCFCE560)
#define CLASS_1_915F5F20EB8A93CC_1_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xCFCE510)
#define CLASS_1_915F5F20EB8A93CC_1_METHOD_1_E631B63295647DB5_OFFSET UNITYSDK_OFFSET(0xCFCE300)
#define CLASS_1_915F5F20EB8A93CC_1__CTOR_OFFSET UNITYSDK_OFFSET(0xCFCDF80)

inline static constexpr unsigned int Class_1_915F5F20EB8A93CC_1_TypeDefinitionIndex = 64430;

class Class_1_915F5F20EB8A93CC_1 : public ::System::Object
{
public:
	::RPG::GameCore::GridFightAssistantMessageConfigRow* NOPAMNLEDHK; // 0x10
	::System::Int32 CDIBGJLEABI; // 0x18
	::System::Boolean ADDKLGPANMD; // 0x1C
	::System::Int32 GDPKHJOEIJI; // 0x20

	::System::Void _ctor(::RPG::GameCore::GridFightAssistantMessageConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightAssistantMessageConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_0C902D2C92D3BF7E(::RPG::Client::GridFightPlayerOp a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPlayerOp))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_1_METHOD_1_0C902D2C92D3BF7E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5153F4D739F20289()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_1_METHOD_1_5153F4D739F20289_OFFSET))(this);
	}

	::System::Void Method_1_E631B63295647DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_1_METHOD_1_E631B63295647DB5_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_1_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_1_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_1_METHOD_1_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_915F5F20EB8A93CC_1_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
