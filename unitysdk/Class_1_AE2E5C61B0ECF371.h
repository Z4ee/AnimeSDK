#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TAMonoTickLodTemplate; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AE2E5C61B0ECF371_METHOD_1_0624CF4C8FF5E14E_OFFSET UNITYSDK_OFFSET(0xAF25F60)
#define CLASS_1_AE2E5C61B0ECF371_METHOD_1_7591D5D07356ABCB_OFFSET UNITYSDK_OFFSET(0xAF26330)
#define CLASS_1_AE2E5C61B0ECF371_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0xAF262C0)
#define CLASS_1_AE2E5C61B0ECF371__CTOR_OFFSET UNITYSDK_OFFSET(0xAF25F10)

inline static constexpr unsigned int Class_1_AE2E5C61B0ECF371_TypeDefinitionIndex = 69058;

class Class_1_AE2E5C61B0ECF371 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Tuple_2<::System::Single, ::System::Int32>*>* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18

	::System::Void _ctor(::RPG::GameCore::TAMonoTickLodTemplate* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TAMonoTickLodTemplate*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE2E5C61B0ECF371__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0624CF4C8FF5E14E(::RPG::GameCore::TAMonoTickLodTemplate* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TAMonoTickLodTemplate*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AE2E5C61B0ECF371_METHOD_1_0624CF4C8FF5E14E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE2E5C61B0ECF371_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Int32 Method_1_7591D5D07356ABCB(::System::Single a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AE2E5C61B0ECF371_METHOD_1_7591D5D07356ABCB_OFFSET))(this, a1);
	}
};
