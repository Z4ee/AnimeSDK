#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_4;
class Class_3_025FF4981524A424_296;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_57245F91818C7B0A_CLASS_1_062AF7C999D475DE__CTOR_OFFSET UNITYSDK_OFFSET(0x11F36CA0)

inline static constexpr unsigned int Class_2_57245F91818C7B0A_Class_1_062AF7C999D475DE_TypeDefinitionIndex = 80414;

class Class_2_57245F91818C7B0A_Class_1_062AF7C999D475DE : public ::System::Object
{
public:
	::System::Action_2<::Class_3_025FF4981524A424_296*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>*>* Field_1_1; // 0x10
	::System::Action_2<::Class_3_025FF4981524A424_296*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57245F91818C7B0A_CLASS_1_062AF7C999D475DE__CTOR_OFFSET))(this);
	}
};
