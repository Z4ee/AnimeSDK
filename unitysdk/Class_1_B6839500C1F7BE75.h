#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPlayerOp.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightAssistantMessageConfigRow; }
namespace System { class String; }

#define CLASS_1_B6839500C1F7BE75_METHOD_1_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x11733DC0)
#define CLASS_1_B6839500C1F7BE75_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11733D20)
#define CLASS_1_B6839500C1F7BE75_METHOD_1_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x11733AF0)
#define CLASS_1_B6839500C1F7BE75_METHOD_1_A871253BFD471C99_OFFSET UNITYSDK_OFFSET(0x117339D0)
#define CLASS_1_B6839500C1F7BE75_METHOD_1_BABD89A60095C109_OFFSET UNITYSDK_OFFSET(0x11733980)
#define CLASS_1_B6839500C1F7BE75_METHOD_1_F5599B7DA8E7E53C_1_OFFSET UNITYSDK_OFFSET(0x11733DA0)
#define CLASS_1_B6839500C1F7BE75_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x11733D80)
#define CLASS_1_B6839500C1F7BE75__CTOR_OFFSET UNITYSDK_OFFSET(0x11733970)

inline static constexpr unsigned int Class_1_B6839500C1F7BE75_TypeDefinitionIndex = 52275;

class Class_1_B6839500C1F7BE75 : public ::System::Object
{
public:
	::RPG::GameCore::GridFightAssistantMessageConfigRow* Field_1_0; // 0x10
	::System::Int32 Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x1C

	::System::Void _ctor(::RPG::GameCore::GridFightAssistantMessageConfigRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightAssistantMessageConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_BABD89A60095C109(::RPG::Client::GridFightPlayerOp a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPlayerOp))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_BABD89A60095C109_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A871253BFD471C99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_A871253BFD471C99_OFFSET))(this);
	}

	::System::Void Method_1_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_659B881A8763C779_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_F5599B7DA8E7E53C_1_OFFSET))(this);
	}

	::System::String* Method_1_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B6839500C1F7BE75_METHOD_1_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
