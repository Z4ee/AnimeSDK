#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4AF7185FBAAE5D87.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }

#define CLASS_2_6445CB6AD59447E7_METHOD_2_193D1A05AAD91533_OFFSET UNITYSDK_OFFSET(0x138FDA40)
#define CLASS_2_6445CB6AD59447E7_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x138FD9D0)
#define CLASS_2_6445CB6AD59447E7_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x138FDB30)
#define CLASS_2_6445CB6AD59447E7_METHOD_2_7AA306EE117F7AA8_OFFSET UNITYSDK_OFFSET(0x138FD8F0)
#define CLASS_2_6445CB6AD59447E7_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x138FDAD0)
#define CLASS_2_6445CB6AD59447E7_METHOD_2_D14B05B68596CB40_OFFSET UNITYSDK_OFFSET(0x138FDB90)
#define CLASS_2_6445CB6AD59447E7_METHOD_2_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x138FDC20)
#define CLASS_2_6445CB6AD59447E7__CTOR_OFFSET UNITYSDK_OFFSET(0x138FDB20)

inline static constexpr unsigned int Class_2_6445CB6AD59447E7_TypeDefinitionIndex = 73313;

class Class_2_6445CB6AD59447E7 : public ::Class_1_4AF7185FBAAE5D87
{
public:
	::System::Single Field_2_0; // 0x20
	::System::Single Field_2_1; // 0x24
	::UnityEngine::Quaternion Field_2_2; // 0x28
	::UnityEngine::Vector3 Field_2_3; // 0x38

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

	::System::Boolean Method_2_D14B05B68596CB40(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_2_6445CB6AD59447E7_METHOD_2_D14B05B68596CB40_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_2_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6445CB6AD59447E7_METHOD_2_FB4BE762B6186C23_OFFSET))(this);
	}
};
