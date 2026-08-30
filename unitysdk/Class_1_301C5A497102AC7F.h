#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_F65C29E3C44746DB;
namespace RPG::GameCore { class FloorCustomValueConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_301C5A497102AC7F_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x16277B80)
#define CLASS_1_301C5A497102AC7F_METHOD_1_F06A7D4B36E4A84B_OFFSET UNITYSDK_OFFSET(0x16277580)
#define CLASS_1_301C5A497102AC7F__CTOR_OFFSET UNITYSDK_OFFSET(0x16277500)

inline static constexpr unsigned int Class_1_301C5A497102AC7F_TypeDefinitionIndex = 62175;

class Class_1_301C5A497102AC7F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_F65C29E3C44746DB*>* IKFBPCMKDEL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_301C5A497102AC7F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F06A7D4B36E4A84B(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FloorCustomValueConfig*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::FloorCustomValueConfig*>*))((::PBYTE)hIl2Cpp + CLASS_1_301C5A497102AC7F_METHOD_1_F06A7D4B36E4A84B_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_301C5A497102AC7F_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}
};
