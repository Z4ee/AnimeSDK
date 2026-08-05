#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_790B79B02D84C247.h"
#include "unitysdk/ProtoScript/HollowEntityType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_23;
class Class_3_F118437738B4CCD5;
class Class_3_FC960E76F7A651E8;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_C52B777DA7BDC594_METHOD_1_2981A07991ACE5E2_OFFSET UNITYSDK_OFFSET(0x11160BA0)
#define CLASS_1_C52B777DA7BDC594_METHOD_1_DF9F9C336BA14A4A_OFFSET UNITYSDK_OFFSET(0x11160D20)
#define CLASS_1_C52B777DA7BDC594__CTOR_OFFSET UNITYSDK_OFFSET(0x11160B90)

inline static constexpr unsigned int Class_1_C52B777DA7BDC594_TypeDefinitionIndex = 41082;

class Class_1_C52B777DA7BDC594 : public ::System::Object
{
public:
	::Class_3_FC960E76F7A651E8* Field_1_4; // 0x10
	::System::Collections::Generic::IList_1<::Enum_3_790B79B02D84C247>* Field_1_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::Enum_3_790B79B02D84C247, ::Class_1_43BD383C98B4C0C5_23*>* Field_1_6; // 0x20
	::System::UInt32 Field_1_0; // 0x28
	::System::UInt32 Field_1_1; // 0x2C
	::ProtoScript::HollowEntityType Field_1_7; // 0x30

	::System::Void _ctor(::Class_3_F118437738B4CCD5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F118437738B4CCD5*))((::PBYTE)hIl2Cpp + CLASS_1_C52B777DA7BDC594__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF9F9C336BA14A4A(::Class_3_F118437738B4CCD5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F118437738B4CCD5*))((::PBYTE)hIl2Cpp + CLASS_1_C52B777DA7BDC594_METHOD_1_DF9F9C336BA14A4A_OFFSET))(this, a1);
	}

	::System::Void Method_1_2981A07991ACE5E2(::Class_3_F118437738B4CCD5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F118437738B4CCD5*))((::PBYTE)hIl2Cpp + CLASS_1_C52B777DA7BDC594_METHOD_1_2981A07991ACE5E2_OFFSET))(this, a1);
	}
};
