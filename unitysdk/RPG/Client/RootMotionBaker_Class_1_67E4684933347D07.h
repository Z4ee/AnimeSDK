#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROOTMOTIONBAKER_CLASS_1_67E4684933347D07__CTOR_OFFSET UNITYSDK_OFFSET(0x184E99D0)

namespace RPG::Client
{
	inline static constexpr unsigned int RootMotionBaker_Class_1_67E4684933347D07_TypeDefinitionIndex = 65746;

	class RootMotionBaker_Class_1_67E4684933347D07 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Keyframe>* Field_1_0; // 0x10
		::System::Single Field_1_1; // 0x18
		::System::Single Field_1_2; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROOTMOTIONBAKER_CLASS_1_67E4684933347D07__CTOR_OFFSET))(this);
		}
	};
}
