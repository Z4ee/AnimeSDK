#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_320.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_761;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F57D7247395EA17E_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C0394D0)
#define CLASS_1_F57D7247395EA17E_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x1C039420)
#define CLASS_1_F57D7247395EA17E_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1C0391F0)
#define CLASS_1_F57D7247395EA17E_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x1C039120)
#define CLASS_1_F57D7247395EA17E_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1C039600)
#define CLASS_1_F57D7247395EA17E_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1C039380)
#define CLASS_1_F57D7247395EA17E_METHOD_1_8923446497E3D0C5_OFFSET UNITYSDK_OFFSET(0x1C038EE0)
#define CLASS_1_F57D7247395EA17E_METHOD_1_90E3E62394A319CA_OFFSET UNITYSDK_OFFSET(0x1C039610)
#define CLASS_1_F57D7247395EA17E_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x1C039200)
#define CLASS_1_F57D7247395EA17E_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C038ED0)
#define CLASS_1_F57D7247395EA17E__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0395F0)

inline static constexpr unsigned int Class_1_F57D7247395EA17E_TypeDefinitionIndex = 12975;

class Class_1_F57D7247395EA17E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_208CC9941471731A_761*>* Field_1_1; // 0x10
	::Struct_2_58DF5669875F2C66_320 Field_1_2; // 0x18
	::System::Int32 Field_1_7; // 0x28
	::System::Int32 Field_1_0; // 0x2C
	::System::Boolean Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F57D7247395EA17E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F57D7247395EA17E_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_8923446497E3D0C5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F57D7247395EA17E_METHOD_1_8923446497E3D0C5_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_F57D7247395EA17E_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_F57D7247395EA17E_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F57D7247395EA17E_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F57D7247395EA17E_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F57D7247395EA17E_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F57D7247395EA17E_METHOD_1_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F57D7247395EA17E_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_208CC9941471731A_761*>* Method_1_90E3E62394A319CA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_208CC9941471731A_761*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F57D7247395EA17E_METHOD_1_90E3E62394A319CA_OFFSET))(this);
	}
};
