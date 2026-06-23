#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C6AB2643BC630D64.h"
#include "unitysdk/Enum_3_AF4D3A3041939147.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_167BB37617B940E3;
class Class_3_248DACE3BB3053DD;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_3_5F4067AFB9617EA3_METHOD_3_48FE5A4C8416B858_OFFSET UNITYSDK_OFFSET(0x1AE9DBF0)
#define CLASS_3_5F4067AFB9617EA3_METHOD_3_6EC85C0A198B825E_OFFSET UNITYSDK_OFFSET(0x1AE9DE50)
#define CLASS_3_5F4067AFB9617EA3_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1AE9DFC0)
#define CLASS_3_5F4067AFB9617EA3_METHOD_3_AB156C9AD7E862FC_OFFSET UNITYSDK_OFFSET(0x1AE9D8D0)
#define CLASS_3_5F4067AFB9617EA3_METHOD_3_BE8A1D0F6D838666_OFFSET UNITYSDK_OFFSET(0x1AE9E170)
#define CLASS_3_5F4067AFB9617EA3__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE9E100)

inline static constexpr unsigned int Class_3_5F4067AFB9617EA3_TypeDefinitionIndex = 81587;

class Class_3_5F4067AFB9617EA3 : public ::Class_2_C6AB2643BC630D64<::Class_3_5F4067AFB9617EA3*>
{
public:
	::System::String* Field_3_2; // 0x10
	::MoleMole::EntityHandle Field_3_1; // 0x18
	::MoleMole::EntityHandle Field_3_11; // 0x28
	::UnityEngine::AnimationCurve* Field_3_8; // 0x38
	::UnityEngine::AnimationCurve* Field_3_9; // 0x40
	::MoleMole::EntityHandle Field_3_0; // 0x48
	::Class_3_DFD5D1FDB9D2A4AC* Field_3_12; // 0x58
	::System::String* Field_3_3; // 0x60
	::System::String* Field_3_4; // 0x68
	::UnityEngine::AnimationCurve* Field_3_10; // 0x70
	::UnityEngine::Vector3 Field_3_13; // 0x78
	::UnityEngine::Vector3 Field_3_14; // 0x84
	::System::Single Field_3_5; // 0x90
	::Enum_3_AF4D3A3041939147 Field_3_7; // 0x94
	::System::Single Field_3_6; // 0x98
	::UnityEngine::Vector3 Field_3_15; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F4067AFB9617EA3__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_AB156C9AD7E862FC(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_2_167BB37617B940E3* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + CLASS_3_5F4067AFB9617EA3_METHOD_3_AB156C9AD7E862FC_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_6EC85C0A198B825E(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_248DACE3BB3053DD* a2, ::System::Single a3, ::System::Single a4, ::Class_2_167BB37617B940E3* a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_248DACE3BB3053DD*, ::System::Single, ::System::Single, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + CLASS_3_5F4067AFB9617EA3_METHOD_3_6EC85C0A198B825E_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5F4067AFB9617EA3_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_BE8A1D0F6D838666(::Class_3_248DACE3BB3053DD* a1, ::MoleMole::Battle::Entity* a2, ::MoleMole::Battle::Entity* a3, ::Class_2_167BB37617B940E3* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_248DACE3BB3053DD*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*))((::PBYTE)hIl2Cpp + CLASS_3_5F4067AFB9617EA3_METHOD_3_BE8A1D0F6D838666_OFFSET))(this, a1, a2, a3, a4);
	}

	::UnityEngine::Vector3 Method_3_48FE5A4C8416B858(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_5F4067AFB9617EA3_METHOD_3_48FE5A4C8416B858_OFFSET))(this, a1);
	}
};
