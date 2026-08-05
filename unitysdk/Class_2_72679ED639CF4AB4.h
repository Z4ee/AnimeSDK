#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define CLASS_2_72679ED639CF4AB4_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x1259B830)
#define CLASS_2_72679ED639CF4AB4_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x1259B6A0)
#define CLASS_2_72679ED639CF4AB4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1259B920)
#define CLASS_2_72679ED639CF4AB4__CTOR_OFFSET UNITYSDK_OFFSET(0x1259B910)

inline static constexpr unsigned int Class_2_72679ED639CF4AB4_TypeDefinitionIndex = 49440;

class Class_2_72679ED639CF4AB4 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_2; // 0x18
	::UnityEngine::Transform* Field_2_0; // 0x20
	::UnityEngine::Transform* Field_2_3; // 0x28
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72679ED639CF4AB4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_72679ED639CF4AB4_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72679ED639CF4AB4_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_72679ED639CF4AB4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
