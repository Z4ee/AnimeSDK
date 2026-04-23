#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_REQUESTMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1763D710)
#define MIHOYO_SDK_REQUESTMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1763D750)
#define MIHOYO_SDK_REQUESTMANAGER___C__REQUESTABTEST_B__26_0_OFFSET UNITYSDK_OFFSET(0x1763D760)
#define MIHOYO_SDK_REQUESTMANAGER___C__REQUESTABTEST_B__26_1_OFFSET UNITYSDK_OFFSET(0x1763D770)
#define MIHOYO_SDK_REQUESTMANAGER___C__REQUESTPAYDIALOGABTESTCN_B__27_0_OFFSET UNITYSDK_OFFSET(0x1763D790)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int RequestManager___c_TypeDefinitionIndex = 7104;

	class RequestManager___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Int32, ::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::System::Int32, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RequestManager___c_TypeDefinitionIndex)->GetStaticField(0x22770);
		}
		static ::System::Func_2<::System::Int32, ::System::String*>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RequestManager___c_TypeDefinitionIndex)->GetStaticField(0x22778);
		}
		static ::MiHoYo::SDK::RequestManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::RequestManager___c**)Il2CppClass::FromTypeDefinitionIndex(RequestManager___c_TypeDefinitionIndex)->GetStaticField(0x22780);
		}
		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__27_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)Il2CppClass::FromTypeDefinitionIndex(RequestManager___c_TypeDefinitionIndex)->GetStaticField(0x22788);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RequestABTest_b__26_0(::System::Int32 x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__REQUESTABTEST_B__26_0_OFFSET))(this, x);
		}

		::System::String* _RequestABTest_b__26_1(::System::Int32 x)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__REQUESTABTEST_B__26_1_OFFSET))(this, x);
		}

		::System::Void _RequestPayDialogABTestCN_b__27_0(::MiHoYo::SDK::NetworkResponseModel* responseModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__REQUESTPAYDIALOGABTESTCN_B__27_0_OFFSET))(this, responseModel);
		}
	};
}
