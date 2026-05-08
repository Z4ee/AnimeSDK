#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Class_2_27069D8215DFD35F_1_Enum_3_7054BCEEBDF08D96.h"

namespace UnityEngine { class Collider; }

#define CLASS_2_27069D8215DFD35F_1_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x117DD9D0)
#define CLASS_2_27069D8215DFD35F_1_METHOD_2_8415E9C4AFD7F522_OFFSET UNITYSDK_OFFSET(0x117DDAF0)
#define CLASS_2_27069D8215DFD35F_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x117DDA60)
#define CLASS_2_27069D8215DFD35F_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x117DD950)
#define CLASS_2_27069D8215DFD35F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x117DD9C0)

inline static constexpr unsigned int Class_2_27069D8215DFD35F_1_TypeDefinitionIndex = 52239;

class Class_2_27069D8215DFD35F_1 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_3 = 0x42; // 0x0
	::UnityEngine::Collider* Field_2_1; // 0x20
	::System::UInt32 Field_2_0; // 0x28
	::Class_2_27069D8215DFD35F_1_Enum_3_7054BCEEBDF08D96 Field_2_2; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_27069D8215DFD35F_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27069D8215DFD35F_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27069D8215DFD35F_1_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27069D8215DFD35F_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_8415E9C4AFD7F522(::System::UInt32 a1, ::UnityEngine::Collider* a2, ::Class_2_27069D8215DFD35F_1_Enum_3_7054BCEEBDF08D96 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Collider*, ::Class_2_27069D8215DFD35F_1_Enum_3_7054BCEEBDF08D96))((::PBYTE)hIl2Cpp + CLASS_2_27069D8215DFD35F_1_METHOD_2_8415E9C4AFD7F522_OFFSET))(this, a1, a2, a3);
	}
};
