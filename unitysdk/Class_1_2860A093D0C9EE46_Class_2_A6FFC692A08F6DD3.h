#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2860A093D0C9EE46_Class_1_9A90CD018E72DF20_23.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftRotationType.h"

namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReactiveProperty_1; }

#define CLASS_1_2860A093D0C9EE46_CLASS_2_A6FFC692A08F6DD3_GET_MUTABLESHOULDHINTROTATIONIMPROPER_OFFSET UNITYSDK_OFFSET(0x15E0C510)
#define CLASS_1_2860A093D0C9EE46_CLASS_2_A6FFC692A08F6DD3_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x15E0C4F0)
#define CLASS_1_2860A093D0C9EE46_CLASS_2_A6FFC692A08F6DD3_METHOD_2_5868E98F31FE7969_OFFSET UNITYSDK_OFFSET(0x15E0C560)
#define CLASS_1_2860A093D0C9EE46_CLASS_2_A6FFC692A08F6DD3_METHOD_2_FB5550CC734284FC_OFFSET UNITYSDK_OFFSET(0x15E0C520)
#define CLASS_1_2860A093D0C9EE46_CLASS_2_A6FFC692A08F6DD3_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x15E0C500)
#define CLASS_1_2860A093D0C9EE46_CLASS_2_A6FFC692A08F6DD3__CTOR_OFFSET UNITYSDK_OFFSET(0x15E0C5A0)

inline static constexpr unsigned int Class_1_2860A093D0C9EE46_Class_2_A6FFC692A08F6DD3_TypeDefinitionIndex = 79495;

class Class_1_2860A093D0C9EE46_Class_2_A6FFC692A08F6DD3 : public ::Class_1_2860A093D0C9EE46_Class_1_9A90CD018E72DF20_23
{
public:
	::R3::ReactiveProperty_1<::System::Boolean>* _MutableShouldHintRotationImproper_k__BackingField; // 0x10
	::RPG::Client::MechCraft::MechCraftRotationType _Rotation_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2860A093D0C9EE46_CLASS_2_A6FFC692A08F6DD3__CTOR_OFFSET))(this);
	}

	::RPG::Client::MechCraft::MechCraftRotationType get_Rotation()
	{
		return ((::RPG::Client::MechCraft::MechCraftRotationType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2860A093D0C9EE46_CLASS_2_A6FFC692A08F6DD3_GET_ROTATION_OFFSET))(this);
	}

	::System::Void set_Rotation(::RPG::Client::MechCraft::MechCraftRotationType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftRotationType))((::PBYTE)hIl2Cpp + CLASS_1_2860A093D0C9EE46_CLASS_2_A6FFC692A08F6DD3_SET_ROTATION_OFFSET))(this, a1);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_MutableShouldHintRotationImproper()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2860A093D0C9EE46_CLASS_2_A6FFC692A08F6DD3_GET_MUTABLESHOULDHINTROTATIONIMPROPER_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_2_FB5550CC734284FC()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2860A093D0C9EE46_CLASS_2_A6FFC692A08F6DD3_METHOD_2_FB5550CC734284FC_OFFSET))(this);
	}

	::RPG::Client::MechCraft::MechCraftRotationType Method_2_5868E98F31FE7969()
	{
		return ((::RPG::Client::MechCraft::MechCraftRotationType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2860A093D0C9EE46_CLASS_2_A6FFC692A08F6DD3_METHOD_2_5868E98F31FE7969_OFFSET))(this);
	}
};
