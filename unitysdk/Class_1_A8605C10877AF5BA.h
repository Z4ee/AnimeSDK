#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45E6CA349D5D1707;
namespace RPG::Client { class AdventurePhase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A8605C10877AF5BA_METHOD_1_03A084429C7D3E79_OFFSET UNITYSDK_OFFSET(0xD800500)
#define CLASS_1_A8605C10877AF5BA_METHOD_1_403DE7FB52ED4B43_OFFSET UNITYSDK_OFFSET(0xD7FFF70)
#define CLASS_1_A8605C10877AF5BA_METHOD_1_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0xD800060)
#define CLASS_1_A8605C10877AF5BA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD7FFFC0)
#define CLASS_1_A8605C10877AF5BA_METHOD_1_CA46DFF8CF6EB34E_OFFSET UNITYSDK_OFFSET(0xD800320)
#define CLASS_1_A8605C10877AF5BA_METHOD_1_E6B823FA77D82D92_OFFSET UNITYSDK_OFFSET(0xD800640)
#define CLASS_1_A8605C10877AF5BA_METHOD_1_E6D3C4C666E119D9_OFFSET UNITYSDK_OFFSET(0xD800010)
#define CLASS_1_A8605C10877AF5BA__CTOR_OFFSET UNITYSDK_OFFSET(0xD800750)

inline static constexpr unsigned int Class_1_A8605C10877AF5BA_TypeDefinitionIndex = 56918;

class Class_1_A8605C10877AF5BA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_45E6CA349D5D1707*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_45E6CA349D5D1707*>* Field_1_1; // 0x18
	::RPG::Client::AdventurePhase* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8605C10877AF5BA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_403DE7FB52ED4B43(::RPG::Client::AdventurePhase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::AdventurePhase*))((::PBYTE)hIl2Cpp + CLASS_1_A8605C10877AF5BA_METHOD_1_403DE7FB52ED4B43_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8605C10877AF5BA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_E6D3C4C666E119D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8605C10877AF5BA_METHOD_1_E6D3C4C666E119D9_OFFSET))(this);
	}

	::System::Void Method_1_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8605C10877AF5BA_METHOD_1_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void Method_1_CA46DFF8CF6EB34E(::Class_1_45E6CA349D5D1707* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_45E6CA349D5D1707*))((::PBYTE)hIl2Cpp + CLASS_1_A8605C10877AF5BA_METHOD_1_CA46DFF8CF6EB34E_OFFSET))(this, a1);
	}

	::System::Void Method_1_03A084429C7D3E79(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A8605C10877AF5BA_METHOD_1_03A084429C7D3E79_OFFSET))(this, a1, a2);
	}

	::Class_1_45E6CA349D5D1707* Method_1_E6B823FA77D82D92(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_1_45E6CA349D5D1707*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A8605C10877AF5BA_METHOD_1_E6B823FA77D82D92_OFFSET))(this, a1, a2);
	}
};
