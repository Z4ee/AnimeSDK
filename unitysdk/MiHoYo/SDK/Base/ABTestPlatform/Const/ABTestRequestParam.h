#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_BASE_ABTESTPLATFORM_CONST_ABTESTREQUESTPARAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A50CDB0)
#define MIHOYO_SDK_BASE_ABTESTPLATFORM_CONST_ABTESTREQUESTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A50CDA0)

namespace MiHoYo::SDK::Base::ABTestPlatform::Const
{
	inline static constexpr unsigned int ABTestRequestParam_TypeDefinitionIndex = 19441;

	class ABTestRequestParam : public ::System::Object
	{
	public:
		::System::String* AppId; // 0x10
		::System::String* AppKey; // 0x18
		::System::String* uid; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* SceneIdList; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* ExperimentIdList; // 0x30

		::System::Void _ctor(::System::String* appId, ::System::String* appKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_CONST_ABTESTREQUESTPARAM__CTOR_OFFSET))(this, appId, appKey);
		}

		::System::Void _ctor_1(::System::String* appId, ::System::String* appKey, ::System::String* uniqueId, ::System::Collections::Generic::List_1<::System::String*>* sceneIdList, ::System::Collections::Generic::List_1<::System::String*>* experimentIdList)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_CONST_ABTESTREQUESTPARAM__CTOR_1_OFFSET))(this, appId, appKey, uniqueId, sceneIdList, experimentIdList);
		}
	};
}
