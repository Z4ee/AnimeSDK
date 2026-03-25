#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_REQUESTMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FDF9D0)
#define MIHOYO_SDK_REQUESTMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FDFA10)
#define MIHOYO_SDK_REQUESTMANAGER___C__REQUESTABTEST_B__28_0_OFFSET UNITYSDK_OFFSET(0x15FDFA20)
#define MIHOYO_SDK_REQUESTMANAGER___C__REQUESTABTEST_B__28_1_OFFSET UNITYSDK_OFFSET(0x15FDFA30)
#define MIHOYO_SDK_REQUESTMANAGER___C__REQUESTPAYDIALOGABTESTCN_B__29_0_OFFSET UNITYSDK_OFFSET(0x15FDFA50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RequestManager___c_TypeDefinitionIndex = 7061;

	class RequestManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::RequestManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::RequestManager___c**)Il2CppClass::FromTypeDefinitionIndex(RequestManager___c_TypeDefinitionIndex)->GetStaticField(0x18660);
		}
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__28_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RequestManager___c_TypeDefinitionIndex)->GetStaticField(0x18668);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__28_1()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RequestManager___c_TypeDefinitionIndex)->GetStaticField(0x18670);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__29_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(RequestManager___c_TypeDefinitionIndex)->GetStaticField(0x18678);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RequestABTest_b__28_0(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__REQUESTABTEST_B__28_0_OFFSET))(this, x);
		}

		::System::String* _RequestABTest_b__28_1(::System::Int32 x)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__REQUESTABTEST_B__28_1_OFFSET))(this, x);
		}

		::System::Void _RequestPayDialogABTestCN_b__29_0(::MiHoYo::SDK::NetworkResponseModel* responseModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__REQUESTPAYDIALOGABTESTCN_B__29_0_OFFSET))(this, responseModel);
		}
	};
}
