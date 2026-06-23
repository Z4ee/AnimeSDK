#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics { class StackFrame; }

#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_CREATECHECKERHANDLE_OFFSET UNITYSDK_OFFSET(0x1DDA7FE0)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_CURRENTSTACKCUSTOMIZEDLOG_OFFSET UNITYSDK_OFFSET(0x1DDA8320)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_DISPOSEALL_OFFSET UNITYSDK_OFFSET(0x1DDA8530)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_DISPOSECHECKHANDLE_OFFSET UNITYSDK_OFFSET(0x1DDA7C40)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DDA7B50)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_GET_USECHECKERPOOL_OFFSET UNITYSDK_OFFSET(0x1DDA7830)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_GET_USEHANDLECHECKER_OFFSET UNITYSDK_OFFSET(0x1DDA7770)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_GET_USELOADSTACK_OFFSET UNITYSDK_OFFSET(0x1DDA78F0)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_ISMETHODTOBEINCLUDED_OFFSET UNITYSDK_OFFSET(0x1DDA8800)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_MARKNOTDISPOSE_OFFSET UNITYSDK_OFFSET(0x1DDA7F60)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_MARKNOTUSE_OFFSET UNITYSDK_OFFSET(0x1DDA7E10)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_METHODCALLLOG_OFFSET UNITYSDK_OFFSET(0x1DDA89B0)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_SET_USECHECKERPOOL_OFFSET UNITYSDK_OFFSET(0x1DDA7890)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_SET_USEHANDLECHECKER_OFFSET UNITYSDK_OFFSET(0x1DDA77D0)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_SET_USELOADSTACK_OFFSET UNITYSDK_OFFSET(0x1DDA7950)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDA79B0)
#define FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDA7A50)

namespace Foundation
{
	inline static constexpr unsigned int AssetRequestHandle_AssetRequestHandleChecker_TypeDefinitionIndex = 8238;

	class AssetRequestHandle_AssetRequestHandleChecker : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::WeakReference_1<::Foundation::AssetRequestHandle_AssetRequestHandleChecker*>*>** StaticGet_WeakRefCheckers()
		{
			return (::System::Collections::Generic::List_1<::System::WeakReference_1<::Foundation::AssetRequestHandle_AssetRequestHandleChecker*>*>**)Il2CppClass::FromTypeDefinitionIndex(AssetRequestHandle_AssetRequestHandleChecker_TypeDefinitionIndex)->GetStaticField(0x68A0);
		}
		static ::System::Boolean* StaticGet__UseCheckerPool_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetRequestHandle_AssetRequestHandleChecker_TypeDefinitionIndex)->GetStaticField(0x3600);
		}
		static ::System::Boolean* StaticGet__UseLoadStack_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetRequestHandle_AssetRequestHandleChecker_TypeDefinitionIndex)->GetStaticField(0x3601);
		}
		static ::System::Boolean* StaticGet__UseHandleChecker_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AssetRequestHandle_AssetRequestHandleChecker_TypeDefinitionIndex)->GetStaticField(0x3602);
		}
		::Foundation::AssetRequestHandle handle; // 0x10
		::System::String* LoadStack; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_UseHandleChecker()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_GET_USEHANDLECHECKER_OFFSET))();
		}

		static ::System::Void set_UseHandleChecker(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_SET_USEHANDLECHECKER_OFFSET))(value);
		}

		static ::System::Boolean get_UseCheckerPool()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_GET_USECHECKERPOOL_OFFSET))();
		}

		static ::System::Void set_UseCheckerPool(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_SET_USECHECKERPOOL_OFFSET))(value);
		}

		static ::System::Boolean get_UseLoadStack()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_GET_USELOADSTACK_OFFSET))();
		}

		static ::System::Void set_UseLoadStack(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_SET_USELOADSTACK_OFFSET))(value);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_FINALIZE_OFFSET))(this);
		}

		::System::Void DisposeCheckHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_DISPOSECHECKHANDLE_OFFSET))(this);
		}

		::System::Void MarkNotDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_MARKNOTDISPOSE_OFFSET))(this);
		}

		::System::Void MarkNotUse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_MARKNOTUSE_OFFSET))(this);
		}

		static ::Foundation::AssetRequestHandle CreateCheckerHandle(::Foundation::AssetRequestHandle& originHandle)
		{
			return ((::Foundation::AssetRequestHandle(*)(::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_CREATECHECKERHANDLE_OFFSET))(originHandle);
		}

		static ::System::Void DisposeAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_DISPOSEALL_OFFSET))();
		}

		static ::System::String* CurrentStackCustomizedLog()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_CURRENTSTACKCUSTOMIZEDLOG_OFFSET))();
		}

		static ::System::Boolean IsMethodToBeIncluded(::System::Diagnostics::StackFrame* p_StackMethod)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::StackFrame*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_ISMETHODTOBEINCLUDED_OFFSET))(p_StackMethod);
		}

		static ::System::String* MethodCallLog(::System::Diagnostics::StackFrame* p_MethodCall)
		{
			return ((::System::String*(*)(::System::Diagnostics::StackFrame*))((::PBYTE)hIl2Cpp + FOUNDATION_ASSETREQUESTHANDLE_ASSETREQUESTHANDLECHECKER_METHODCALLLOG_OFFSET))(p_MethodCall);
		}
	};
}
