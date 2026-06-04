#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AE2E5C61B0ECF371;
namespace RPG::GameCore { class TAMonoTickLodConfig; }
namespace RPG::GameCore { class TAMonoTickLodTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C5AD4785D6103ABB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA76B8D0)
#define CLASS_1_C5AD4785D6103ABB_METHOD_1_73DE55699C2EC611_OFFSET UNITYSDK_OFFSET(0xA76B640)
#define CLASS_1_C5AD4785D6103ABB_METHOD_1_AD66F2D94501BF2B_OFFSET UNITYSDK_OFFSET(0xA76B430)
#define CLASS_1_C5AD4785D6103ABB_METHOD_1_E79EF21F0A1F4065_OFFSET UNITYSDK_OFFSET(0xA76B810)
#define CLASS_1_C5AD4785D6103ABB__CTOR_OFFSET UNITYSDK_OFFSET(0xA76B980)

inline static constexpr unsigned int Class_1_C5AD4785D6103ABB_TypeDefinitionIndex = 69057;

class Class_1_C5AD4785D6103ABB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TAMonoTickLodTemplate*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_AE2E5C61B0ECF371*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5AD4785D6103ABB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AD66F2D94501BF2B(::RPG::GameCore::TAMonoTickLodConfig* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TAMonoTickLodConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C5AD4785D6103ABB_METHOD_1_AD66F2D94501BF2B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_73DE55699C2EC611(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C5AD4785D6103ABB_METHOD_1_73DE55699C2EC611_OFFSET))(this, a1);
	}

	::Class_1_AE2E5C61B0ECF371* Method_1_E79EF21F0A1F4065(::System::String* a1)
	{
		return ((::Class_1_AE2E5C61B0ECF371*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C5AD4785D6103ABB_METHOD_1_E79EF21F0A1F4065_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5AD4785D6103ABB_DISPOSE_OFFSET))(this);
	}
};
