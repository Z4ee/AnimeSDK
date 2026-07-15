#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3F1B1DE9D9F51912.h"

class Class_1_A043D803AC652E6E;
namespace UnityEngine { class Transform; }

#define CLASS_4_39033536A28A22B8_CLONE_OFFSET UNITYSDK_OFFSET(0x1621C050)
#define CLASS_4_39033536A28A22B8_METHOD_4_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1621BFC0)
#define CLASS_4_39033536A28A22B8_METHOD_4_5B2CAD1A0582F9BB_OFFSET UNITYSDK_OFFSET(0x1621C0F0)
#define CLASS_4_39033536A28A22B8_METHOD_4_6AA0A5D7371B5A80_OFFSET UNITYSDK_OFFSET(0x1621BE90)
#define CLASS_4_39033536A28A22B8_METHOD_4_D1C434601A98B481_OFFSET UNITYSDK_OFFSET(0x1621BD40)
#define CLASS_4_39033536A28A22B8_REVERSE_OFFSET UNITYSDK_OFFSET(0x1621C0A0)
#define CLASS_4_39033536A28A22B8_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0x1621BF40)
#define CLASS_4_39033536A28A22B8__CTOR_OFFSET UNITYSDK_OFFSET(0x1621BE70)

inline static constexpr unsigned int Class_4_39033536A28A22B8_TypeDefinitionIndex = 70100;

class Class_4_39033536A28A22B8 : public ::Class_3_3F1B1DE9D9F51912
{
public:
	::System::Boolean Field_4_0; // 0x38
	::System::Int32 Field_4_1; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_39033536A28A22B8__CTOR_OFFSET))(this);
	}

	static ::Class_4_39033536A28A22B8* Method_4_D1C434601A98B481(::System::Single a1, ::System::Int32 a2)
	{
		return ((::Class_4_39033536A28A22B8*(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_39033536A28A22B8_METHOD_4_D1C434601A98B481_OFFSET))(a1, a2);
	}

	::System::Boolean Method_4_6AA0A5D7371B5A80(::System::Single a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_39033536A28A22B8_METHOD_4_6AA0A5D7371B5A80_OFFSET))(this, a1, a2);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_4_39033536A28A22B8_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::System::Void Method_4_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_39033536A28A22B8_METHOD_4_30D1209326FA87FC_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_39033536A28A22B8_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_39033536A28A22B8_REVERSE_OFFSET))(this);
	}

	::System::Void Method_4_5B2CAD1A0582F9BB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_39033536A28A22B8_METHOD_4_5B2CAD1A0582F9BB_OFFSET))(this, a1);
	}
};
