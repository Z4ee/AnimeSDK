#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatPlayTimelineNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_86FD942B88A9E579_METHOD_2_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x12C85530)
#define CLASS_2_86FD942B88A9E579_METHOD_2_E47284F43B29A154_OFFSET UNITYSDK_OFFSET(0x12C850E0)
#define CLASS_2_86FD942B88A9E579_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x12C859A0)
#define CLASS_2_86FD942B88A9E579__CTOR_OFFSET UNITYSDK_OFFSET(0x12C85060)

inline static constexpr unsigned int Class_2_86FD942B88A9E579_TypeDefinitionIndex = 42730;

class Class_2_86FD942B88A9E579 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatPlayTimelineNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_86FD942B88A9E579__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_E47284F43B29A154(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_86FD942B88A9E579_METHOD_2_E47284F43B29A154_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_86FD942B88A9E579_METHOD_2_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_86FD942B88A9E579_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
