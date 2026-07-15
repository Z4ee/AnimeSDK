#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3207B23A0433048D.h"
#include "unitysdk/RPG/GameCore/RtPropertyModifyData.h"

class Class_2_1FEE32287E9D6686_Class_1_BAF0D4C4A146716C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1FEE32287E9D6686_METHOD_2_C16A9FED3515F3B5_OFFSET UNITYSDK_OFFSET(0x171D3510)
#define CLASS_2_1FEE32287E9D6686_METHOD_2_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x171D3470)
#define CLASS_2_1FEE32287E9D6686__CTOR_OFFSET UNITYSDK_OFFSET(0x171D40D0)

inline static constexpr unsigned int Class_2_1FEE32287E9D6686_TypeDefinitionIndex = 51259;

class Class_2_1FEE32287E9D6686 : public ::Class_1_3207B23A0433048D
{
public:
	::System::Collections::Generic::List_1<::Class_2_1FEE32287E9D6686_Class_1_BAF0D4C4A146716C*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FEE32287E9D6686__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1FEE32287E9D6686_METHOD_2_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_2_C16A9FED3515F3B5(::System::String* a1, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*))((::PBYTE)hIl2Cpp + CLASS_2_1FEE32287E9D6686_METHOD_2_C16A9FED3515F3B5_OFFSET))(this, a1, a2);
	}
};
