#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_PC_OS_GOOGLEPLAYABTESTREQUESTPARAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19933ED0)
#define MIHOYO_SDK_PC_OS_GOOGLEPLAYABTESTREQUESTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1993EBC0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int GooglePlayABTestRequestParam_TypeDefinitionIndex = 8493;

	class GooglePlayABTestRequestParam : public ::System::Object
	{
	public:
		// static const ::System::String* ABTEST_KEY; // 0x0
		::System::String* uid; // 0x10
		::System::String* AppId; // 0x18
		::System::String* AppKey; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* SceneIdList; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* ExperimentIdList; // 0x30

		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEPLAYABTESTREQUESTPARAM__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Collections::Generic::List_1<::System::String*>* a4, ::System::Collections::Generic::List_1<::System::String*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_GOOGLEPLAYABTESTREQUESTPARAM__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
