#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B890BA8430A32496_Class_1_D8C08C94211C11A1;
class Class_1_D675521B14CA6BEF;
class Class_2_0DCAA8DDF5F4817F;
namespace MoleMole { class UIBaseController; }
namespace System { class String; }

#define MOLEMOLE_UICONTROLLERCONTEXTBASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x170ACCC0)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE_GET_FROMCONTROLLER_OFFSET UNITYSDK_OFFSET(0x170ACB40)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE_GET_HIDEFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x170ACB00)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE_GET__REFFROMCONTROLLER_OFFSET UNITYSDK_OFFSET(0x170ACB20)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE_ISVALIDARGS_OFFSET UNITYSDK_OFFSET(0x170ACD50)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE_ONBACKSTREAMING_OFFSET UNITYSDK_OFFSET(0x170ACD00)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE_SETFROMCONTROLLER_OFFSET UNITYSDK_OFFSET(0x170ACC10)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE_SETOPERATIONPARAM_OFFSET UNITYSDK_OFFSET(0x170ACC70)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE_SET_HIDEFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x170ACB10)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE_SET__REFFROMCONTROLLER_OFFSET UNITYSDK_OFFSET(0x170ACB30)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x170ACDC0)
#define MOLEMOLE_UICONTROLLERCONTEXTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1708A570)

namespace MoleMole
{
	inline static constexpr unsigned int UIControllerContextBase_TypeDefinitionIndex = 41581;

	class UIControllerContextBase : public ::System::Object
	{
	public:
		static ::MoleMole::UIControllerContextBase** StaticGet_Empty()
		{
			return (::MoleMole::UIControllerContextBase**)Il2CppClass::FromTypeDefinitionIndex(UIControllerContextBase_TypeDefinitionIndex)->GetStaticField(0x45050);
		}
		::Class_2_0DCAA8DDF5F4817F* __RefFromController_k__BackingField; // 0x10
		::Class_1_B890BA8430A32496_Class_1_D8C08C94211C11A1* jumpParas; // 0x18
		::System::Boolean _HideFadeInAnimation_k__BackingField; // 0x20
		::System::Int32 SystemOperationParam; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE__CCTOR_OFFSET))();
		}

		::System::Boolean get_HideFadeInAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_GET_HIDEFADEINANIMATION_OFFSET))(this);
		}

		::System::Void set_HideFadeInAnimation(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_SET_HIDEFADEINANIMATION_OFFSET))(this, value);
		}

		::Class_2_0DCAA8DDF5F4817F* get__RefFromController()
		{
			return ((::Class_2_0DCAA8DDF5F4817F*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_GET__REFFROMCONTROLLER_OFFSET))(this);
		}

		::System::Void set__RefFromController(::Class_2_0DCAA8DDF5F4817F* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_0DCAA8DDF5F4817F*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_SET__REFFROMCONTROLLER_OFFSET))(this, value);
		}

		::MoleMole::UIBaseController* get_FromController()
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_GET_FROMCONTROLLER_OFFSET))(this);
		}

		::System::Void SetFromController(::MoleMole::UIBaseController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_SETFROMCONTROLLER_OFFSET))(this, controller);
		}

		::System::Void SetOperationParam(::System::Int32 operationParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_SETOPERATIONPARAM_OFFSET))(this, operationParam);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_APPLYJUMPPARAS_OFFSET))(this);
		}

		::System::Void OnBackStreaming(::Class_1_D675521B14CA6BEF* backBigScene)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D675521B14CA6BEF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_ONBACKSTREAMING_OFFSET))(this, backBigScene);
		}

		::System::Boolean IsValidArgs(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICONTROLLERCONTEXTBASE_ISVALIDARGS_OFFSET))(this, index);
		}
	};
}
