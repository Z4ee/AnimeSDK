#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_31D42E0EB3F47AED_Struct_2_34C964401E58058B.h"
#include "unitysdk/System/Object.h"

class Class_2_31D42E0EB3F47AED;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class CameraOverrideTrackEntry; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_31D42E0EB3F47AED_CLASS_1_029DB5FA3B2C828F_METHOD_1_4297302B3E036AB4_OFFSET UNITYSDK_OFFSET(0x1720F050)
#define CLASS_2_31D42E0EB3F47AED_CLASS_1_029DB5FA3B2C828F_METHOD_1_5A785584E35EF92E_OFFSET UNITYSDK_OFFSET(0x1720EDC0)
#define CLASS_2_31D42E0EB3F47AED_CLASS_1_029DB5FA3B2C828F_METHOD_1_8804C7140D8C16D8_OFFSET UNITYSDK_OFFSET(0x1720EE50)
#define CLASS_2_31D42E0EB3F47AED_CLASS_1_029DB5FA3B2C828F__CTOR_OFFSET UNITYSDK_OFFSET(0x1720EDB0)

inline static constexpr unsigned int Class_2_31D42E0EB3F47AED_Class_1_029DB5FA3B2C828F_TypeDefinitionIndex = 46055;

class Class_2_31D42E0EB3F47AED_Class_1_029DB5FA3B2C828F : public ::System::Object
{
public:
	::MoleMole::Cameras::CameraOverrideTrackEntry* Field_1_2; // 0x10
	::Class_2_31D42E0EB3F47AED* Field_1_1; // 0x18
	::MoleMole::Battle::Entity* Field_1_3; // 0x20
	::System::Func_1<::System::Single>* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D42E0EB3F47AED_CLASS_1_029DB5FA3B2C828F__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_5A785584E35EF92E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D42E0EB3F47AED_CLASS_1_029DB5FA3B2C828F_METHOD_1_5A785584E35EF92E_OFFSET))(this);
	}

	::System::Void Method_1_8804C7140D8C16D8(::Class_2_31D42E0EB3F47AED_Struct_2_34C964401E58058B a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_31D42E0EB3F47AED_Struct_2_34C964401E58058B))((::PBYTE)hIl2Cpp + CLASS_2_31D42E0EB3F47AED_CLASS_1_029DB5FA3B2C828F_METHOD_1_8804C7140D8C16D8_OFFSET))(this, a1);
	}

	::System::Single Method_1_4297302B3E036AB4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D42E0EB3F47AED_CLASS_1_029DB5FA3B2C828F_METHOD_1_4297302B3E036AB4_OFFSET))(this);
	}
};
