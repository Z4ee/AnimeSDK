#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LevelShootGameConfig_MoveType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_248DACE3BB3053DD;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1F2A222D0FE2CC68_METHOD_1_0EEAB0DF173C79D7_OFFSET UNITYSDK_OFFSET(0x14005460)
#define CLASS_1_1F2A222D0FE2CC68_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x14005400)
#define CLASS_1_1F2A222D0FE2CC68_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x14190210)
#define CLASS_1_1F2A222D0FE2CC68_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0x140058F0)
#define CLASS_1_1F2A222D0FE2CC68_METHOD_1_67D41ACFEF39E84E_OFFSET UNITYSDK_OFFSET(0x1418FA70)
#define CLASS_1_1F2A222D0FE2CC68_METHOD_1_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0x14004E10)
#define CLASS_1_1F2A222D0FE2CC68_METHOD_1_9F84D1FF74319152_OFFSET UNITYSDK_OFFSET(0x14190890)
#define CLASS_1_1F2A222D0FE2CC68_METHOD_1_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x141902F0)
#define CLASS_1_1F2A222D0FE2CC68__CTOR_OFFSET UNITYSDK_OFFSET(0x1418F9E0)

inline static constexpr unsigned int Class_1_1F2A222D0FE2CC68_TypeDefinitionIndex = 55598;

class Class_1_1F2A222D0FE2CC68 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_19; // 0x0
	// static const ::System::Single Field_1_18; // 0x0
	::Class_3_C93CC3D2C2AC4067* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::System::Single>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_1_1; // 0x20
	::Class_3_248DACE3BB3053DD* Field_1_5; // 0x28
	::System::Int32 Field_1_10; // 0x30
	::UnityEngine::Vector3 Field_1_8; // 0x34
	::System::Boolean Field_1_11; // 0x40
	::System::Boolean Field_1_12; // 0x41
	::System::Boolean Field_1_15; // 0x42
	::System::Single Field_1_9; // 0x44
	::System::Single Field_1_4; // 0x48
	::System::Single Field_1_14; // 0x4C
	::MoleMole::Config::LevelShootGameConfig_MoveType Field_1_6; // 0x50
	::System::Single Field_1_13; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F2A222D0FE2CC68__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_67D41ACFEF39E84E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F2A222D0FE2CC68_METHOD_1_67D41ACFEF39E84E_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F2A222D0FE2CC68_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F2A222D0FE2CC68_METHOD_1_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::Boolean Method_1_9F84D1FF74319152()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F2A222D0FE2CC68_METHOD_1_9F84D1FF74319152_OFFSET))(this);
	}

	::System::Void Method_1_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F2A222D0FE2CC68_METHOD_1_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F2A222D0FE2CC68_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_1_0EEAB0DF173C79D7(::MoleMole::Battle::Entity* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1F2A222D0FE2CC68_METHOD_1_0EEAB0DF173C79D7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1F2A222D0FE2CC68_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}
};
