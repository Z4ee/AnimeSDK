#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_41373B0AE65CE02E_7.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_407;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_CEEF690ED9BD0E6B_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AAEF610)
#define CLASS_1_CEEF690ED9BD0E6B_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x1AAEEF90)
#define CLASS_1_CEEF690ED9BD0E6B_METHOD_1_0EFA66E00E777737_OFFSET UNITYSDK_OFFSET(0x1AAEF810)
#define CLASS_1_CEEF690ED9BD0E6B_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x1AAEF2D0)
#define CLASS_1_CEEF690ED9BD0E6B_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x1AAEF1F0)
#define CLASS_1_CEEF690ED9BD0E6B_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x1AAEF470)
#define CLASS_1_CEEF690ED9BD0E6B_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x1AAEF530)
#define CLASS_1_CEEF690ED9BD0E6B_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x1AAEF2E0)
#define CLASS_1_CEEF690ED9BD0E6B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1AAEEF70)
#define CLASS_1_CEEF690ED9BD0E6B_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x1AAEFAC0)
#define CLASS_1_CEEF690ED9BD0E6B__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAEF740)

inline static constexpr unsigned int Class_1_CEEF690ED9BD0E6B_TypeDefinitionIndex = 10688;

class Class_1_CEEF690ED9BD0E6B : public ::System::Object
{
public:
	::Struct_2_41373B0AE65CE02E_7 Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_2; // 0x30
	::Il2CppArray<::Class_2_208CC9941471731A_407*>* Field_1_1; // 0x38
	::System::Int32 Field_1_4; // 0x40
	::System::Boolean Field_1_5; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEEF690ED9BD0E6B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEEF690ED9BD0E6B_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEEF690ED9BD0E6B_METHOD_1_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_CEEF690ED9BD0E6B_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_CEEF690ED9BD0E6B_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEEF690ED9BD0E6B_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEEF690ED9BD0E6B_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEEF690ED9BD0E6B_FINALIZE_OFFSET))(this);
	}

	::Class_2_208CC9941471731A_407* Method_1_0EFA66E00E777737(::System::String* a1)
	{
		return ((::Class_2_208CC9941471731A_407*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CEEF690ED9BD0E6B_METHOD_1_0EFA66E00E777737_OFFSET))(this, a1);
	}

	::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEEF690ED9BD0E6B_METHOD_1_F730968E2645E14B_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEEF690ED9BD0E6B_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}
};
