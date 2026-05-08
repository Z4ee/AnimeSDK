#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_328B10E9F3553A0D.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityChatSetSpecialsNode; }

#define CLASS_2_50356055A8614D46_METHOD_2_70603E2AE56EBD6B_OFFSET UNITYSDK_OFFSET(0x1441BC10)
#define CLASS_2_50356055A8614D46_METHOD_2_A1BFC961761367F5_OFFSET UNITYSDK_OFFSET(0x1441BDB0)
#define CLASS_2_50356055A8614D46_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1441BD20)
#define CLASS_2_50356055A8614D46_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1441BCE0)
#define CLASS_2_50356055A8614D46_METHOD_2_D37EAF69998C20E2_OFFSET UNITYSDK_OFFSET(0x1441BDC0)
#define CLASS_2_50356055A8614D46_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1441BDD0)
#define CLASS_2_50356055A8614D46__CTOR_OFFSET UNITYSDK_OFFSET(0x1441BB90)

inline static constexpr unsigned int Class_2_50356055A8614D46_TypeDefinitionIndex = 58690;

class Class_2_50356055A8614D46 : public ::Class_1_328B10E9F3553A0D
{
public:
	::MoleMole::GalGame::MainCityChatSetSpecialsNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_50356055A8614D46__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_70603E2AE56EBD6B(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_50356055A8614D46_METHOD_2_70603E2AE56EBD6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50356055A8614D46_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50356055A8614D46_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::MoleMole::GalGame::MainCityChatSetSpecialsNode* Method_2_A1BFC961761367F5()
	{
		return ((::MoleMole::GalGame::MainCityChatSetSpecialsNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_50356055A8614D46_METHOD_2_A1BFC961761367F5_OFFSET))(this);
	}

	::System::Void Method_2_D37EAF69998C20E2(::MoleMole::GalGame::MainCityChatSetSpecialsNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSetSpecialsNode*))((::PBYTE)hIl2Cpp + CLASS_2_50356055A8614D46_METHOD_2_D37EAF69998C20E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_50356055A8614D46_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
