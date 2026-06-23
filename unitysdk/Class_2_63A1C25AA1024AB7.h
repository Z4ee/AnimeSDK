#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B4B6517768F4059F;
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }
namespace MoleMole::GalGame { class MainCityGraphNode; }

#define CLASS_2_63A1C25AA1024AB7_METHOD_2_4982E67EAD90F790_OFFSET UNITYSDK_OFFSET(0x1269A4D0)
#define CLASS_2_63A1C25AA1024AB7_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1269A7A0)
#define CLASS_2_63A1C25AA1024AB7__CTOR_OFFSET UNITYSDK_OFFSET(0x1269A450)

inline static constexpr unsigned int Class_2_63A1C25AA1024AB7_TypeDefinitionIndex = 85079;

class Class_2_63A1C25AA1024AB7 : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::MainCityGraphNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_63A1C25AA1024AB7__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4982E67EAD90F790(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_63A1C25AA1024AB7_METHOD_2_4982E67EAD90F790_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B4B6517768F4059F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B4B6517768F4059F*))((::PBYTE)hIl2Cpp + CLASS_2_63A1C25AA1024AB7_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
