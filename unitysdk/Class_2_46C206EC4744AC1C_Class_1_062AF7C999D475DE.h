#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_35;
class Class_3_025FF4981524A424_422;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_46C206EC4744AC1C_CLASS_1_062AF7C999D475DE__CTOR_OFFSET UNITYSDK_OFFSET(0x14D24090)

inline static constexpr unsigned int Class_2_46C206EC4744AC1C_Class_1_062AF7C999D475DE_TypeDefinitionIndex = 62655;

class Class_2_46C206EC4744AC1C_Class_1_062AF7C999D475DE : public ::System::Object
{
public:
	::System::Action_2<::Class_3_025FF4981524A424_422*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_35*>*>* Field_1_1; // 0x10
	::System::Action_2<::Class_3_025FF4981524A424_422*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_35*>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46C206EC4744AC1C_CLASS_1_062AF7C999D475DE__CTOR_OFFSET))(this);
	}
};
