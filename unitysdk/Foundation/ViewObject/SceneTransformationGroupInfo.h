#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_VIEWOBJECT_SCENETRANSFORMATIONGROUPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x154B68D0)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int SceneTransformationGroupInfo_TypeDefinitionIndex = 53429;

	class SceneTransformationGroupInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>* NormalGroupHandles; // 0x10
		::Foundation::ViewObject::ViewObjectHandle CoreGroupHandle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_SCENETRANSFORMATIONGROUPINFO__CTOR_OFFSET))(this);
		}
	};
}
