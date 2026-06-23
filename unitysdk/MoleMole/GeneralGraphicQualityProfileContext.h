#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GraphicSettingProfileType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_GENERALGRAPHICQUALITYPROFILECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE1760)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralGraphicQualityProfileContext_TypeDefinitionIndex = 74093;

	class GeneralGraphicQualityProfileContext : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::MoleMole::GraphicSettingProfileType, ::System::String*>* GraphicProfileTypeIndexDict; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALGRAPHICQUALITYPROFILECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
