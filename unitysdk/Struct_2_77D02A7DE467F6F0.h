#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define STRUCT_2_77D02A7DE467F6F0_METHOD_2_3D78D2E0F9F95F07_OFFSET UNITYSDK_OFFSET(0x12EA4680)
#define STRUCT_2_77D02A7DE467F6F0_METHOD_2_4543DD11BBBD6150_OFFSET UNITYSDK_OFFSET(0x79FE90)
#define STRUCT_2_77D02A7DE467F6F0_METHOD_2_57A8E11FECF10345_1_OFFSET UNITYSDK_OFFSET(0x12EA43A0)
#define STRUCT_2_77D02A7DE467F6F0_METHOD_2_57A8E11FECF10345_OFFSET UNITYSDK_OFFSET(0x12EA4190)
#define STRUCT_2_77D02A7DE467F6F0_METHOD_2_D126582672457EA7_OFFSET UNITYSDK_OFFSET(0x79FE50)

inline static constexpr unsigned int Struct_2_77D02A7DE467F6F0_TypeDefinitionIndex = 60659;

struct alignas(8) Struct_2_77D02A7DE467F6F0
{
	::MoleMole::EntityHandle Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x20
	::System::String* Field_2_2; // 0x28
	::System::String* Field_2_3; // 0x30

	static ::System::Boolean Method_2_57A8E11FECF10345(::Struct_2_77D02A7DE467F6F0 a1, ::Struct_2_77D02A7DE467F6F0 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_77D02A7DE467F6F0, ::Struct_2_77D02A7DE467F6F0))((::PBYTE)hIl2Cpp + STRUCT_2_77D02A7DE467F6F0_METHOD_2_57A8E11FECF10345_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345_1(::Struct_2_77D02A7DE467F6F0 a1, ::Struct_2_77D02A7DE467F6F0 a2)
	{
		return ((::System::Boolean(*)(::Struct_2_77D02A7DE467F6F0, ::Struct_2_77D02A7DE467F6F0))((::PBYTE)hIl2Cpp + STRUCT_2_77D02A7DE467F6F0_METHOD_2_57A8E11FECF10345_1_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_D126582672457EA7(::Struct_2_77D02A7DE467F6F0 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_77D02A7DE467F6F0))((::PBYTE)hIl2Cpp + STRUCT_2_77D02A7DE467F6F0_METHOD_2_D126582672457EA7_OFFSET))(this, a1);
	}

	/*
	::System::Boolean Method_2_4543DD11BBBD6150(::System::Collections::Generic::IList_1<::Struct_2_A47ACAABA9AAFE92>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::Struct_2_A47ACAABA9AAFE92>*))((::PBYTE)hIl2Cpp + STRUCT_2_77D02A7DE467F6F0_METHOD_2_4543DD11BBBD6150_OFFSET))(this, a1);
	}
	*/

	static ::Struct_2_77D02A7DE467F6F0 Method_2_3D78D2E0F9F95F07()
	{
		return ((::Struct_2_77D02A7DE467F6F0(*)())((::PBYTE)hIl2Cpp + STRUCT_2_77D02A7DE467F6F0_METHOD_2_3D78D2E0F9F95F07_OFFSET))();
	}
};
