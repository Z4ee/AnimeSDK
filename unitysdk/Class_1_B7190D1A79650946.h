#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }

#define CLASS_1_B7190D1A79650946__CTOR_OFFSET UNITYSDK_OFFSET(0x1C38B910)

inline static constexpr unsigned int Class_1_B7190D1A79650946_TypeDefinitionIndex = 41557;

class Class_1_B7190D1A79650946 : public ::System::Object
{
public:
	::System::Action* DPANHIICMLD; // 0x10
	::System::Boolean ELLNLDDDJLO; // 0x18
	::UnityEngine::Quaternion LMHMOCNANAE; // 0x1C
	::UnityEngine::Vector3 DNFLHFPODGF; // 0x2C
	::System::Single IEHPFADHJFD; // 0x38
	::UnityEngine::Vector3 ILPMEGCIAOA; // 0x3C
	::System::Single BJMAMHMCOEL; // 0x48
	::UnityEngine::Quaternion PHKKNFLLCFF; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7190D1A79650946__CTOR_OFFSET))(this);
	}
};
