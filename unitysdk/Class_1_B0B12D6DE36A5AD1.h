#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_08C6C0ABAF0F06B3;
class Class_1_49AB19924B4FCC28;
namespace RPG::GameCore { class LevelPedestrianInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B0B12D6DE36A5AD1_METHOD_1_222951B8BA7FC1B0_OFFSET UNITYSDK_OFFSET(0x12AA1500)
#define CLASS_1_B0B12D6DE36A5AD1_METHOD_1_276C66D91E10F6AA_OFFSET UNITYSDK_OFFSET(0x12AA15F0)
#define CLASS_1_B0B12D6DE36A5AD1_METHOD_1_62548D888C19F674_OFFSET UNITYSDK_OFFSET(0x12AA13D0)
#define CLASS_1_B0B12D6DE36A5AD1_METHOD_1_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x12AA11B0)
#define CLASS_1_B0B12D6DE36A5AD1_METHOD_1_FD7514C64FB1B043_OFFSET UNITYSDK_OFFSET(0x12AA1300)
#define CLASS_1_B0B12D6DE36A5AD1__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA0FA0)

inline static constexpr unsigned int Class_1_B0B12D6DE36A5AD1_TypeDefinitionIndex = 64746;

class Class_1_B0B12D6DE36A5AD1 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::LevelPedestrianInfo*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_08C6C0ABAF0F06B3*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_08C6C0ABAF0F06B3*>* Field_1_2; // 0x20
	::System::UInt32 Field_1_3; // 0x28
	::System::Int32 Field_1_4; // 0x2C

	::System::Void _ctor(::System::UInt32 a1, ::Il2CppArray<::RPG::GameCore::LevelPedestrianInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::RPG::GameCore::LevelPedestrianInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_B0B12D6DE36A5AD1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B0B12D6DE36A5AD1_METHOD_1_F978A1D172468895_OFFSET))(this);
	}

	::System::Void Method_1_FD7514C64FB1B043(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B0B12D6DE36A5AD1_METHOD_1_FD7514C64FB1B043_OFFSET))(this, a1);
	}

	::System::Void Method_1_62548D888C19F674(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B0B12D6DE36A5AD1_METHOD_1_62548D888C19F674_OFFSET))(this, a1, a2);
	}

	::Class_1_08C6C0ABAF0F06B3* Method_1_222951B8BA7FC1B0(::System::Int32 a1)
	{
		return ((::Class_1_08C6C0ABAF0F06B3*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B0B12D6DE36A5AD1_METHOD_1_222951B8BA7FC1B0_OFFSET))(this, a1);
	}

	::System::Void Method_1_276C66D91E10F6AA(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Int32 a4, ::Class_1_49AB19924B4FCC28*& a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Int32, ::Class_1_49AB19924B4FCC28*&))((::PBYTE)hIl2Cpp + CLASS_1_B0B12D6DE36A5AD1_METHOD_1_276C66D91E10F6AA_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
