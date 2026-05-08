#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class MonoUIImageArray_ChildData;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MONOUIIMAGEARRAY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11BA77B0)
#define MONOUIIMAGEARRAY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11BA7760)
#define MONOUIIMAGEARRAY_UPDATEANIMATIONS_OFFSET UNITYSDK_OFFSET(0x11BA7850)
#define MONOUIIMAGEARRAY_UPDATE_OFFSET UNITYSDK_OFFSET(0x11BA77F0)
#define MONOUIIMAGEARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x11BA7C10)

inline static constexpr unsigned int MonoUIImageArray_TypeDefinitionIndex = 51915;

class MonoUIImageArray : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean enableSwingAnimation; // 0x18
	::System::Single swingAmplitude; // 0x1C
	::System::Single swingSpeed; // 0x20
	::System::Boolean enableBounceAnimation; // 0x24
	::System::Single bounceWeight; // 0x28
	::System::Single bounceDistance; // 0x2C
	::System::Single bounceSpeed; // 0x30
	::System::Collections::Generic::List_1<::MonoUIImageArray_ChildData*>* childDataList; // 0x38
	::System::Single animationStartTime; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIIMAGEARRAY__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIIMAGEARRAY_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIIMAGEARRAY_ONDISABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUIIMAGEARRAY_UPDATE_OFFSET))(this);
	}

	::System::Void UpdateAnimations(::System::Single time)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MONOUIIMAGEARRAY_UPDATEANIMATIONS_OFFSET))(this, time);
	}
};
