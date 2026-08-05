#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B88DD88990EA3DAE;
namespace MoleMole::GalGame { class MainCityChatDelayNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_DC0EA3A144F8EA89_METHOD_2_722E1524F560C8AF_OFFSET UNITYSDK_OFFSET(0xBD9FCB0)
#define CLASS_2_DC0EA3A144F8EA89_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xBD9FEB0)
#define CLASS_2_DC0EA3A144F8EA89__CTOR_OFFSET UNITYSDK_OFFSET(0xBD9FC30)

inline static constexpr unsigned int Class_2_DC0EA3A144F8EA89_TypeDefinitionIndex = 40566;

class Class_2_DC0EA3A144F8EA89 : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatDelayNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_DC0EA3A144F8EA89__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_722E1524F560C8AF(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_DC0EA3A144F8EA89_METHOD_2_722E1524F560C8AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_DC0EA3A144F8EA89_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
