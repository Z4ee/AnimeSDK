#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_DED04E46213B89CB_Struct_2_F7C243F317D8E44A_1.h"
#include "unitysdk/Foundation/ReservedObjectPoolDataHandle.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ReservedObjectPool; }
namespace MoleMole::Config { class HollowNapEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_32C98B4392E35206_DISPOSE_OFFSET UNITYSDK_OFFSET(0x147925F0)
#define CLASS_1_32C98B4392E35206_METHOD_1_2FF15F1BA359A6E8_OFFSET UNITYSDK_OFFSET(0x147927A0)
#define CLASS_1_32C98B4392E35206_METHOD_1_50AD093ACFA6B460_OFFSET UNITYSDK_OFFSET(0x147926B0)
#define CLASS_1_32C98B4392E35206__CTOR_OFFSET UNITYSDK_OFFSET(0x147926A0)

inline static constexpr unsigned int Class_1_32C98B4392E35206_TypeDefinitionIndex = 47286;

class Class_1_32C98B4392E35206 : public ::System::Object
{
public:
	::Foundation::ReservedObjectPool* Field_1_2; // 0x10
	::MoleMole::Config::HollowNapEffectConfig* Field_1_0; // 0x18
	::System::String* Field_1_6; // 0x20
	::System::String* Field_1_7; // 0x28
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32C98B4392E35206__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32C98B4392E35206_DISPOSE_OFFSET))(this);
	}

	::Foundation::ReservedObjectPool* Method_1_50AD093ACFA6B460(::System::Nullable_1<::Class_1_DED04E46213B89CB_Struct_2_F7C243F317D8E44A_1> a1)
	{
		return ((::Foundation::ReservedObjectPool*(*)(::PVOID, ::System::Nullable_1<::Class_1_DED04E46213B89CB_Struct_2_F7C243F317D8E44A_1>))((::PBYTE)hIl2Cpp + CLASS_1_32C98B4392E35206_METHOD_1_50AD093ACFA6B460_OFFSET))(this, a1);
	}

	::Foundation::ReservedObjectPoolDataHandle Method_1_2FF15F1BA359A6E8()
	{
		return ((::Foundation::ReservedObjectPoolDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32C98B4392E35206_METHOD_1_2FF15F1BA359A6E8_OFFSET))(this);
	}
};
