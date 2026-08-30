#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1835888C1E19F013.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0AD6129525BF5F86;
namespace RPG::GameCore { class HalfBoomerangWithDetectProjectileData; }
namespace UnityEngine { class Collider; }

#define CLASS_2_6235645892A63723_METHOD_2_0BF1620F1E4289BD_OFFSET UNITYSDK_OFFSET(0x158FDBF0)
#define CLASS_2_6235645892A63723_METHOD_2_3BF6E12D0AA53A63_OFFSET UNITYSDK_OFFSET(0x158FDCC0)
#define CLASS_2_6235645892A63723_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0x158FD750)
#define CLASS_2_6235645892A63723_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x158FD8F0)
#define CLASS_2_6235645892A63723_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x158FDA10)
#define CLASS_2_6235645892A63723_METHOD_2_C2245EC58D417830_OFFSET UNITYSDK_OFFSET(0x158FD7C0)
#define CLASS_2_6235645892A63723_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x158FE300)
#define CLASS_2_6235645892A63723__CTOR_OFFSET UNITYSDK_OFFSET(0x158FD550)

inline static constexpr unsigned int Class_2_6235645892A63723_TypeDefinitionIndex = 54954;

class Class_2_6235645892A63723 : public ::Class_1_1835888C1E19F013
{
public:
	::RPG::GameCore::HalfBoomerangWithDetectProjectileData* FPGPHIEOMFL; // 0x48
	::UnityEngine::Collider* PAKKIDHJAPI; // 0x50
	::System::Single HKNNPAFJAAO; // 0x58
	::System::Single OFBOHEOLCCE; // 0x5C
	::System::Boolean GCFHHOLDLAB; // 0x60
	::UnityEngine::Vector3 OOECFAKCPIL; // 0x64

	::System::Void _ctor(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_6235645892A63723__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6235645892A63723_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_C2245EC58D417830()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6235645892A63723_METHOD_2_C2245EC58D417830_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6235645892A63723_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6235645892A63723_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::System::Void Method_2_0BF1620F1E4289BD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6235645892A63723_METHOD_2_0BF1620F1E4289BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_3BF6E12D0AA53A63(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6235645892A63723_METHOD_2_3BF6E12D0AA53A63_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6235645892A63723_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}
};
