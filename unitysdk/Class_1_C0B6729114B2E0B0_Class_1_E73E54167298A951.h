#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineCRPVirtualCamera; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define CLASS_1_C0B6729114B2E0B0_CLASS_1_E73E54167298A951__CTOR_OFFSET UNITYSDK_OFFSET(0x1889F7B0)

inline static constexpr unsigned int Class_1_C0B6729114B2E0B0_Class_1_E73E54167298A951_TypeDefinitionIndex = 60767;

class Class_1_C0B6729114B2E0B0_Class_1_E73E54167298A951 : public ::System::Object
{
public:
	::Cinemachine::CinemachineCRPVirtualCamera* APNIMMDOLMO; // 0x10
	::UnityEngine::Rendering::CRPVirtualCamera* NEFNCKGGCEN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0B6729114B2E0B0_CLASS_1_E73E54167298A951__CTOR_OFFSET))(this);
	}
};
