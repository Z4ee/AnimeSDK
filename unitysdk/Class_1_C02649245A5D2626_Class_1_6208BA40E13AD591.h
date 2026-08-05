#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_1_C02649245A5D2626_CLASS_1_6208BA40E13AD591_METHOD_1_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0x1645F2B0)
#define CLASS_1_C02649245A5D2626_CLASS_1_6208BA40E13AD591__CTOR_OFFSET UNITYSDK_OFFSET(0x1645F2A0)

inline static constexpr unsigned int Class_1_C02649245A5D2626_Class_1_6208BA40E13AD591_TypeDefinitionIndex = 52543;

class Class_1_C02649245A5D2626_Class_1_6208BA40E13AD591 : public ::System::Object
{
public:
	::UnityEngine::UI::Slider* Field_1_0; // 0x10
	::UnityEngine::Events::UnityAction_1<::System::Single>* Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_6208BA40E13AD591__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CCD88C0D86A5A786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C02649245A5D2626_CLASS_1_6208BA40E13AD591_METHOD_1_CCD88C0D86A5A786_OFFSET))(this);
	}
};
