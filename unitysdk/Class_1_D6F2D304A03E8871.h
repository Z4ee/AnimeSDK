#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_F89188C92CD502EB.h"
#include "unitysdk/System/Object.h"

class Class_1_BCCF85E57593CA8D_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D6F2D304A03E8871__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC0E30)

inline static constexpr unsigned int Class_1_D6F2D304A03E8871_TypeDefinitionIndex = 34553;

class Class_1_D6F2D304A03E8871 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::Struct_2_F89188C92CD502EB>* Field_1_4; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_BCCF85E57593CA8D_1*>* Field_1_5; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* Field_1_6; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6F2D304A03E8871__CTOR_OFFSET))(this);
	}
};
