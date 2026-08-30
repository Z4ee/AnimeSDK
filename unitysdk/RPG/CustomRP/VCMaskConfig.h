#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/VCMask.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CUSTOMRP_VCMASKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE5ABF0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int VCMaskConfig_TypeDefinitionIndex = 37003;

	class VCMaskConfig : public ::System::Object
	{
	public:
		::RPG::CustomRP::VCMask vcMask; // 0x10
		::System::Boolean isLight; // 0x14
		::System::Boolean findChild; // 0x15
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* maskList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_VCMASKCONFIG__CTOR_OFFSET))(this);
		}
	};
}
