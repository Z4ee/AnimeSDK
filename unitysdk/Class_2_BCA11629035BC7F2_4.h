#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A9A857AD270B9CE1;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_BCA11629035BC7F2_4_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x127B0AB0)
#define CLASS_2_BCA11629035BC7F2_4_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x127B0C20)
#define CLASS_2_BCA11629035BC7F2_4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x127B0D10)
#define CLASS_2_BCA11629035BC7F2_4__CTOR_OFFSET UNITYSDK_OFFSET(0x127B0D00)

inline static constexpr unsigned int Class_2_BCA11629035BC7F2_4_TypeDefinitionIndex = 70036;

class Class_2_BCA11629035BC7F2_4 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_1; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCA11629035BC7F2_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BCA11629035BC7F2_4_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BCA11629035BC7F2_4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCA11629035BC7F2_4_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
