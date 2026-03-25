#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CinemachineVirtualCameraTemplateConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C8F4CCB909849878_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x114407E0)
#define CLASS_1_C8F4CCB909849878_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x114405E0)
#define CLASS_1_C8F4CCB909849878_METHOD_1_E541B4EA9927E9C4_OFFSET UNITYSDK_OFFSET(0x11440890)

inline static constexpr unsigned int Class_1_C8F4CCB909849878_TypeDefinitionIndex = 60066;

class Class_1_C8F4CCB909849878 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CinemachineVirtualCameraTemplateConfig*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CinemachineVirtualCameraTemplateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C8F4CCB909849878_TypeDefinitionIndex)->GetStaticField(0x349C0);
	}

	static ::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8F4CCB909849878_METHOD_1_D799715F2EF979EA_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C8F4CCB909849878_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::RPG::GameCore::CinemachineVirtualCameraTemplateConfig* Method_1_E541B4EA9927E9C4(::System::String* a1)
	{
		return ((::RPG::GameCore::CinemachineVirtualCameraTemplateConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C8F4CCB909849878_METHOD_1_E541B4EA9927E9C4_OFFSET))(a1);
	}
};
