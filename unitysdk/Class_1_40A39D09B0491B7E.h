#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E894E54C3D94F028.h"
#include "unitysdk/Struct_2_41373B0AE65CE02E_8.h"
#include "unitysdk/System/Object.h"

class Class_2_534AF681CC2BD5FD_109;
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_40A39D09B0491B7E_FINALIZE_OFFSET UNITYSDK_OFFSET(0x14F94190)
#define CLASS_1_40A39D09B0491B7E_METHOD_1_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x14F93B10)
#define CLASS_1_40A39D09B0491B7E_METHOD_1_3DACC45AC8150727_OFFSET UNITYSDK_OFFSET(0x14F93E50)
#define CLASS_1_40A39D09B0491B7E_METHOD_1_43D99DDD80B1E30C_OFFSET UNITYSDK_OFFSET(0x14F93D70)
#define CLASS_1_40A39D09B0491B7E_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x14F93FF0)
#define CLASS_1_40A39D09B0491B7E_METHOD_1_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x14F940B0)
#define CLASS_1_40A39D09B0491B7E_METHOD_1_C64F3CA8A6C36FAC_OFFSET UNITYSDK_OFFSET(0x14F93E60)
#define CLASS_1_40A39D09B0491B7E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x14F93AF0)
#define CLASS_1_40A39D09B0491B7E__CTOR_OFFSET UNITYSDK_OFFSET(0x14F942C0)

inline static constexpr unsigned int Class_1_40A39D09B0491B7E_TypeDefinitionIndex = 11989;

class Class_1_40A39D09B0491B7E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_2; // 0x10
	::Il2CppArray<::Class_2_534AF681CC2BD5FD_109*>* Field_1_1; // 0x18
	::Struct_2_41373B0AE65CE02E_8 Field_1_0; // 0x20
	::System::Int32 Field_1_3; // 0x38
	::System::Boolean Field_1_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40A39D09B0491B7E__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40A39D09B0491B7E_METHOD_1_CE34EA208837238D_OFFSET))(this);
	}

	::System::Void Method_1_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40A39D09B0491B7E_METHOD_1_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_1_C64F3CA8A6C36FAC(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_40A39D09B0491B7E_METHOD_1_C64F3CA8A6C36FAC_OFFSET))(this, a1);
	}

	::System::Void Method_1_3DACC45AC8150727(::Enum_3_E894E54C3D94F028 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E894E54C3D94F028))((::PBYTE)hIl2Cpp + CLASS_1_40A39D09B0491B7E_METHOD_1_3DACC45AC8150727_OFFSET))(this, a1);
	}

	::System::Void Method_1_43D99DDD80B1E30C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40A39D09B0491B7E_METHOD_1_43D99DDD80B1E30C_OFFSET))(this);
	}

	::System::Void Method_1_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40A39D09B0491B7E_METHOD_1_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40A39D09B0491B7E_FINALIZE_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_40A39D09B0491B7E_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}
};
