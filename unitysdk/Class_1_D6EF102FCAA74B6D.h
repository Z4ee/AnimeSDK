#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_1862835F8661A21F_1410.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Project::Config { class RABMapConfigTemplateExt; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D6EF102FCAA74B6D_FINALIZE_OFFSET UNITYSDK_OFFSET(0x14BB9190)
#define CLASS_1_D6EF102FCAA74B6D_METHOD_1_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x14BB8AB0)
#define CLASS_1_D6EF102FCAA74B6D_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x14BB8E50)
#define CLASS_1_D6EF102FCAA74B6D_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x14BB8D70)
#define CLASS_1_D6EF102FCAA74B6D_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x14BB8FF0)
#define CLASS_1_D6EF102FCAA74B6D_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x14BB90B0)
#define CLASS_1_D6EF102FCAA74B6D_METHOD_1_C429723DDAED62B1_OFFSET UNITYSDK_OFFSET(0x14BB92F0)
#define CLASS_1_D6EF102FCAA74B6D_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x14BB8E60)
#define CLASS_1_D6EF102FCAA74B6D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x14BB8A90)
#define CLASS_1_D6EF102FCAA74B6D_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x14BB92D0)
#define CLASS_1_D6EF102FCAA74B6D__CTOR_OFFSET UNITYSDK_OFFSET(0x14BB92C0)

inline static constexpr unsigned int Class_1_D6EF102FCAA74B6D_TypeDefinitionIndex = 15848;

class Class_1_D6EF102FCAA74B6D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_1; // 0x10
	::Il2CppArray<::MoleMole::Project::Config::RABMapConfigTemplateExt*>* Field_1_2; // 0x18
	::Struct_2_1862835F8661A21F_1410 Field_1_3; // 0x20
	::System::Boolean Field_1_7; // 0x38
	::System::Int32 Field_1_0; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EF102FCAA74B6D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EF102FCAA74B6D_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EF102FCAA74B6D_METHOD_1_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_D6EF102FCAA74B6D_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_D6EF102FCAA74B6D_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EF102FCAA74B6D_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EF102FCAA74B6D_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EF102FCAA74B6D_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EF102FCAA74B6D_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6EF102FCAA74B6D_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::MoleMole::Project::Config::RABMapConfigTemplateExt* Method_1_C429723DDAED62B1(::System::Int32 a1)
	{
		return ((::MoleMole::Project::Config::RABMapConfigTemplateExt*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D6EF102FCAA74B6D_METHOD_1_C429723DDAED62B1_OFFSET))(this, a1);
	}
};
