#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_B16AFEE6CD05F5FC_VideoCommandType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_B16AFEE6CD05F5FC_STRUCT_2_81DAF275C38615E6_METHOD_2_61FCB70A5295CE84_OFFSET UNITYSDK_OFFSET(0x17A949D0)
#define CLASS_2_B16AFEE6CD05F5FC_STRUCT_2_81DAF275C38615E6_METHOD_2_86CDE59560F1B467_OFFSET UNITYSDK_OFFSET(0x17A95340)
#define CLASS_2_B16AFEE6CD05F5FC_STRUCT_2_81DAF275C38615E6__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A954F0)

inline static constexpr unsigned int Class_2_B16AFEE6CD05F5FC_Struct_2_81DAF275C38615E6_TypeDefinitionIndex = 69870;

struct alignas(8) Class_2_B16AFEE6CD05F5FC_Struct_2_81DAF275C38615E6
{
	static ::Class_2_B16AFEE6CD05F5FC_Struct_2_81DAF275C38615E6* StaticGet_Field_2_0()
	{
		return (::Class_2_B16AFEE6CD05F5FC_Struct_2_81DAF275C38615E6*)Il2CppClass::FromTypeDefinitionIndex(Class_2_B16AFEE6CD05F5FC_Struct_2_81DAF275C38615E6_TypeDefinitionIndex)->GetStaticField(0x273E0);
	}
	::Class_2_B16AFEE6CD05F5FC_VideoCommandType Field_2_1; // 0x10
	::System::String* Field_2_2; // 0x18
	::System::String* Field_2_3; // 0x20
	::System::String* Field_2_4; // 0x28
	::System::Boolean Field_2_5; // 0x30
	::System::Action* Field_2_6; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_B16AFEE6CD05F5FC_STRUCT_2_81DAF275C38615E6__CCTOR_OFFSET))();
	}

	static ::Class_2_B16AFEE6CD05F5FC_Struct_2_81DAF275C38615E6 Method_2_61FCB70A5295CE84(::System::String* a1, ::System::Boolean a2, ::System::String* a3, ::System::Action* a4)
	{
		return ((::Class_2_B16AFEE6CD05F5FC_Struct_2_81DAF275C38615E6(*)(::System::String*, ::System::Boolean, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_B16AFEE6CD05F5FC_STRUCT_2_81DAF275C38615E6_METHOD_2_61FCB70A5295CE84_OFFSET))(a1, a2, a3, a4);
	}

	static ::Class_2_B16AFEE6CD05F5FC_Struct_2_81DAF275C38615E6 Method_2_86CDE59560F1B467()
	{
		return ((::Class_2_B16AFEE6CD05F5FC_Struct_2_81DAF275C38615E6(*)())((::PBYTE)hIl2Cpp + CLASS_2_B16AFEE6CD05F5FC_STRUCT_2_81DAF275C38615E6_METHOD_2_86CDE59560F1B467_OFFSET))();
	}
};
