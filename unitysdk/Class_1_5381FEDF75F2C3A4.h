#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorCustomValueSetSource.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_8826F6D93ACAC1A7;
class Class_1_F65C29E3C44746DB;
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace RPG::GameCore { class SetFloorCustomValueExtraInfo; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5381FEDF75F2C3A4_METHOD_1_0340ED4C7B725F4F_OFFSET UNITYSDK_OFFSET(0xAA1D5D0)
#define CLASS_1_5381FEDF75F2C3A4_METHOD_1_073CEC5F945FF84F_OFFSET UNITYSDK_OFFSET(0xAA1D410)
#define CLASS_1_5381FEDF75F2C3A4_METHOD_1_08D110CFDFCBDAB9_OFFSET UNITYSDK_OFFSET(0xAA1D150)
#define CLASS_1_5381FEDF75F2C3A4_METHOD_1_246EC81433452046_OFFSET UNITYSDK_OFFSET(0xAA1CDE0)
#define CLASS_1_5381FEDF75F2C3A4_METHOD_1_7144F3D0728EC2EF_OFFSET UNITYSDK_OFFSET(0xAA1CF60)
#define CLASS_1_5381FEDF75F2C3A4_METHOD_1_75D79DC917BDF910_OFFSET UNITYSDK_OFFSET(0xAA1CB40)
#define CLASS_1_5381FEDF75F2C3A4_METHOD_1_9CF4C3FC97AC2132_OFFSET UNITYSDK_OFFSET(0xAA1CFA0)
#define CLASS_1_5381FEDF75F2C3A4_METHOD_1_CE841A652CEEBB67_OFFSET UNITYSDK_OFFSET(0xAA1D780)
#define CLASS_1_5381FEDF75F2C3A4__CTOR_OFFSET UNITYSDK_OFFSET(0xAA1CAC0)

inline static constexpr unsigned int Class_1_5381FEDF75F2C3A4_TypeDefinitionIndex = 57283;

class Class_1_5381FEDF75F2C3A4 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_F65C29E3C44746DB*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5381FEDF75F2C3A4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_75D79DC917BDF910(::Il2CppArray<::RPG::GameCore::FloorCustomValueConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FloorCustomValueConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_5381FEDF75F2C3A4_METHOD_1_75D79DC917BDF910_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_F65C29E3C44746DB*>* Method_1_7144F3D0728EC2EF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_F65C29E3C44746DB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5381FEDF75F2C3A4_METHOD_1_7144F3D0728EC2EF_OFFSET))(this);
	}

	::System::String* Method_1_9CF4C3FC97AC2132(::RPG::GameCore::FloorCustomValueConfig* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FloorCustomValueConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5381FEDF75F2C3A4_METHOD_1_9CF4C3FC97AC2132_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_08D110CFDFCBDAB9(::System::String* a1, ::System::Action_1<::System::String*>* a2, ::Class_1_8826F6D93ACAC1A7* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*, ::Class_1_8826F6D93ACAC1A7*))((::PBYTE)hIl2Cpp + CLASS_1_5381FEDF75F2C3A4_METHOD_1_08D110CFDFCBDAB9_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_073CEC5F945FF84F(::System::String* a1, ::System::Action_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_5381FEDF75F2C3A4_METHOD_1_073CEC5F945FF84F_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Boolean, ::Class_1_F65C29E3C44746DB*> Method_1_0340ED4C7B725F4F(::System::String* a1)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::Class_1_F65C29E3C44746DB*>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5381FEDF75F2C3A4_METHOD_1_0340ED4C7B725F4F_OFFSET))(this, a1);
	}

	::System::Void Method_1_CE841A652CEEBB67(::RPG::GameCore::FloorCustomValueSetSource a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloorCustomValueSetSource))((::PBYTE)hIl2Cpp + CLASS_1_5381FEDF75F2C3A4_METHOD_1_CE841A652CEEBB67_OFFSET))(this, a1);
	}

	static ::Class_1_F65C29E3C44746DB* Method_1_246EC81433452046(::RPG::GameCore::FloorCustomValueConfig* a1)
	{
		return ((::Class_1_F65C29E3C44746DB*(*)(::RPG::GameCore::FloorCustomValueConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5381FEDF75F2C3A4_METHOD_1_246EC81433452046_OFFSET))(a1);
	}
};
