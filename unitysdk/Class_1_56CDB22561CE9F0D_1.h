#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3590B72267A04337.h"
#include "unitysdk/Enum_3_CE80FD07999C5845.h"
#include "unitysdk/Struct_2_2656809D0E9B3F8B.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_4.h"

class Class_1_7B7FC057D30D5C12;
namespace Foundation { class IEntity; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_56CDB22561CE9F0D_1_METHOD_1_0229187A2696AC9D_OFFSET UNITYSDK_OFFSET(0xD36DD30)
#define CLASS_1_56CDB22561CE9F0D_1_METHOD_1_1592A3464372C978_OFFSET UNITYSDK_OFFSET(0xD36E460)
#define CLASS_1_56CDB22561CE9F0D_1_METHOD_1_A7B283833F70A602_OFFSET UNITYSDK_OFFSET(0xD36DEE0)
#define CLASS_1_56CDB22561CE9F0D_1_METHOD_1_BEAAD22AE34AACB5_1_OFFSET UNITYSDK_OFFSET(0xD36DB70)
#define CLASS_1_56CDB22561CE9F0D_1_METHOD_1_BEAAD22AE34AACB5_OFFSET UNITYSDK_OFFSET(0xD36D9B0)
#define CLASS_1_56CDB22561CE9F0D_1_METHOD_1_C2C5F4B556ADAFE8_OFFSET UNITYSDK_OFFSET(0xD36E180)
#define CLASS_1_56CDB22561CE9F0D_1__CCTOR_OFFSET UNITYSDK_OFFSET(0xD36E6B0)
#define CLASS_1_56CDB22561CE9F0D_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD36E620)

inline static constexpr unsigned int Class_1_56CDB22561CE9F0D_1_TypeDefinitionIndex = 67405;

class Class_1_56CDB22561CE9F0D_1 : public ::System::Object
{
public:
	static ::Class_1_56CDB22561CE9F0D_1** StaticGet_Field_1_0()
	{
		return (::Class_1_56CDB22561CE9F0D_1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_56CDB22561CE9F0D_1_TypeDefinitionIndex)->GetStaticField(0x2FB00);
	}
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_4<::System::UInt32, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::System::Action_2<::System::Single, ::System::Single>*>, ::System::Action_3<::Class_1_7B7FC057D30D5C12*, ::System::Single, ::System::Single>*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_56CDB22561CE9F0D_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_56CDB22561CE9F0D_1__CCTOR_OFFSET))();
	}

	::System::Single Method_1_BEAAD22AE34AACB5(::Foundation::IEntity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_3590B72267A04337 a3)
	{
		return ((::System::Single(*)(::PVOID, ::Foundation::IEntity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337))((::PBYTE)hIl2Cpp + CLASS_1_56CDB22561CE9F0D_1_METHOD_1_BEAAD22AE34AACB5_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_BEAAD22AE34AACB5_1(::Foundation::IEntity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_3590B72267A04337 a3)
	{
		return ((::System::Single(*)(::PVOID, ::Foundation::IEntity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337))((::PBYTE)hIl2Cpp + CLASS_1_56CDB22561CE9F0D_1_METHOD_1_BEAAD22AE34AACB5_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0229187A2696AC9D(::Foundation::IEntity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_3590B72267A04337 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_56CDB22561CE9F0D_1_METHOD_1_0229187A2696AC9D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_A7B283833F70A602(::Foundation::IEntity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_3590B72267A04337 a3, ::System::Action_2<::System::Single, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::System::Action_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_56CDB22561CE9F0D_1_METHOD_1_A7B283833F70A602_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C2C5F4B556ADAFE8(::Foundation::IEntity* a1, ::Enum_3_CE80FD07999C5845 a2, ::Enum_3_3590B72267A04337 a3, ::System::Action_2<::System::Single, ::System::Single>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::Enum_3_CE80FD07999C5845, ::Enum_3_3590B72267A04337, ::System::Action_2<::System::Single, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_56CDB22561CE9F0D_1_METHOD_1_C2C5F4B556ADAFE8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_1592A3464372C978(::Foundation::IEntity* a1, ::System::Collections::Generic::Dictionary_2<::Struct_2_2656809D0E9B3F8B, ::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::IEntity*, ::System::Collections::Generic::Dictionary_2<::Struct_2_2656809D0E9B3F8B, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_56CDB22561CE9F0D_1_METHOD_1_1592A3464372C978_OFFSET))(this, a1, a2);
	}
};
