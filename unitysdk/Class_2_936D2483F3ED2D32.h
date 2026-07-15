#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/SimpleStateMachine_2.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

class Class_1_68DDF0439D67F85F;
class Class_1_B4357A1C72BABC6B;
class Class_2_B9E8C2EEAA5C96EC;
class Class_3_1E4F9B0ED3BF21DE;

#define CLASS_2_936D2483F3ED2D32_CLEAR_OFFSET UNITYSDK_OFFSET(0x18F862B0)
#define CLASS_2_936D2483F3ED2D32_METHOD_2_7998F8CA1E002410_OFFSET UNITYSDK_OFFSET(0x18F86160)
#define CLASS_2_936D2483F3ED2D32_METHOD_2_EA7166AD649AAD10_OFFSET UNITYSDK_OFFSET(0x18F85E30)
#define CLASS_2_936D2483F3ED2D32__CTOR_OFFSET UNITYSDK_OFFSET(0x18F86310)

inline static constexpr unsigned int Class_2_936D2483F3ED2D32_TypeDefinitionIndex = 73146;

class Class_2_936D2483F3ED2D32 : public ::RPG::Client::LittleGame::FiveDim::SimpleStateMachine_2<::RPG::GameCore::FiveDimEvilSmileState, ::Class_1_68DDF0439D67F85F*>
{
public:
	::Class_2_B9E8C2EEAA5C96EC* Field_2_0; // 0x28
	::Class_1_B4357A1C72BABC6B* Field_2_1; // 0x30
	::Class_3_1E4F9B0ED3BF21DE* Field_2_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_936D2483F3ED2D32__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EA7166AD649AAD10(::Class_2_B9E8C2EEAA5C96EC* a1, ::Class_3_1E4F9B0ED3BF21DE* a2, ::Class_1_B4357A1C72BABC6B* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B9E8C2EEAA5C96EC*, ::Class_3_1E4F9B0ED3BF21DE*, ::Class_1_B4357A1C72BABC6B*))((::PBYTE)hIl2Cpp + CLASS_2_936D2483F3ED2D32_METHOD_2_EA7166AD649AAD10_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7998F8CA1E002410(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_936D2483F3ED2D32_METHOD_2_7998F8CA1E002410_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_936D2483F3ED2D32_CLEAR_OFFSET))(this);
	}
};
