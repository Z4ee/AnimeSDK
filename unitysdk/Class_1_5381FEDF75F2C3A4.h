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

#define CLASS_1_5381FEDF75F2C3A4_METHOD_1_073CEC5F945FF84F_OFFSET UNITYSDK_OFFSET(0x16F12F60)
#define CLASS_1_5381FEDF75F2C3A4_METHOD_1_08D110CFDFCBDAB9_OFFSET UNITYSDK_OFFSET(0x16F12C40)
#define CLASS_1_5381FEDF75F2C3A4_METHOD_1_425FC366EA213F95_OFFSET UNITYSDK_OFFSET(0x16F12A60)
#define CLASS_1_5381FEDF75F2C3A4_METHOD_1_7144F3D0728EC2EF_OFFSET UNITYSDK_OFFSET(0x16F12A20)
#define CLASS_1_5381FEDF75F2C3A4_METHOD_1_9A22CF336DB7F224_OFFSET UNITYSDK_OFFSET(0x16F12550)
#define CLASS_1_5381FEDF75F2C3A4_METHOD_1_D83694A5A5569031_OFFSET UNITYSDK_OFFSET(0x16F13100)
#define CLASS_1_5381FEDF75F2C3A4_METHOD_1_E98E60385F1FE32D_OFFSET UNITYSDK_OFFSET(0x16F127B0)
#define CLASS_1_5381FEDF75F2C3A4_METHOD_1_F8FA74A9B6BE8B5E_OFFSET UNITYSDK_OFFSET(0x16F13270)
#define CLASS_1_5381FEDF75F2C3A4__CTOR_OFFSET UNITYSDK_OFFSET(0x16F124D0)

inline static constexpr unsigned int Class_1_5381FEDF75F2C3A4_TypeDefinitionIndex = 59339;

class Class_1_5381FEDF75F2C3A4 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_F65C29E3C44746DB*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5381FEDF75F2C3A4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9A22CF336DB7F224(::Il2CppArray<::RPG::GameCore::FloorCustomValueConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FloorCustomValueConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_5381FEDF75F2C3A4_METHOD_1_9A22CF336DB7F224_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_F65C29E3C44746DB*>* Method_1_7144F3D0728EC2EF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_F65C29E3C44746DB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5381FEDF75F2C3A4_METHOD_1_7144F3D0728EC2EF_OFFSET))(this);
	}

	::System::String* Method_1_425FC366EA213F95(::RPG::GameCore::FloorCustomValueConfig* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FloorCustomValueConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5381FEDF75F2C3A4_METHOD_1_425FC366EA213F95_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_08D110CFDFCBDAB9(::System::String* a1, ::System::Action_1<::System::String*>* a2, ::Class_1_8826F6D93ACAC1A7* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*, ::Class_1_8826F6D93ACAC1A7*))((::PBYTE)hIl2Cpp + CLASS_1_5381FEDF75F2C3A4_METHOD_1_08D110CFDFCBDAB9_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_073CEC5F945FF84F(::System::String* a1, ::System::Action_1<::System::String*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_5381FEDF75F2C3A4_METHOD_1_073CEC5F945FF84F_OFFSET))(this, a1, a2);
	}

	::System::ValueTuple_2<::System::Boolean, ::Class_1_F65C29E3C44746DB*> Method_1_D83694A5A5569031(::System::String* a1)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::Class_1_F65C29E3C44746DB*>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5381FEDF75F2C3A4_METHOD_1_D83694A5A5569031_OFFSET))(this, a1);
	}

	::System::Void Method_1_F8FA74A9B6BE8B5E(::RPG::GameCore::FloorCustomValueSetSource a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FloorCustomValueSetSource))((::PBYTE)hIl2Cpp + CLASS_1_5381FEDF75F2C3A4_METHOD_1_F8FA74A9B6BE8B5E_OFFSET))(this, a1);
	}

	static ::Class_1_F65C29E3C44746DB* Method_1_E98E60385F1FE32D(::RPG::GameCore::FloorCustomValueConfig* a1)
	{
		return ((::Class_1_F65C29E3C44746DB*(*)(::RPG::GameCore::FloorCustomValueConfig*))((::PBYTE)hIl2Cpp + CLASS_1_5381FEDF75F2C3A4_METHOD_1_E98E60385F1FE32D_OFFSET))(a1);
	}
};
