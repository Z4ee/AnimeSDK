#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }

#define CLASS_1_4AF7185FBAAE5D87_DISPOSE_OFFSET UNITYSDK_OFFSET(0x111A95A0)
#define CLASS_1_4AF7185FBAAE5D87_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x111A9550)
#define CLASS_1_4AF7185FBAAE5D87_METHOD_1_193D1A05AAD91533_OFFSET UNITYSDK_OFFSET(0x111A9630)
#define CLASS_1_4AF7185FBAAE5D87_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x111A96B0)
#define CLASS_1_4AF7185FBAAE5D87_METHOD_1_A36150C5DCC8409E_1_OFFSET UNITYSDK_OFFSET(0x111A9740)
#define CLASS_1_4AF7185FBAAE5D87_METHOD_1_A36150C5DCC8409E_2_OFFSET UNITYSDK_OFFSET(0x111A9780)
#define CLASS_1_4AF7185FBAAE5D87_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x111A9700)
#define CLASS_1_4AF7185FBAAE5D87_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x111A95F0)
#define CLASS_1_4AF7185FBAAE5D87__CTOR_OFFSET UNITYSDK_OFFSET(0x111A97C0)

inline static constexpr unsigned int Class_1_4AF7185FBAAE5D87_TypeDefinitionIndex = 64243;

class Class_1_4AF7185FBAAE5D87 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Class_1_4AF7185FBAAE5D87* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF7185FBAAE5D87__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4AF7185FBAAE5D87_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF7185FBAAE5D87_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF7185FBAAE5D87_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_193D1A05AAD91533(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + CLASS_1_4AF7185FBAAE5D87_METHOD_1_193D1A05AAD91533_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF7185FBAAE5D87_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF7185FBAAE5D87_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF7185FBAAE5D87_METHOD_1_A36150C5DCC8409E_1_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AF7185FBAAE5D87_METHOD_1_A36150C5DCC8409E_2_OFFSET))(this);
	}
};
