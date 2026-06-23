#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_739EE1DE13C9D088_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x14DD2C70)
#define CLASS_2_739EE1DE13C9D088_METHOD_2_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x14DD2B30)
#define CLASS_2_739EE1DE13C9D088__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD2C00)

inline static constexpr unsigned int Class_2_739EE1DE13C9D088_TypeDefinitionIndex = 63949;

class Class_2_739EE1DE13C9D088 : public ::Class_1_8377BAB19A574A40
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_2_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_739EE1DE13C9D088__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBAB6A35C21A2A5B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_739EE1DE13C9D088_METHOD_2_EBAB6A35C21A2A5B_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_739EE1DE13C9D088_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};
