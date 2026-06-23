#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_35D50070BC469EAB.h"

class Class_2_0B27C44B4222024F;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntityMode_Collection; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C28A9C2FFBD9548F_METHOD_2_285669FBAF041A1C_OFFSET UNITYSDK_OFFSET(0x159E3F00)
#define CLASS_2_C28A9C2FFBD9548F_METHOD_2_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x159E3E20)
#define CLASS_2_C28A9C2FFBD9548F_METHOD_2_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x159E4600)
#define CLASS_2_C28A9C2FFBD9548F_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x159E3450)
#define CLASS_2_C28A9C2FFBD9548F_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x159E3490)
#define CLASS_2_C28A9C2FFBD9548F_METHOD_2_93D2D92314B7A59E_OFFSET UNITYSDK_OFFSET(0x159E37E0)
#define CLASS_2_C28A9C2FFBD9548F_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x159E4690)
#define CLASS_2_C28A9C2FFBD9548F_METHOD_2_A13F3094E4F602B3_OFFSET UNITYSDK_OFFSET(0x159E4360)
#define CLASS_2_C28A9C2FFBD9548F_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x159E3EB0)
#define CLASS_2_C28A9C2FFBD9548F_METHOD_2_A44A1C9F708632A8_OFFSET UNITYSDK_OFFSET(0x159E3FB0)
#define CLASS_2_C28A9C2FFBD9548F_METHOD_2_B9EC3F44C1BFC5EF_OFFSET UNITYSDK_OFFSET(0x159E3DB0)
#define CLASS_2_C28A9C2FFBD9548F_METHOD_2_CB210D3CDDB106B2_OFFSET UNITYSDK_OFFSET(0x159E3CD0)
#define CLASS_2_C28A9C2FFBD9548F_METHOD_2_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0x159E3540)
#define CLASS_2_C28A9C2FFBD9548F_METHOD_2_EA530069BEBB230C_OFFSET UNITYSDK_OFFSET(0x159E35C0)
#define CLASS_2_C28A9C2FFBD9548F__CTOR_OFFSET UNITYSDK_OFFSET(0x159E3D20)

inline static constexpr unsigned int Class_2_C28A9C2FFBD9548F_TypeDefinitionIndex = 75278;

class Class_2_C28A9C2FFBD9548F : public ::Class_1_35D50070BC469EAB
{
public:
	::MoleMole::Config::InteractEntry* Field_2_1; // 0x50
	::System::Boolean Field_2_4; // 0x58
	::System::Single Field_2_3; // 0x5C
	::System::Single Field_2_2; // 0x60
	::System::Int32 Field_2_0; // 0x64

	::System::Void _ctor(::MoleMole::Config::InteractEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + CLASS_2_C28A9C2FFBD9548F__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C28A9C2FFBD9548F_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C28A9C2FFBD9548F_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Boolean Method_2_EA530069BEBB230C(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_C28A9C2FFBD9548F_METHOD_2_EA530069BEBB230C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CB210D3CDDB106B2(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_C28A9C2FFBD9548F_METHOD_2_CB210D3CDDB106B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_B9EC3F44C1BFC5EF(::Class_2_0B27C44B4222024F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0B27C44B4222024F*))((::PBYTE)hIl2Cpp + CLASS_2_C28A9C2FFBD9548F_METHOD_2_B9EC3F44C1BFC5EF_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C28A9C2FFBD9548F_METHOD_2_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Void Method_2_93D2D92314B7A59E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_C28A9C2FFBD9548F_METHOD_2_93D2D92314B7A59E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_A44A1C9F708632A8(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Action_1<::MoleMole::Battle::Entity*>* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Action_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_2_C28A9C2FFBD9548F_METHOD_2_A44A1C9F708632A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A13F3094E4F602B3(::System::Int32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_C28A9C2FFBD9548F_METHOD_2_A13F3094E4F602B3_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C28A9C2FFBD9548F_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_2_D2809205008ACF99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C28A9C2FFBD9548F_METHOD_2_D2809205008ACF99_OFFSET))(this);
	}

	::MoleMole::Config::InteractEntityMode_Collection* Method_2_285669FBAF041A1C()
	{
		return ((::MoleMole::Config::InteractEntityMode_Collection*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C28A9C2FFBD9548F_METHOD_2_285669FBAF041A1C_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C28A9C2FFBD9548F_METHOD_2_391A84BCD9F51317_2_OFFSET))(this);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_0B27C44B4222024F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0B27C44B4222024F*))((::PBYTE)hIl2Cpp + CLASS_2_C28A9C2FFBD9548F_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}
};
