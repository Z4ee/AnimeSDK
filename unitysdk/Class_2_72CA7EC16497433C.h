#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_35D50070BC469EAB.h"

class Class_1_BFC2F9D5895EB2FB;
class Class_2_0B27C44B4222024F;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_72CA7EC16497433C_METHOD_2_21DB59A1BFCC6555_OFFSET UNITYSDK_OFFSET(0x151A76A0)
#define CLASS_2_72CA7EC16497433C_METHOD_2_52F0E274C0D075CE_OFFSET UNITYSDK_OFFSET(0x151A7530)
#define CLASS_2_72CA7EC16497433C_METHOD_2_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x151A7140)
#define CLASS_2_72CA7EC16497433C_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x151A7B20)
#define CLASS_2_72CA7EC16497433C_METHOD_2_B703864A5E3486C0_OFFSET UNITYSDK_OFFSET(0x151A7460)
#define CLASS_2_72CA7EC16497433C__CTOR_OFFSET UNITYSDK_OFFSET(0x151A7110)

inline static constexpr unsigned int Class_2_72CA7EC16497433C_TypeDefinitionIndex = 61566;

class Class_2_72CA7EC16497433C : public ::Class_1_35D50070BC469EAB
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_1_BFC2F9D5895EB2FB* Field_2_1; // 0x50

	::System::Void _ctor(::MoleMole::Config::InteractEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + CLASS_2_72CA7EC16497433C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B703864A5E3486C0(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_72CA7EC16497433C_METHOD_2_B703864A5E3486C0_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_52F0E274C0D075CE(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_72CA7EC16497433C_METHOD_2_52F0E274C0D075CE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_21DB59A1BFCC6555(::Class_2_0B27C44B4222024F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0B27C44B4222024F*))((::PBYTE)hIl2Cpp + CLASS_2_72CA7EC16497433C_METHOD_2_21DB59A1BFCC6555_OFFSET))(this, a1);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_0B27C44B4222024F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0B27C44B4222024F*))((::PBYTE)hIl2Cpp + CLASS_2_72CA7EC16497433C_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::System::Void Method_2_6BA7BB45F0BA72F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72CA7EC16497433C_METHOD_2_6BA7BB45F0BA72F4_OFFSET))(this);
	}
};
