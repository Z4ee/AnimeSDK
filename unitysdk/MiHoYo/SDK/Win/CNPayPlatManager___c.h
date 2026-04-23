#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK::Win { class PayPlatInfoModel; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176DC480)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x176DC4C0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__ONCREATEORDER_B__54_2_OFFSET UNITYSDK_OFFSET(0x176DC4D0)
#define MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__REQUESTLISTPAYPLATV2_B__64_1_OFFSET UNITYSDK_OFFSET(0x176DC530)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int CNPayPlatManager___c_TypeDefinitionIndex = 8033;

	class CNPayPlatManager___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::CNPayPlatManager___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::Win::CNPayPlatManager___c**)Il2CppClass::FromTypeDefinitionIndex(CNPayPlatManager___c_TypeDefinitionIndex)->GetStaticField(0x28A20);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__54_2()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(CNPayPlatManager___c_TypeDefinitionIndex)->GetStaticField(0x28A28);
		}
		static ::System::Func_2<::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::Win::PayPlatInfoModel*>** StaticGet___9__64_1()
		{
			return (::System::Func_2<::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::Win::PayPlatInfoModel*>**)Il2CppClass::FromTypeDefinitionIndex(CNPayPlatManager___c_TypeDefinitionIndex)->GetStaticField(0x28A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnCreateOrder_b__54_2(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__ONCREATEORDER_B__54_2_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Win::PayPlatInfoModel* _RequestListPayPlatV2_b__64_1(::MiHoYo::SDK::JSONNode* plat)
		{
			return ((::MiHoYo::SDK::Win::PayPlatInfoModel*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_CNPAYPLATMANAGER___C__REQUESTLISTPAYPLATV2_B__64_1_OFFSET))(this, plat);
		}
	};
}
