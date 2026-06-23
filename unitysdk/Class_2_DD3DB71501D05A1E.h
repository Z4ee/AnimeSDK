#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
class Class_2_CA67A9CEB871FFD3;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIDataFixGameWidgetController; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_3_6F805C3FA3D1D41D;

#define CLASS_2_DD3DB71501D05A1E_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x10A1A870)
#define CLASS_2_DD3DB71501D05A1E_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x10A1AA70)
#define CLASS_2_DD3DB71501D05A1E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x10A1ABB0)
#define CLASS_2_DD3DB71501D05A1E__CTOR_OFFSET UNITYSDK_OFFSET(0x10A1ABA0)

inline static constexpr unsigned int Class_2_DD3DB71501D05A1E_TypeDefinitionIndex = 63138;

class Class_2_DD3DB71501D05A1E : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x18
	::Class_3_6F805C3FA3D1D41D<::MoleMole::UIDataFixGameWidgetController*>* Field_2_3; // 0x20
	::Class_2_CA67A9CEB871FFD3* Field_2_2; // 0x28
	::UnityEngine::Transform* Field_2_4; // 0x30
	::Class_2_B4378B46E0020E85* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD3DB71501D05A1E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DD3DB71501D05A1E_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DD3DB71501D05A1E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD3DB71501D05A1E_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
