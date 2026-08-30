#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_1FEE32287E9D6686_Struct_2_A11E7C4595281F1B.h"
#include "unitysdk/RPG/GameCore/RtPropertyModifyData.h"
#include "unitysdk/System/Object.h"

class Class_3_C22B3EED69F1AB77;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1FEE32287E9D6686_CLASS_1_BAF0D4C4A146716C_CLEAR_OFFSET UNITYSDK_OFFSET(0x1537A940)
#define CLASS_2_1FEE32287E9D6686_CLASS_1_BAF0D4C4A146716C_METHOD_1_946AC6759E5070E9_OFFSET UNITYSDK_OFFSET(0x15379FA0)
#define CLASS_2_1FEE32287E9D6686_CLASS_1_BAF0D4C4A146716C__CTOR_OFFSET UNITYSDK_OFFSET(0x1537A9A0)

inline static constexpr unsigned int Class_2_1FEE32287E9D6686_Class_1_BAF0D4C4A146716C_TypeDefinitionIndex = 53944;

class Class_2_1FEE32287E9D6686_Class_1_BAF0D4C4A146716C : public ::System::Object
{
public:
	::System::String* OENAMINOLLF; // 0x10
	::System::Collections::Generic::List_1<::Class_2_1FEE32287E9D6686_Struct_2_A11E7C4595281F1B>* LDNHOKKHOCO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FEE32287E9D6686_CLASS_1_BAF0D4C4A146716C__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FEE32287E9D6686_CLASS_1_BAF0D4C4A146716C_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_946AC6759E5070E9(::Class_3_C22B3EED69F1AB77* a1, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C22B3EED69F1AB77*, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*))((::PBYTE)hIl2Cpp + CLASS_2_1FEE32287E9D6686_CLASS_1_BAF0D4C4A146716C_METHOD_1_946AC6759E5070E9_OFFSET))(this, a1, a2);
	}
};
