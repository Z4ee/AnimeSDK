#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_REQUESTMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B9A5960)
#define MIHOYO_SDK_REQUESTMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A59A0)
#define MIHOYO_SDK_REQUESTMANAGER___C__REQUESTABTEST_B__26_0_OFFSET UNITYSDK_OFFSET(0x1B9A59B0)
#define MIHOYO_SDK_REQUESTMANAGER___C__REQUESTABTEST_B__26_1_OFFSET UNITYSDK_OFFSET(0x1B9A59C0)
#define MIHOYO_SDK_REQUESTMANAGER___C__REQUESTPAYDIALOGABTESTCN_B__27_0_OFFSET UNITYSDK_OFFSET(0x1B9A59E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RequestManager___c_TypeDefinitionIndex = 8021;

	class RequestManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::RequestManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::RequestManager___c**)Il2CppClass::FromTypeDefinitionIndex(RequestManager___c_TypeDefinitionIndex)->GetStaticField(0x1E290);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RequestManager___c_TypeDefinitionIndex)->GetStaticField(0x1E298);
		}
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RequestManager___c_TypeDefinitionIndex)->GetStaticField(0x1E2A0);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__27_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(RequestManager___c_TypeDefinitionIndex)->GetStaticField(0x1E2A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RequestABTest_b__26_0(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__REQUESTABTEST_B__26_0_OFFSET))(this, a1);
		}

		::System::String* _RequestABTest_b__26_1(::System::Int32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__REQUESTABTEST_B__26_1_OFFSET))(this, a1);
		}

		::System::Void _RequestPayDialogABTestCN_b__27_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__REQUESTPAYDIALOGABTESTCN_B__27_0_OFFSET))(this, a1);
		}
	};
}
