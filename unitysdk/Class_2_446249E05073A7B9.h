#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2D5DADE6FF36AA79.h"

class Class_1_B88DD88990EA3DAE;
namespace MoleMole::GalGame { class ChatChangeEffectStateNode; }
namespace MoleMole::GalGame { class MainCityChatPlayableNodeBase; }

#define CLASS_2_446249E05073A7B9_METHOD_2_53F8E7A039DF377D_OFFSET UNITYSDK_OFFSET(0x169E99B0)
#define CLASS_2_446249E05073A7B9_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x169E9DA0)
#define CLASS_2_446249E05073A7B9__CTOR_OFFSET UNITYSDK_OFFSET(0x169E9930)

inline static constexpr unsigned int Class_2_446249E05073A7B9_TypeDefinitionIndex = 59882;

class Class_2_446249E05073A7B9 : public ::Class_1_2D5DADE6FF36AA79
{
public:
	::MoleMole::GalGame::ChatChangeEffectStateNode* Field_2_0; // 0x40

	::System::Void _ctor(::MoleMole::GalGame::MainCityChatPlayableNodeBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayableNodeBase*))((::PBYTE)hIl2Cpp + CLASS_2_446249E05073A7B9__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_53F8E7A039DF377D(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_446249E05073A7B9_METHOD_2_53F8E7A039DF377D_OFFSET))(this, a1);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_B88DD88990EA3DAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B88DD88990EA3DAE*))((::PBYTE)hIl2Cpp + CLASS_2_446249E05073A7B9_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}
};
