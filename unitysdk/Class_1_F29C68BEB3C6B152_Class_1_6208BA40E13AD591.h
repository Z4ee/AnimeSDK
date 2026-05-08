#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::UI { class Slider; }

#define CLASS_1_F29C68BEB3C6B152_CLASS_1_6208BA40E13AD591_METHOD_1_CCD88C0D86A5A786_OFFSET UNITYSDK_OFFSET(0x11F53D30)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_6208BA40E13AD591__CTOR_OFFSET UNITYSDK_OFFSET(0x11F53D20)

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152_Class_1_6208BA40E13AD591_TypeDefinitionIndex = 62601;

class Class_1_F29C68BEB3C6B152_Class_1_6208BA40E13AD591 : public ::System::Object
{
public:
	::UnityEngine::UI::Slider* Field_1_0; // 0x10
	::UnityEngine::Events::UnityAction_1<::System::Single>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_6208BA40E13AD591__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CCD88C0D86A5A786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_6208BA40E13AD591_METHOD_1_CCD88C0D86A5A786_OFFSET))(this);
	}
};
