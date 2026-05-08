#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_41373B0AE65CE02E_17.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_992;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_6D716CEBF8828FC5_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15FFD640)
#define CLASS_1_6D716CEBF8828FC5_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x15FFD220)
#define CLASS_1_6D716CEBF8828FC5_METHOD_1_0EFA66E00E777737_OFFSET UNITYSDK_OFFSET(0x15FFD9D0)
#define CLASS_1_6D716CEBF8828FC5_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x15FFD570)
#define CLASS_1_6D716CEBF8828FC5_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x15FFD480)
#define CLASS_1_6D716CEBF8828FC5_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x15FFD580)
#define CLASS_1_6D716CEBF8828FC5_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x15FFD820)
#define CLASS_1_6D716CEBF8828FC5_METHOD_1_C70C8176486DAEF5_OFFSET UNITYSDK_OFFSET(0x15FFD770)
#define CLASS_1_6D716CEBF8828FC5_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x15FFD200)
#define CLASS_1_6D716CEBF8828FC5_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x15FFDC80)
#define CLASS_1_6D716CEBF8828FC5__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFD900)

inline static constexpr unsigned int Class_1_6D716CEBF8828FC5_TypeDefinitionIndex = 16836;

class Class_1_6D716CEBF8828FC5 : public ::System::Object
{
public:
	::Il2CppArray<::Class_2_208CC9941471731A_992*>* Field_1_1; // 0x10
	::Struct_2_41373B0AE65CE02E_17 Field_1_0; // 0x18
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_3; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_2; // 0x38
	::System::Boolean Field_1_5; // 0x40
	::System::Int32 Field_1_4; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D716CEBF8828FC5__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D716CEBF8828FC5_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D716CEBF8828FC5_METHOD_1_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D716CEBF8828FC5_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D716CEBF8828FC5_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_C70C8176486DAEF5(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_6D716CEBF8828FC5_METHOD_1_C70C8176486DAEF5_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_6D716CEBF8828FC5_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D716CEBF8828FC5_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_992* Method_1_0EFA66E00E777737(::System::String* a1)
	{
		return ((::Class_2_208CC9941471731A_992*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6D716CEBF8828FC5_METHOD_1_0EFA66E00E777737_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D716CEBF8828FC5_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D716CEBF8828FC5_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}
};
