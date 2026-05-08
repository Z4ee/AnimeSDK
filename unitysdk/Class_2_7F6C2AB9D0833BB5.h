#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class MeshRenderer; }

#define CLASS_2_7F6C2AB9D0833BB5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x11F3A110)
#define CLASS_2_7F6C2AB9D0833BB5_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x11F3A050)
#define CLASS_2_7F6C2AB9D0833BB5__CTOR_OFFSET UNITYSDK_OFFSET(0x11F3A100)

inline static constexpr unsigned int Class_2_7F6C2AB9D0833BB5_TypeDefinitionIndex = 61248;

class Class_2_7F6C2AB9D0833BB5 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::MeshRenderer* Field_2_0; // 0x18
	::UnityEngine::MeshRenderer* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F6C2AB9D0833BB5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7F6C2AB9D0833BB5_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7F6C2AB9D0833BB5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
