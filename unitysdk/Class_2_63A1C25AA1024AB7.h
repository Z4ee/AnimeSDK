#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B88DD88990EA3DAE;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityGraphNode; }

#define CLASS_2_63A1C25AA1024AB7_METHOD_2_4982E67EAD90F790_OFFSET UNITYSDK_OFFSET(0x16EED3A0)
#define CLASS_2_63A1C25AA1024AB7_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x16EED670)
#define CLASS_2_63A1C25AA1024AB7__CTOR_OFFSET UNITYSDK_OFFSET(0x16EED320)

inline static constexpr unsigned int Class_2_63A1C25AA1024AB7_TypeDefinitionIndex = 79023;

class Class_2_63A1C25AA1024AB7 : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityGraphNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_63A1C25AA1024AB7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4982E67EAD90F790(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_63A1C25AA1024AB7_METHOD_2_4982E67EAD90F790_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_63A1C25AA1024AB7_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
