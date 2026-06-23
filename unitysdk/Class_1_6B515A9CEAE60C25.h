#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UICloudController; }
namespace MoleMole { class UICloudController_UIRTCItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6B515A9CEAE60C25_METHOD_1_1E2CD75DC8B80C0C_OFFSET UNITYSDK_OFFSET(0x154E8D50)
#define CLASS_1_6B515A9CEAE60C25_METHOD_1_8FF806A71A32FBEC_1_OFFSET UNITYSDK_OFFSET(0x154E8A70)
#define CLASS_1_6B515A9CEAE60C25_METHOD_1_8FF806A71A32FBEC_OFFSET UNITYSDK_OFFSET(0x154E8710)
#define CLASS_1_6B515A9CEAE60C25_METHOD_1_E09076A4D4E448D7_OFFSET UNITYSDK_OFFSET(0x154E89F0)
#define CLASS_1_6B515A9CEAE60C25__CCTOR_OFFSET UNITYSDK_OFFSET(0x154E8680)

inline static constexpr unsigned int Class_1_6B515A9CEAE60C25_TypeDefinitionIndex = 87559;

class Class_1_6B515A9CEAE60C25 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::UICloudController*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::UICloudController*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B515A9CEAE60C25_TypeDefinitionIndex)->GetStaticField(0x4C740);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B515A9CEAE60C25__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_8FF806A71A32FBEC(::MoleMole::UICloudController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UICloudController*))((::PBYTE)hIl2Cpp + CLASS_1_6B515A9CEAE60C25_METHOD_1_8FF806A71A32FBEC_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::UICloudController*>* Method_1_E09076A4D4E448D7()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UICloudController*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B515A9CEAE60C25_METHOD_1_E09076A4D4E448D7_OFFSET))();
	}

	static ::System::Void Method_1_8FF806A71A32FBEC_1(::MoleMole::UICloudController* a1)
	{
		return ((::System::Void(*)(::MoleMole::UICloudController*))((::PBYTE)hIl2Cpp + CLASS_1_6B515A9CEAE60C25_METHOD_1_8FF806A71A32FBEC_1_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::UICloudController_UIRTCItem*>* Method_1_1E2CD75DC8B80C0C()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UICloudController_UIRTCItem*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B515A9CEAE60C25_METHOD_1_1E2CD75DC8B80C0C_OFFSET))();
	}
};
