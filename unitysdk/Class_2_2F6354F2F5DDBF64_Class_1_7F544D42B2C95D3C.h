#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_2F6354F2F5DDBF64_Struct_2_C98CB9F275AE157F.h"
#include "unitysdk/RPG/Client/MapRotation/EffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MapRotationEntityEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2F6354F2F5DDBF64_CLASS_1_7F544D42B2C95D3C_METHOD_1_0FA6FCEB19F5777B_OFFSET UNITYSDK_OFFSET(0x9B89C60)
#define CLASS_2_2F6354F2F5DDBF64_CLASS_1_7F544D42B2C95D3C__CTOR_OFFSET UNITYSDK_OFFSET(0x9B89B90)

inline static constexpr unsigned int Class_2_2F6354F2F5DDBF64_Class_1_7F544D42B2C95D3C_TypeDefinitionIndex = 55880;

class Class_2_2F6354F2F5DDBF64_Class_1_7F544D42B2C95D3C : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::MapRotation::EffectType, ::System::Collections::Generic::List_1<::Class_2_2F6354F2F5DDBF64_Struct_2_C98CB9F275AE157F>*>* Field_1_5; // 0x18
	::System::String* Field_1_1; // 0x20
	::System::Boolean Field_1_4; // 0x28
	::System::UInt32 Field_1_2; // 0x2C
	::System::UInt32 Field_1_3; // 0x30

	::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_CLASS_1_7F544D42B2C95D3C__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_0FA6FCEB19F5777B(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::MapRotationEntityEffectConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::MapRotationEntityEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_2_2F6354F2F5DDBF64_CLASS_1_7F544D42B2C95D3C_METHOD_1_0FA6FCEB19F5777B_OFFSET))(this, a1, a2, a3);
	}
};
