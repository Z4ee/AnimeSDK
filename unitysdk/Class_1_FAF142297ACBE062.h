#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CloudGraphicsSettingType.h"
#include "unitysdk/System/Object.h"

class Class_1_1585D4BE1D29411C_Class_0_16E7307DCC43CB2C_13;
class Class_1_C30EA694EA516FDF;
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FAF142297ACBE062_DISPOSE_OFFSET UNITYSDK_OFFSET(0x104D79B0)
#define CLASS_1_FAF142297ACBE062_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x104D7220)
#define CLASS_1_FAF142297ACBE062_METHOD_1_27D91DFF6DB429B9_OFFSET UNITYSDK_OFFSET(0x104D74B0)
#define CLASS_1_FAF142297ACBE062_METHOD_1_5D0499BDC0418B72_OFFSET UNITYSDK_OFFSET(0x104D7350)
#define CLASS_1_FAF142297ACBE062_METHOD_1_82841C187F881D00_OFFSET UNITYSDK_OFFSET(0x104D7AD0)
#define CLASS_1_FAF142297ACBE062__CTOR_OFFSET UNITYSDK_OFFSET(0x104D7C20)

inline static constexpr unsigned int Class_1_FAF142297ACBE062_TypeDefinitionIndex = 48445;

class Class_1_FAF142297ACBE062 : public ::System::Object
{
public:
	::System::Collections::Concurrent::ConcurrentQueue_1<::Il2CppArray<::System::Byte>*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::Client::CloudGraphicsSettingType, ::Class_1_1585D4BE1D29411C_Class_0_16E7307DCC43CB2C_13*>* Field_1_0; // 0x18
	::Class_1_C30EA694EA516FDF* Field_1_1; // 0x20
	::System::Byte Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAF142297ACBE062__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAF142297ACBE062_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_5D0499BDC0418B72(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_FAF142297ACBE062_METHOD_1_5D0499BDC0418B72_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAF142297ACBE062_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_82841C187F881D00(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_FAF142297ACBE062_METHOD_1_82841C187F881D00_OFFSET))(this, a1);
	}

	::System::Void Method_1_27D91DFF6DB429B9(::Il2CppArray<::System::Byte>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_FAF142297ACBE062_METHOD_1_27D91DFF6DB429B9_OFFSET))(this, a1);
	}
};
