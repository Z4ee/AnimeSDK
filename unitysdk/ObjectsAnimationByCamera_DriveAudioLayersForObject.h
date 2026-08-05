#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ObjectsAnimationByCamera_DriveAudioLayer;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OBJECTSANIMATIONBYCAMERA_DRIVEAUDIOLAYERSFOROBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0xE20DD70)

inline static constexpr unsigned int ObjectsAnimationByCamera_DriveAudioLayersForObject_TypeDefinitionIndex = 75779;

class ObjectsAnimationByCamera_DriveAudioLayersForObject : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::ObjectsAnimationByCamera_DriveAudioLayer*>* layers; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBJECTSANIMATIONBYCAMERA_DRIVEAUDIOLAYERSFOROBJECT__CTOR_OFFSET))(this);
	}
};
