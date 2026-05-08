#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_41373B0AE65CE02E_15.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_758;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_C025D5E531ABD78A_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16826CC0)
#define CLASS_1_C025D5E531ABD78A_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x16826640)
#define CLASS_1_C025D5E531ABD78A_METHOD_1_0EFA66E00E777737_OFFSET UNITYSDK_OFFSET(0x16826EE0)
#define CLASS_1_C025D5E531ABD78A_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x16826980)
#define CLASS_1_C025D5E531ABD78A_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x168268A0)
#define CLASS_1_C025D5E531ABD78A_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x16826B20)
#define CLASS_1_C025D5E531ABD78A_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x16826BE0)
#define CLASS_1_C025D5E531ABD78A_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x16826990)
#define CLASS_1_C025D5E531ABD78A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16826620)
#define CLASS_1_C025D5E531ABD78A_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x16826EC0)
#define CLASS_1_C025D5E531ABD78A__CTOR_OFFSET UNITYSDK_OFFSET(0x16826DF0)

inline static constexpr unsigned int Class_1_C025D5E531ABD78A_TypeDefinitionIndex = 17374;

class Class_1_C025D5E531ABD78A : public ::System::Object
{
public:
	::Struct_2_41373B0AE65CE02E_15 Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_2; // 0x30
	::Il2CppArray<::Class_2_208CC9941471731A_758*>* Field_1_1; // 0x38
	::System::Int32 Field_1_4; // 0x40
	::System::Boolean Field_1_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C025D5E531ABD78A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C025D5E531ABD78A_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C025D5E531ABD78A_METHOD_1_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_C025D5E531ABD78A_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_C025D5E531ABD78A_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C025D5E531ABD78A_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C025D5E531ABD78A_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C025D5E531ABD78A_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C025D5E531ABD78A_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C025D5E531ABD78A_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_758* Method_1_0EFA66E00E777737(::System::String* a1)
	{
		return ((::Class_2_208CC9941471731A_758*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C025D5E531ABD78A_METHOD_1_0EFA66E00E777737_OFFSET))(this, a1);
	}
};
