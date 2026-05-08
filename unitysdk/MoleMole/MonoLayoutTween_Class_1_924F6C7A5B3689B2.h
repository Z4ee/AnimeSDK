#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI { class LayoutElement; }

#define MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_924F6C7A5B3689B2_METHOD_1_3C927B51D2142A24_OFFSET UNITYSDK_OFFSET(0x13EA4ED0)
#define MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_924F6C7A5B3689B2_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x13EA4EA0)
#define MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_924F6C7A5B3689B2__CTOR_OFFSET UNITYSDK_OFFSET(0x13EA4E90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoLayoutTween_Class_1_924F6C7A5B3689B2_TypeDefinitionIndex = 48360;

	class MonoLayoutTween_Class_1_924F6C7A5B3689B2 : public ::System::Object
	{
	public:
		::UnityEngine::UI::LayoutElement* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_924F6C7A5B3689B2__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_FB4BE762B6186C23()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_924F6C7A5B3689B2_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
		}

		::System::Void Method_1_3C927B51D2142A24(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOLAYOUTTWEEN_CLASS_1_924F6C7A5B3689B2_METHOD_1_3C927B51D2142A24_OFFSET))(this, a1);
		}
	};
}
