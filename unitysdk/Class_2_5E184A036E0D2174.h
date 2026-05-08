#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1B1FAA9A0A3E2A7A.h"

class Class_0_16E4307DCC419505_136;
class MonoUITableScrollV2;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_5E184A036E0D2174_METHOD_2_455046DD3682388F_OFFSET UNITYSDK_OFFSET(0x17846E50)
#define CLASS_2_5E184A036E0D2174_METHOD_2_46ECFDEE4F733DFC_OFFSET UNITYSDK_OFFSET(0x17846FB0)
#define CLASS_2_5E184A036E0D2174__CTOR_OFFSET UNITYSDK_OFFSET(0x17846E40)

inline static constexpr unsigned int Class_2_5E184A036E0D2174_TypeDefinitionIndex = 38186;

class Class_2_5E184A036E0D2174 : public ::Class_1_1B1FAA9A0A3E2A7A
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_136*>* Field_2_0; // 0x10
	::MonoUITableScrollV2* Field_2_1; // 0x18

	::System::Void _ctor(::MonoUITableScrollV2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + CLASS_2_5E184A036E0D2174__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_455046DD3682388F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5E184A036E0D2174_METHOD_2_455046DD3682388F_OFFSET))(this, a1);
	}

	::System::Void Method_2_46ECFDEE4F733DFC(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_136*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_136*>*))((::PBYTE)hIl2Cpp + CLASS_2_5E184A036E0D2174_METHOD_2_46ECFDEE4F733DFC_OFFSET))(this, a1);
	}
};
