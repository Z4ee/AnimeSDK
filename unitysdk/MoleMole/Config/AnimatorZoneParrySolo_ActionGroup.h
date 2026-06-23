#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneParrySolo_RotateType.h"
#include "unitysdk/MoleMole/Config/HitDataType.h"
#include "unitysdk/MoleMole/Config/HitStrengthType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1629EFF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneParrySolo_ActionGroup_TypeDefinitionIndex = 69467;

	class AnimatorZoneParrySolo_ActionGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* animTagList; // 0x10
		::System::Nullable_1<::MoleMole::Config::HitStrengthType> hitStrengthType; // 0x18
		::System::Nullable_1<::MoleMole::Config::HitDataType> hitType; // 0x20
		::MoleMole::Config::AnimatorZoneParrySolo_RotateType rotateType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ACTIONGROUP__CTOR_OFFSET))(this);
		}
	};
}
