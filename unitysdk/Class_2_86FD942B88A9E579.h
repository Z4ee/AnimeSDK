#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B88DD88990EA3DAE;
namespace MoleMole::GalGame { class MainCityChatPlayTimelineNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_86FD942B88A9E579_METHOD_2_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x1A557DB0)
#define CLASS_2_86FD942B88A9E579_METHOD_2_E47284F43B29A154_OFFSET UNITYSDK_OFFSET(0x1A557960)
#define CLASS_2_86FD942B88A9E579_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1A558220)
#define CLASS_2_86FD942B88A9E579__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5578E0)

inline static constexpr unsigned int Class_2_86FD942B88A9E579_TypeDefinitionIndex = 58624;

class Class_2_86FD942B88A9E579 : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityChatPlayTimelineNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_86FD942B88A9E579__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E47284F43B29A154(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_86FD942B88A9E579_METHOD_2_E47284F43B29A154_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86FD942B88A9E579_METHOD_2_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_86FD942B88A9E579_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
