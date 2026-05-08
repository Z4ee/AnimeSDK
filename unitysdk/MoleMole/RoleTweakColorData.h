#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_ROLETWEAKCOLORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15B4A9E0)

namespace MoleMole
{
	inline static constexpr unsigned int RoleTweakColorData_TypeDefinitionIndex = 74694;

	class RoleTweakColorData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>* colors; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ROLETWEAKCOLORDATA__CTOR_OFFSET))(this);
		}
	};
}
