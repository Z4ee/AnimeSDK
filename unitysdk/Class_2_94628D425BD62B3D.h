#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::Client { class LocalizedText; }
namespace UnityEngine { class Transform; }

#define CLASS_2_94628D425BD62B3D_METHOD_2_255811211D98CDCE_OFFSET UNITYSDK_OFFSET(0x1592FDF0)
#define CLASS_2_94628D425BD62B3D_METHOD_2_708735AB8B91FFB2_OFFSET UNITYSDK_OFFSET(0x1592FE50)
#define CLASS_2_94628D425BD62B3D_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x1592FC70)
#define CLASS_2_94628D425BD62B3D__CTOR_OFFSET UNITYSDK_OFFSET(0x1592FF00)
#define CLASS_2_94628D425BD62B3D__ONBIND_OFFSET UNITYSDK_OFFSET(0x1592FCD0)

inline static constexpr unsigned int Class_2_94628D425BD62B3D_TypeDefinitionIndex = 71805;

class Class_2_94628D425BD62B3D : public ::Class_1_34917908B7833130
{
public:
	::RPG::Client::LocalizedText* EAEFJPKNMJJ; // 0x60
	::UnityEngine::Transform* KKMDAOCHKFF; // 0x68
	::System::Boolean AKBPNMEFGAO; // 0x70
	::System::Int32 COEMCOBPMKD; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94628D425BD62B3D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_94628D425BD62B3D_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94628D425BD62B3D__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_255811211D98CDCE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_94628D425BD62B3D_METHOD_2_255811211D98CDCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_708735AB8B91FFB2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_94628D425BD62B3D_METHOD_2_708735AB8B91FFB2_OFFSET))(this, a1);
	}
};
