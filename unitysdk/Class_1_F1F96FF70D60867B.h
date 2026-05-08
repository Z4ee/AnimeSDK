#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LevelShootGameConfig_MoveType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_248DACE3BB3053DD;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F1F96FF70D60867B_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14624600)
#define CLASS_1_F1F96FF70D60867B_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x146240E0)
#define CLASS_1_F1F96FF70D60867B_METHOD_1_3ED922CF439CED90_OFFSET UNITYSDK_OFFSET(0x146241C0)
#define CLASS_1_F1F96FF70D60867B_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x14624660)
#define CLASS_1_F1F96FF70D60867B_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x14622D10)
#define CLASS_1_F1F96FF70D60867B_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x14623300)
#define CLASS_1_F1F96FF70D60867B_METHOD_1_9F84D1FF74319152_OFFSET UNITYSDK_OFFSET(0x14622AB0)
#define CLASS_1_F1F96FF70D60867B_METHOD_1_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x14623B00)
#define CLASS_1_F1F96FF70D60867B__CTOR_OFFSET UNITYSDK_OFFSET(0x14622A20)

inline static constexpr unsigned int Class_1_F1F96FF70D60867B_TypeDefinitionIndex = 78288;

class Class_1_F1F96FF70D60867B : public ::System::Object
{
public:
	// static const ::System::Single Field_1_14; // 0x0
	// static const ::System::Single Field_1_15; // 0x0
	::System::Collections::Generic::List_1<::System::Single>* Field_1_1; // 0x10
	::Class_3_248DACE3BB3053DD* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_0; // 0x20
	::Class_3_DFD5D1FDB9D2A4AC* Field_1_2; // 0x28
	::UnityEngine::Vector3 Field_1_9; // 0x30
	::System::Single Field_1_11; // 0x3C
	::System::Boolean Field_1_10; // 0x40
	::System::Boolean Field_1_13; // 0x41
	::System::Boolean Field_1_6; // 0x42
	::System::Int32 Field_1_7; // 0x44
	::System::Single Field_1_12; // 0x48
	::System::Single Field_1_8; // 0x4C
	::System::Single Field_1_5; // 0x50
	::MoleMole::Config::LevelShootGameConfig_MoveType Field_1_3; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F96FF70D60867B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_9F84D1FF74319152()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F96FF70D60867B_METHOD_1_9F84D1FF74319152_OFFSET))(this);
	}

	::System::Void Method_1_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F96FF70D60867B_METHOD_1_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F96FF70D60867B_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_3ED922CF439CED90(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F1F96FF70D60867B_METHOD_1_3ED922CF439CED90_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F96FF70D60867B_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F96FF70D60867B_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F1F96FF70D60867B_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1F96FF70D60867B_METHOD_1_82E992240300FB30_OFFSET))(this);
	}
};
