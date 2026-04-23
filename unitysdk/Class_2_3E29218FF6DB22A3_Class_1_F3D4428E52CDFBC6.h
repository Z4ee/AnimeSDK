#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_3E29218FF6DB22A3_CLASS_1_F3D4428E52CDFBC6_METHOD_1_7F5959D5B740D04C_OFFSET UNITYSDK_OFFSET(0x968CE90)
#define CLASS_2_3E29218FF6DB22A3_CLASS_1_F3D4428E52CDFBC6_METHOD_1_85C3B0BE7BB243BD_OFFSET UNITYSDK_OFFSET(0x968D6E0)
#define CLASS_2_3E29218FF6DB22A3_CLASS_1_F3D4428E52CDFBC6__CTOR_OFFSET UNITYSDK_OFFSET(0x968CE70)

inline static constexpr unsigned int Class_2_3E29218FF6DB22A3_Class_1_F3D4428E52CDFBC6_TypeDefinitionIndex = 55570;

class Class_2_3E29218FF6DB22A3_Class_1_F3D4428E52CDFBC6 : public ::System::Object
{
public:
	::System::UInt32 Field_1_3; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::UInt32 Field_1_4; // 0x18
	::System::UInt32 Field_1_2; // 0x1C
	::System::UInt32 Field_1_0; // 0x20

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_CLASS_1_F3D4428E52CDFBC6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7F5959D5B740D04C(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_CLASS_1_F3D4428E52CDFBC6_METHOD_1_7F5959D5B740D04C_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Method_1_85C3B0BE7BB243BD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E29218FF6DB22A3_CLASS_1_F3D4428E52CDFBC6_METHOD_1_85C3B0BE7BB243BD_OFFSET))(this);
	}
};
