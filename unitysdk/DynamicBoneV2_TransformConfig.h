#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DynamicBoneColliderBase;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define DYNAMICBONEV2_TRANSFORMCONFIG_GETLABELTEXT_OFFSET UNITYSDK_OFFSET(0x1E1B7A30)
#define DYNAMICBONEV2_TRANSFORMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B7540)

inline static constexpr unsigned int DynamicBoneV2_TransformConfig_TypeDefinitionIndex = 34633;

class DynamicBoneV2_TransformConfig : public ::System::Object
{
public:
	::UnityEngine::Transform* m_Root; // 0x10
	::System::Collections::Generic::List_1<::DynamicBoneColliderBase*>* m_Colliders; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* m_Exclusions; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_TRANSFORMCONFIG__CTOR_OFFSET))(this);
	}

	::System::String* GetLabelText()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DYNAMICBONEV2_TRANSFORMCONFIG_GETLABELTEXT_OFFSET))(this);
	}
};
