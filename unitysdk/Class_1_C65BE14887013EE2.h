#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13256E311AF13FFD.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Struct_2_B679E4D914A10080_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_424;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_C65BE14887013EE2_METHOD_1_75AE54C50732501F_OFFSET UNITYSDK_OFFSET(0x1A8D7B00)
#define CLASS_1_C65BE14887013EE2_METHOD_1_C0191B60A07A5007_OFFSET UNITYSDK_OFFSET(0x1A8D7C30)
#define CLASS_1_C65BE14887013EE2_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A8D7AF0)
#define CLASS_1_C65BE14887013EE2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8D8090)

inline static constexpr unsigned int Class_1_C65BE14887013EE2_TypeDefinitionIndex = 72273;

class Class_1_C65BE14887013EE2 : public ::System::Object
{
public:
	::Foundation::AssetRequestHandle Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C65BE14887013EE2__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C65BE14887013EE2_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::Enum_3_13256E311AF13FFD Method_1_75AE54C50732501F(::MoleMole::Battle::Entity* a1, ::Struct_2_B679E4D914A10080_2 a2, ::Class_0_16E4307DCC419505_424* a3)
	{
		return ((::Enum_3_13256E311AF13FFD(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Struct_2_B679E4D914A10080_2, ::Class_0_16E4307DCC419505_424*))((::PBYTE)hIl2Cpp + CLASS_1_C65BE14887013EE2_METHOD_1_75AE54C50732501F_OFFSET))(this, a1, a2, a3);
	}

	::Enum_3_13256E311AF13FFD Method_1_C0191B60A07A5007(::MoleMole::Battle::Entity* a1, ::Struct_2_B679E4D914A10080_2 a2, ::Class_0_16E4307DCC419505_424* a3)
	{
		return ((::Enum_3_13256E311AF13FFD(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Struct_2_B679E4D914A10080_2, ::Class_0_16E4307DCC419505_424*))((::PBYTE)hIl2Cpp + CLASS_1_C65BE14887013EE2_METHOD_1_C0191B60A07A5007_OFFSET))(this, a1, a2, a3);
	}
};
