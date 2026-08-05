#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_315504B5E55E6708_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x1376E6C0)
#define CLASS_2_315504B5E55E6708_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x1376E530)
#define CLASS_2_315504B5E55E6708_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1376E7B0)
#define CLASS_2_315504B5E55E6708__CTOR_OFFSET UNITYSDK_OFFSET(0x1376E7A0)

inline static constexpr unsigned int Class_2_315504B5E55E6708_TypeDefinitionIndex = 76490;

class Class_2_315504B5E55E6708 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x18
	::MoleMole::MonoGamepadSelectable* Field_2_0; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x28
	::UnityEngine::GameObject* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_315504B5E55E6708__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_315504B5E55E6708_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_315504B5E55E6708_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_315504B5E55E6708_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}
};
