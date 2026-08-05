#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_FBF13766F1B90841_Struct_2_18E794CDBE104DC1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class NapVirtualPipelineCamera; }

#define CLASS_2_FBF13766F1B90841_CLASS_1_A1198690D13E6D50_METHOD_1_4540FAEBC010F8A4_OFFSET UNITYSDK_OFFSET(0x10D24990)
#define CLASS_2_FBF13766F1B90841_CLASS_1_A1198690D13E6D50__CTOR_OFFSET UNITYSDK_OFFSET(0x10D24980)

inline static constexpr unsigned int Class_2_FBF13766F1B90841_Class_1_A1198690D13E6D50_TypeDefinitionIndex = 85862;

class Class_2_FBF13766F1B90841_Class_1_A1198690D13E6D50 : public ::System::Object
{
public:
	::MoleMole::Cameras::NapVirtualPipelineCamera* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FBF13766F1B90841_CLASS_1_A1198690D13E6D50__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4540FAEBC010F8A4(::Class_2_FBF13766F1B90841_Struct_2_18E794CDBE104DC1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FBF13766F1B90841_Struct_2_18E794CDBE104DC1))((::PBYTE)hIl2Cpp + CLASS_2_FBF13766F1B90841_CLASS_1_A1198690D13E6D50_METHOD_1_4540FAEBC010F8A4_OFFSET))(this, a1);
	}
};
