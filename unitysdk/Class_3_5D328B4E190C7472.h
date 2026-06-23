#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_5D328B4E190C7472_Enum_3_E43BF90DB9A1BFDC.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define CLASS_3_5D328B4E190C7472_METHOD_3_DF36652FF6AEAAC1_OFFSET UNITYSDK_OFFSET(0x114B4C80)
#define CLASS_3_5D328B4E190C7472__CTOR_1_OFFSET UNITYSDK_OFFSET(0x114B4C70)
#define CLASS_3_5D328B4E190C7472__CTOR_2_OFFSET UNITYSDK_OFFSET(0x114B4C60)
#define CLASS_3_5D328B4E190C7472__CTOR_OFFSET UNITYSDK_OFFSET(0x114B4C40)

inline static constexpr unsigned int Class_3_5D328B4E190C7472_TypeDefinitionIndex = 62304;

class Class_3_5D328B4E190C7472 : public ::UnityEngine::PropertyAttribute
{
public:
	::System::Int32 Field_3_1; // 0x10
	::Class_3_5D328B4E190C7472_Enum_3_E43BF90DB9A1BFDC Field_3_0; // 0x14
	::System::Int32 Field_3_2; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5D328B4E190C7472__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5D328B4E190C7472__CTOR_1_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_2(::Class_3_5D328B4E190C7472_Enum_3_E43BF90DB9A1BFDC a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_5D328B4E190C7472_Enum_3_E43BF90DB9A1BFDC, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5D328B4E190C7472__CTOR_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_3_DF36652FF6AEAAC1(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_5D328B4E190C7472_METHOD_3_DF36652FF6AEAAC1_OFFSET))(this, a1);
	}
};
