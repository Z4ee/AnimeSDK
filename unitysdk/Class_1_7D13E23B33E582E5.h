#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D294488719556168;
class Class_2_7EA45D2647F35CDD;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_7D13E23B33E582E5_METHOD_1_126A00884002C73B_OFFSET UNITYSDK_OFFSET(0x179A38D0)
#define CLASS_1_7D13E23B33E582E5_METHOD_1_7E70EDBCD2A41CFC_OFFSET UNITYSDK_OFFSET(0x179A39C0)

inline static constexpr unsigned int Class_1_7D13E23B33E582E5_TypeDefinitionIndex = 53452;

class Class_1_7D13E23B33E582E5 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x1; // 0x0
	// static const ::System::UInt32 Field_1_1 = 0x2; // 0x0
	// static const ::System::UInt32 Field_1_2 = 0x3; // 0x0
	// static const ::System::UInt32 Field_1_3 = 0x4; // 0x0
	// static const ::System::UInt32 Field_1_4 = 0x5; // 0x0
	// static const ::System::UInt32 Field_1_5 = 0x6; // 0x0
	// static const ::System::UInt32 Field_1_6 = 0x7; // 0x0
	// static const ::System::UInt32 Field_1_7 = 0x8; // 0x0
	// static const ::System::UInt32 Field_1_8 = 0x9; // 0x0
	// static const ::System::UInt32 Field_1_9 = 0xA; // 0x0
	// static const ::System::UInt32 Field_1_10 = 0xB; // 0x0

	static ::Class_2_7EA45D2647F35CDD* Method_1_126A00884002C73B(::RPG::GameCore::TaskContext* a1)
	{
		return ((::Class_2_7EA45D2647F35CDD*(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_7D13E23B33E582E5_METHOD_1_126A00884002C73B_OFFSET))(a1);
	}

	static ::Class_1_D294488719556168* Method_1_7E70EDBCD2A41CFC(::RPG::GameCore::TaskContext* a1)
	{
		return ((::Class_1_D294488719556168*(*)(::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + CLASS_1_7D13E23B33E582E5_METHOD_1_7E70EDBCD2A41CFC_OFFSET))(a1);
	}
};
