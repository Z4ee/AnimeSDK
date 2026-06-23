#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C6AB2643BC630D64.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_167BB37617B940E3;
class Class_3_248DACE3BB3053DD;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_A605FA03541FE232_METHOD_3_25D77E54879BE12D_OFFSET UNITYSDK_OFFSET(0x1877CE30)
#define CLASS_3_A605FA03541FE232_METHOD_3_8C67FFF9509E5C04_OFFSET UNITYSDK_OFFSET(0x1877D110)
#define CLASS_3_A605FA03541FE232_METHOD_3_BE8A1D0F6D838666_OFFSET UNITYSDK_OFFSET(0x1877D310)
#define CLASS_3_A605FA03541FE232_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1877D270)
#define CLASS_3_A605FA03541FE232__CTOR_OFFSET UNITYSDK_OFFSET(0x1877D2F0)

inline static constexpr unsigned int Class_3_A605FA03541FE232_TypeDefinitionIndex = 43733;

class Class_3_A605FA03541FE232 : public ::Class_2_C6AB2643BC630D64<::Class_3_A605FA03541FE232*>
{
public:
	::System::Single Field_3_1; // 0x10
	::System::Single Field_3_3; // 0x14
	::UnityEngine::Vector3 Field_3_2; // 0x18
	::UnityEngine::Vector3 Field_3_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A605FA03541FE232__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_25D77E54879BE12D(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_2_167BB37617B940E3* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + CLASS_3_A605FA03541FE232_METHOD_3_25D77E54879BE12D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_8C67FFF9509E5C04(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_248DACE3BB3053DD* a2, ::System::Single a3, ::System::Single a4, ::Class_2_167BB37617B940E3* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + CLASS_3_A605FA03541FE232_METHOD_3_8C67FFF9509E5C04_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A605FA03541FE232_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_BE8A1D0F6D838666(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_2_167BB37617B940E3* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + CLASS_3_A605FA03541FE232_METHOD_3_BE8A1D0F6D838666_OFFSET))(this, a1, a2, a3, a4);
	}
};
