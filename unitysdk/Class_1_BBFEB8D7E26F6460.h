#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CinemachineVirtualCameraTemplateConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BBFEB8D7E26F6460_METHOD_1_02C397CA36AD5822_OFFSET UNITYSDK_OFFSET(0x17F89870)
#define CLASS_1_BBFEB8D7E26F6460_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x17F897D0)
#define CLASS_1_BBFEB8D7E26F6460_METHOD_1_D799715F2EF979EA_OFFSET UNITYSDK_OFFSET(0x17F895E0)

inline static constexpr unsigned int Class_1_BBFEB8D7E26F6460_TypeDefinitionIndex = 73202;

class Class_1_BBFEB8D7E26F6460 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CinemachineVirtualCameraTemplateConfig*>** StaticGet_FCBHIJEOHCN()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CinemachineVirtualCameraTemplateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BBFEB8D7E26F6460_TypeDefinitionIndex)->GetStaticField(0x55B00);
	}

	static ::System::Void Method_1_D799715F2EF979EA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BBFEB8D7E26F6460_METHOD_1_D799715F2EF979EA_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BBFEB8D7E26F6460_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::RPG::GameCore::CinemachineVirtualCameraTemplateConfig* Method_1_02C397CA36AD5822(::System::String* a1)
	{
		return ((::RPG::GameCore::CinemachineVirtualCameraTemplateConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BBFEB8D7E26F6460_METHOD_1_02C397CA36AD5822_OFFSET))(a1);
	}
};
