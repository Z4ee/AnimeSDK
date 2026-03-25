#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class CinemachineCRPVirtualCamera; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define CLASS_1_E3C0F091037CDE77_CLASS_1_E73E54167298A951__CTOR_OFFSET UNITYSDK_OFFSET(0x1095EA40)

inline static constexpr unsigned int Class_1_E3C0F091037CDE77_Class_1_E73E54167298A951_TypeDefinitionIndex = 49147;

class Class_1_E3C0F091037CDE77_Class_1_E73E54167298A951 : public ::System::Object
{
public:
	::UnityEngine::Rendering::CRPVirtualCamera* Field_1_0; // 0x10
	::Cinemachine::CinemachineCRPVirtualCamera* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E3C0F091037CDE77_CLASS_1_E73E54167298A951__CTOR_OFFSET))(this);
	}
};
