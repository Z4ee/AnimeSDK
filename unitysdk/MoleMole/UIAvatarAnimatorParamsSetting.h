#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAvatarAnimationSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIAVATARANIMATORPARAMSSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x197E39B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarAnimatorParamsSetting_TypeDefinitionIndex = 43454;

	class UIAvatarAnimatorParamsSetting : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* TriggerDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* IntegerDict; // 0x18
		::MoleMole::UIAvatarAnimationSetting* AvatarAnimationSetting; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FloatDict; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* BooleanDict; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARANIMATORPARAMSSETTING__CTOR_OFFSET))(this);
		}
	};
}
