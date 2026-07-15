#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::Client { class ModelUI3DModeConstraint_CameraRotateScopeShaderTransition; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MODELUI3DMODECONSTRAINT_CLASS_1_19721EF9D24AE504__CTOR_OFFSET UNITYSDK_OFFSET(0x1806FF00)

namespace RPG::Client
{
	inline static constexpr unsigned int ModelUI3DModeConstraint_Class_1_19721EF9D24AE504_TypeDefinitionIndex = 65463;

	class ModelUI3DModeConstraint_Class_1_19721EF9D24AE504 : public ::System::Object
	{
	public:
		::System::String* Field_1_0; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ModelUI3DModeConstraint_CameraRotateScopeShaderTransition*>* Field_1_1; // 0x18
		::RPG::Client::BaseShaderPropertyTransition* Field_1_2; // 0x20
		::System::Single Field_1_3; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MODELUI3DMODECONSTRAINT_CLASS_1_19721EF9D24AE504__CTOR_OFFSET))(this);
		}
	};
}
