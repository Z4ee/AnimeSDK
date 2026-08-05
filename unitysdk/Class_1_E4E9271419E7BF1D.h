#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_548BC150801F9181;
class Class_1_823894195270E22F;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_E4E9271419E7BF1D_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0x169E84A0)
#define CLASS_1_E4E9271419E7BF1D_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x169E7900)
#define CLASS_1_E4E9271419E7BF1D_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x169E7C90)
#define CLASS_1_E4E9271419E7BF1D_METHOD_1_DA1A8A25D0B64A55_OFFSET UNITYSDK_OFFSET(0x169E7A50)
#define CLASS_1_E4E9271419E7BF1D__CTOR_OFFSET UNITYSDK_OFFSET(0x169E7670)

inline static constexpr unsigned int Class_1_E4E9271419E7BF1D_TypeDefinitionIndex = 90225;

class Class_1_E4E9271419E7BF1D : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_3; // 0x10
	::Class_1_823894195270E22F* Field_1_2; // 0x18
	::System::Single Field_1_0; // 0x20
	::UnityEngine::Vector3 Field_1_1; // 0x24
	::System::Single Field_1_7; // 0x30
	::UnityEngine::Vector3 Field_1_6; // 0x34
	::System::Int32 Field_1_5; // 0x40

	::System::Void _ctor(::MoleMole::Battle::Entity* a1, ::Class_1_823894195270E22F* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_823894195270E22F*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E4E9271419E7BF1D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4E9271419E7BF1D_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_DA1A8A25D0B64A55(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E4E9271419E7BF1D_METHOD_1_DA1A8A25D0B64A55_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E4E9271419E7BF1D_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_548BC150801F9181* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_548BC150801F9181*))((::PBYTE)hIl2Cpp + CLASS_1_E4E9271419E7BF1D_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}
};
