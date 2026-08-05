#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C6AB2643BC630D64.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_14986121AA61AD99;
class Class_3_248DACE3BB3053DD;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_A605FA03541FE232_2_METHOD_3_8C67FFF9509E5C04_OFFSET UNITYSDK_OFFSET(0x199340D0)
#define CLASS_3_A605FA03541FE232_2_METHOD_3_BE8A1D0F6D838666_OFFSET UNITYSDK_OFFSET(0x199342B0)
#define CLASS_3_A605FA03541FE232_2_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19934230)
#define CLASS_3_A605FA03541FE232_2_METHOD_3_CEE6ECEECA54D21A_OFFSET UNITYSDK_OFFSET(0x19934010)
#define CLASS_3_A605FA03541FE232_2__CTOR_OFFSET UNITYSDK_OFFSET(0x19934290)

inline static constexpr unsigned int Class_3_A605FA03541FE232_2_TypeDefinitionIndex = 90681;

class Class_3_A605FA03541FE232_2 : public ::Class_2_C6AB2643BC630D64<::Class_3_A605FA03541FE232_2*>
{
public:
	::System::Single Field_3_7; // 0x10
	::UnityEngine::Vector3 Field_3_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A605FA03541FE232_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CEE6ECEECA54D21A(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_2_14986121AA61AD99* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_A605FA03541FE232_2_METHOD_3_CEE6ECEECA54D21A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_8C67FFF9509E5C04(::Class_3_C93CC3D2C2AC4067* a1, ::Class_3_248DACE3BB3053DD* a2, ::System::Single a3, ::System::Single a4, ::Class_2_14986121AA61AD99* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_A605FA03541FE232_2_METHOD_3_8C67FFF9509E5C04_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A605FA03541FE232_2_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_BE8A1D0F6D838666(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_2_14986121AA61AD99* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + CLASS_3_A605FA03541FE232_2_METHOD_3_BE8A1D0F6D838666_OFFSET))(this, a1, a2, a3, a4);
	}
};
