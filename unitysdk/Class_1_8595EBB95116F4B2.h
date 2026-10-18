#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_8595EBB95116F4B2_METHOD_1_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0xBC996F0)
#define CLASS_1_8595EBB95116F4B2__CTOR_OFFSET UNITYSDK_OFFSET(0xBC995E0)

inline static constexpr unsigned int Class_1_8595EBB95116F4B2_TypeDefinitionIndex = 47754;

class Class_1_8595EBB95116F4B2 : public ::System::Object
{
public:
	::System::Single GCJMFBKLGHI; // 0x10
	::UnityEngine::Vector3 LJDHGFECMHJ; // 0x14
	::UnityEngine::Vector3 OJOMJHOMPCC; // 0x20
	::System::Single MLKAGGJKCGN; // 0x2C

	::System::Void _ctor(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8595EBB95116F4B2__CTOR_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8595EBB95116F4B2_METHOD_1_F10A0D072D26C4BF_OFFSET))(this);
	}
};
