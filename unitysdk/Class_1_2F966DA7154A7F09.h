#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_310B46602BEB4586.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_407;
class Class_1_2F966DA7154A7F09_Class_3_F4F2D7B5BC717C88;

#define CLASS_1_2F966DA7154A7F09_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x978B490)
#define CLASS_1_2F966DA7154A7F09_METHOD_1_C9CDFE29116E9203_OFFSET UNITYSDK_OFFSET(0x978B0D0)
#define CLASS_1_2F966DA7154A7F09_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x978B080)
#define CLASS_1_2F966DA7154A7F09_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x978B4A0)
#define CLASS_1_2F966DA7154A7F09__CTOR_OFFSET UNITYSDK_OFFSET(0x978B4B0)

inline static constexpr unsigned int Class_1_2F966DA7154A7F09_TypeDefinitionIndex = 49808;

class Class_1_2F966DA7154A7F09 : public ::System::Object
{
public:
	::Class_1_2F966DA7154A7F09_Class_3_F4F2D7B5BC717C88* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_407* _Owner_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F966DA7154A7F09__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F966DA7154A7F09_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_C9CDFE29116E9203(::RPG::GameCore::FixPoint& a1, ::Struct_2_310B46602BEB4586& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::Struct_2_310B46602BEB4586&))((::PBYTE)hIl2Cpp + CLASS_1_2F966DA7154A7F09_METHOD_1_C9CDFE29116E9203_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_407* get_Owner()
	{
		return ((::Class_0_16E4307DCC419505_407*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2F966DA7154A7F09_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::Class_0_16E4307DCC419505_407* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_407*))((::PBYTE)hIl2Cpp + CLASS_1_2F966DA7154A7F09_SET_OWNER_OFFSET))(this, value);
	}
};
