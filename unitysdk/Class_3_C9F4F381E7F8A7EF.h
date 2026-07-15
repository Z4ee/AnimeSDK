#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4A1FC46BD5076D6F.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CLASS_3_C9F4F381E7F8A7EF_METHOD_3_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x17D69060)
#define CLASS_3_C9F4F381E7F8A7EF_METHOD_3_A5399A0D57CB1550_OFFSET UNITYSDK_OFFSET(0x17D69120)
#define CLASS_3_C9F4F381E7F8A7EF__CTOR_OFFSET UNITYSDK_OFFSET(0x17D69170)

inline static constexpr unsigned int Class_3_C9F4F381E7F8A7EF_TypeDefinitionIndex = 73093;

class Class_3_C9F4F381E7F8A7EF : public ::Class_2_4A1FC46BD5076D6F
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9F4F381E7F8A7EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_C9F4F381E7F8A7EF_METHOD_3_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::RPG::Client::LittleGame::FiveDim::PropMoveState Method_3_A5399A0D57CB1550()
	{
		return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9F4F381E7F8A7EF_METHOD_3_A5399A0D57CB1550_OFFSET))(this);
	}
};
