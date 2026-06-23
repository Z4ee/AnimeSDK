#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject { class SceneTransformationGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FOUNDATION_VIEWOBJECT_SCENETRANSFORMATIONHELPER_ADDSCENETRANSFORMATIONGROUP_OFFSET UNITYSDK_OFFSET(0x114D5E30)
#define FOUNDATION_VIEWOBJECT_SCENETRANSFORMATIONHELPER_REMOVESCENETRANSFORMATIONGROUP_OFFSET UNITYSDK_OFFSET(0x114D60B0)
#define FOUNDATION_VIEWOBJECT_SCENETRANSFORMATIONHELPER_TRYGETSCENETRANSFORMATIONGROUPINFO_OFFSET UNITYSDK_OFFSET(0x114D62A0)
#define FOUNDATION_VIEWOBJECT_SCENETRANSFORMATIONHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x114D63C0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int SceneTransformationHelper_TypeDefinitionIndex = 74690;

	class SceneTransformationHelper : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::ViewObject::SceneTransformationGroupInfo*>* _sceneTransformationGroupInfos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SCENETRANSFORMATIONHELPER__CTOR_OFFSET))(this);
		}

		::System::Void AddSceneTransformationGroup(::System::String* tag, ::Foundation::ViewObject::ViewObjectHandle groupHandle, ::System::Boolean isCoreGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SCENETRANSFORMATIONHELPER_ADDSCENETRANSFORMATIONGROUP_OFFSET))(this, tag, groupHandle, isCoreGroup);
		}

		::System::Void RemoveSceneTransformationGroup(::System::String* tag, ::Foundation::ViewObject::ViewObjectHandle groupHandle, ::System::Boolean isCoreGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::ViewObject::ViewObjectHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SCENETRANSFORMATIONHELPER_REMOVESCENETRANSFORMATIONGROUP_OFFSET))(this, tag, groupHandle, isCoreGroup);
		}

		::System::Boolean TryGetSceneTransformationGroupInfo(::System::String* tag, ::Foundation::ViewObject::SceneTransformationGroupInfo*& groupInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Foundation::ViewObject::SceneTransformationGroupInfo*&))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SCENETRANSFORMATIONHELPER_TRYGETSCENETRANSFORMATIONGROUPINFO_OFFSET))(this, tag, groupInfo);
		}
	};
}
