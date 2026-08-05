#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8289F2785D9AA990;
class Class_1_C87309B6DF67BFA9;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x168200D0)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1681FB60)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_1C7049F264ECA2D2_OFFSET UNITYSDK_OFFSET(0x168202F0)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_389486378BEF2498_OFFSET UNITYSDK_OFFSET(0x1681FFF0)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_4D51F8C3AD3FFDA3_OFFSET UNITYSDK_OFFSET(0x16820110)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_829B09E994469287_OFFSET UNITYSDK_OFFSET(0x1681FBC0)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x16820450)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x168203D0)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x168201D0)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x1681FD90)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_BABB29523C48150E_OFFSET UNITYSDK_OFFSET(0x1681FC00)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_E7E79C2DB13BB2BB_OFFSET UNITYSDK_OFFSET(0x16820060)
#define CLASS_1_D6B7E3EBE9F0425A_METHOD_1_FD22C7645D5586B4_OFFSET UNITYSDK_OFFSET(0x1681FE20)
#define CLASS_1_D6B7E3EBE9F0425A_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1681FAE0)
#define CLASS_1_D6B7E3EBE9F0425A__CTOR_OFFSET UNITYSDK_OFFSET(0x1681FAD0)

inline static constexpr unsigned int Class_1_D6B7E3EBE9F0425A_TypeDefinitionIndex = 59016;

class Class_1_D6B7E3EBE9F0425A : public ::System::Object
{
public:
	::Class_1_8289F2785D9AA990* Field_1_7; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_6; // 0x18
	::System::Action_1<::System::Int32>* Field_1_4; // 0x20
	::System::Action_1<::System::Int32>* Field_1_11; // 0x28
	::Class_1_C87309B6DF67BFA9* Field_1_1; // 0x30
	::System::Int32 Field_1_10; // 0x38
	::System::Int32 Field_1_0; // 0x3C
	::System::Int32 Field_1_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_829B09E994469287()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_829B09E994469287_OFFSET))(this);
	}

	::System::Void Method_1_BABB29523C48150E(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_BABB29523C48150E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_FD22C7645D5586B4(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_FD22C7645D5586B4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_389486378BEF2498(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_389486378BEF2498_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7E79C2DB13BB2BB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_E7E79C2DB13BB2BB_OFFSET))(this, a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_1_4D51F8C3AD3FFDA3(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_4D51F8C3AD3FFDA3_OFFSET))(this, a1);
	}

	::System::Void Method_1_998E122F46014853()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_998E122F46014853_OFFSET))(this);
	}

	::System::Single Method_1_1C7049F264ECA2D2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_1C7049F264ECA2D2_OFFSET))(this);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Boolean Method_1_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D6B7E3EBE9F0425A_METHOD_1_83DA3EC57FF907F4_OFFSET))(this);
	}
};
