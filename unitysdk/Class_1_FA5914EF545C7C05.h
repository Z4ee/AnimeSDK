#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define CLASS_1_FA5914EF545C7C05__CTOR_OFFSET UNITYSDK_OFFSET(0x15CA8430)

inline static constexpr unsigned int Class_1_FA5914EF545C7C05_TypeDefinitionIndex = 78062;

class Class_1_FA5914EF545C7C05 : public ::System::Object
{
public:
	::System::Action* DPANHIICMLD; // 0x10
	::UnityEngine::Transform* MCLLALGABAB; // 0x18
	::UnityEngine::Vector3 FJMCLOIEMKG; // 0x20
	::System::Single PMHMEGEJDGP; // 0x2C
	::System::Single GCJMFBKLGHI; // 0x30
	::System::Single IEHPFADHJFD; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FA5914EF545C7C05__CTOR_OFFSET))(this);
	}
};
