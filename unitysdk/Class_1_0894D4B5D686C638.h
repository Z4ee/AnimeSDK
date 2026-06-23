#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class CameraMoveModeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0894D4B5D686C638_METHOD_1_3303033EC7109040_OFFSET UNITYSDK_OFFSET(0x150A9700)
#define CLASS_1_0894D4B5D686C638_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x150A97E0)
#define CLASS_1_0894D4B5D686C638__CTOR_OFFSET UNITYSDK_OFFSET(0x150A9650)

inline static constexpr unsigned int Class_1_0894D4B5D686C638_TypeDefinitionIndex = 71940;

class Class_1_0894D4B5D686C638 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::Cameras::CameraMoveModeData*>* Field_1_0; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Boolean Field_1_2; // 0x24
	::System::Boolean Field_1_5; // 0x25
	::MoleMole::Config::CameraDelayMoveMode Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0894D4B5D686C638__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3303033EC7109040()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0894D4B5D686C638_METHOD_1_3303033EC7109040_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0894D4B5D686C638_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
