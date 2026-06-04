#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_287FFE61A24A153D_METHOD_2_2A0F641337364AF8_OFFSET UNITYSDK_OFFSET(0xBA140C0)
#define CLASS_2_287FFE61A24A153D__CTOR_OFFSET UNITYSDK_OFFSET(0xBA13CF0)

inline static constexpr unsigned int Class_2_287FFE61A24A153D_TypeDefinitionIndex = 74479;

class Class_2_287FFE61A24A153D : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::System::Type* Field_2_0; // 0x20
	::System::String* Field_2_1; // 0x28
	::System::String* Field_2_2; // 0x30
	::System::Boolean Field_2_3; // 0x38
	::RPG::Client::CachedAssetLogicType Field_2_4; // 0x3C

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_287FFE61A24A153D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_2A0F641337364AF8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_287FFE61A24A153D_METHOD_2_2A0F641337364AF8_OFFSET))(this);
	}
};
