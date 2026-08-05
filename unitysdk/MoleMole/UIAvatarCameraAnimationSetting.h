#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAvatarAnimationSetting; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_UIAVATARCAMERAANIMATIONSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1928DD90)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarCameraAnimationSetting_TypeDefinitionIndex = 43584;

	class UIAvatarCameraAnimationSetting : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* IntegerDict; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* BooleanDict; // 0x18
		::MoleMole::UIAvatarAnimationSetting* AnimationSetting; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* TriggerDict; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* FloatDict; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARCAMERAANIMATIONSETTING__CTOR_OFFSET))(this);
		}
	};
}
