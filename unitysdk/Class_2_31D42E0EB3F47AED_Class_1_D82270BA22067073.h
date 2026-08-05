#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_31D42E0EB3F47AED_Struct_2_34C964401E58058B.h"
#include "unitysdk/Struct_2_455336A079B58DD3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_2_31D42E0EB3F47AED;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Cameras { class CameraOverrideTrackEntry; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_31D42E0EB3F47AED_CLASS_1_D82270BA22067073_METHOD_1_5A785584E35EF92E_OFFSET UNITYSDK_OFFSET(0x135BD920)
#define CLASS_2_31D42E0EB3F47AED_CLASS_1_D82270BA22067073_METHOD_1_B667FEAA4CF2EAF1_OFFSET UNITYSDK_OFFSET(0x135BD6E0)
#define CLASS_2_31D42E0EB3F47AED_CLASS_1_D82270BA22067073__CTOR_OFFSET UNITYSDK_OFFSET(0x135BD6D0)

inline static constexpr unsigned int Class_2_31D42E0EB3F47AED_Class_1_D82270BA22067073_TypeDefinitionIndex = 46059;

class Class_2_31D42E0EB3F47AED_Class_1_D82270BA22067073 : public ::System::Object
{
public:
	::MoleMole::Cameras::CameraOverrideTrackEntry* Field_1_6; // 0x10
	::Class_2_31D42E0EB3F47AED* Field_1_0; // 0x18
	::MoleMole::Battle::Entity* Field_1_5; // 0x20
	::System::Nullable_1<::Struct_2_455336A079B58DD3> Field_1_7; // 0x28
	::System::Func_1<::System::Single>* Field_1_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D42E0EB3F47AED_CLASS_1_D82270BA22067073__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B667FEAA4CF2EAF1(::Class_2_31D42E0EB3F47AED_Struct_2_34C964401E58058B a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_31D42E0EB3F47AED_Struct_2_34C964401E58058B))((::PBYTE)hIl2Cpp + CLASS_2_31D42E0EB3F47AED_CLASS_1_D82270BA22067073_METHOD_1_B667FEAA4CF2EAF1_OFFSET))(this, a1);
	}

	::System::Single Method_1_5A785584E35EF92E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31D42E0EB3F47AED_CLASS_1_D82270BA22067073_METHOD_1_5A785584E35EF92E_OFFSET))(this);
	}
};
