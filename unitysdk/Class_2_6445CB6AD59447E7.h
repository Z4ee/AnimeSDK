#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4AF7185FBAAE5D87.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }

#define CLASS_2_6445CB6AD59447E7_METHOD_2_193D1A05AAD91533_OFFSET UNITYSDK_OFFSET(0x8AC5EC0)
#define CLASS_2_6445CB6AD59447E7_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x8AC5E50)
#define CLASS_2_6445CB6AD59447E7_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8AC5FB0)
#define CLASS_2_6445CB6AD59447E7_METHOD_2_7AA306EE117F7AA8_OFFSET UNITYSDK_OFFSET(0x8AC5D70)
#define CLASS_2_6445CB6AD59447E7_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x8AC5F50)
#define CLASS_2_6445CB6AD59447E7_METHOD_2_A52C4C6C7A006B39_OFFSET UNITYSDK_OFFSET(0x8AC6010)
#define CLASS_2_6445CB6AD59447E7_METHOD_2_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x8AC60A0)
#define CLASS_2_6445CB6AD59447E7__CTOR_OFFSET UNITYSDK_OFFSET(0x8AC5FA0)

inline static constexpr unsigned int Class_2_6445CB6AD59447E7_TypeDefinitionIndex = 64244;

class Class_2_6445CB6AD59447E7 : public ::Class_1_4AF7185FBAAE5D87
{
public:
	::System::Single Field_2_3; // 0x20
	::System::Single Field_2_0; // 0x24
	::UnityEngine::Vector3 Field_2_1; // 0x28
	::UnityEngine::Quaternion Field_2_2; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6445CB6AD59447E7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7AA306EE117F7AA8(::System::Action* a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_6445CB6AD59447E7_METHOD_2_7AA306EE117F7AA8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6445CB6AD59447E7_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_2_193D1A05AAD91533(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_6445CB6AD59447E7_METHOD_2_193D1A05AAD91533_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6445CB6AD59447E7_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6445CB6AD59447E7_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Boolean Method_2_A52C4C6C7A006B39(::System::Single P0, ::UnityEngine::Vector3& P1, ::UnityEngine::Quaternion& P2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_6445CB6AD59447E7_METHOD_2_A52C4C6C7A006B39_OFFSET))(this, P0, P1, P2);
	}

	::System::Single Method_2_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6445CB6AD59447E7_METHOD_2_FB4BE762B6186C23_OFFSET))(this);
	}
};
