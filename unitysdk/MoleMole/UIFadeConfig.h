#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7A4252233BCEB3A9.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFadeConfig_OverrideAnim; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFADECONFIG_METHOD_1_E018B38DDB58E62A_1_OFFSET UNITYSDK_OFFSET(0x1677ED80)
#define MOLEMOLE_UIFADECONFIG_METHOD_1_E018B38DDB58E62A_OFFSET UNITYSDK_OFFSET(0x1677EC00)
#define MOLEMOLE_UIFADECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1677EBF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFadeConfig_TypeDefinitionIndex = 53083;

	class UIFadeConfig : public ::System::Object
	{
	public:
		::System::String* fadeIn; // 0x10
		::System::String* fadeOut; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::UIFadeConfig_OverrideAnim*>* overrideFadeInAnim; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::UIFadeConfig_OverrideAnim*>* overrideFadeOutAnim; // 0x28
		::System::Boolean ignoreFading; // 0x30
		::System::Single ignoreFadeMaskDuration; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFADECONFIG__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_E018B38DDB58E62A(::Enum_3_7A4252233BCEB3A9 a1)
		{
			return ((::System::String*(*)(::PVOID, ::Enum_3_7A4252233BCEB3A9))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFADECONFIG_METHOD_1_E018B38DDB58E62A_OFFSET))(this, a1);
		}

		::System::String* Method_1_E018B38DDB58E62A_1(::Enum_3_7A4252233BCEB3A9 a1)
		{
			return ((::System::String*(*)(::PVOID, ::Enum_3_7A4252233BCEB3A9))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFADECONFIG_METHOD_1_E018B38DDB58E62A_1_OFFSET))(this, a1);
		}
	};
}
