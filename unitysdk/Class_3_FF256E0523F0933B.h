#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C6AB2643BC630D64.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_167BB37617B940E3;
class Class_3_248DACE3BB3053DD;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_3_FF256E0523F0933B_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1673C380)
#define CLASS_3_FF256E0523F0933B_METHOD_3_BE8A1D0F6D838666_OFFSET UNITYSDK_OFFSET(0x1673C460)
#define CLASS_3_FF256E0523F0933B_METHOD_3_CEE6ECEECA54D21A_OFFSET UNITYSDK_OFFSET(0x1673B7E0)
#define CLASS_3_FF256E0523F0933B_METHOD_3_E83FBEBE26AA0751_OFFSET UNITYSDK_OFFSET(0x1673B890)
#define CLASS_3_FF256E0523F0933B__CTOR_OFFSET UNITYSDK_OFFSET(0x1673C440)

inline static constexpr unsigned int Class_3_FF256E0523F0933B_TypeDefinitionIndex = 52818;

class Class_3_FF256E0523F0933B : public ::Class_2_C6AB2643BC630D64<::Class_3_FF256E0523F0933B*>
{
public:
	::System::String* Field_3_1; // 0x10
	::MoleMole::EntityHandle Field_3_0; // 0x18
	::UnityEngine::Vector3 Field_3_4; // 0x28
	::UnityEngine::Vector3 Field_3_2; // 0x34
	::System::Boolean Field_3_5; // 0x40
	::System::Single Field_3_3; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF256E0523F0933B__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_CEE6ECEECA54D21A(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_2_167BB37617B940E3* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + CLASS_3_FF256E0523F0933B_METHOD_3_CEE6ECEECA54D21A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_E83FBEBE26AA0751(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_248DACE3BB3053DD* a2, ::System::Single a3, ::System::Single a4, ::Class_2_167BB37617B940E3* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + CLASS_3_FF256E0523F0933B_METHOD_3_E83FBEBE26AA0751_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FF256E0523F0933B_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_BE8A1D0F6D838666(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_2_167BB37617B940E3* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + CLASS_3_FF256E0523F0933B_METHOD_3_BE8A1D0F6D838666_OFFSET))(this, a1, a2, a3, a4);
	}
};
