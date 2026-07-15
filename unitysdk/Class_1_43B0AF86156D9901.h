#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_43B0AF86156D9901_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D72740)
#define CLASS_1_43B0AF86156D9901_GET_SEED_OFFSET UNITYSDK_OFFSET(0x16D72E50)
#define CLASS_1_43B0AF86156D9901_METHOD_1_000201E2543EC20C_OFFSET UNITYSDK_OFFSET(0x16D72D20)
#define CLASS_1_43B0AF86156D9901_METHOD_1_55C834350BC72541_OFFSET UNITYSDK_OFFSET(0x16D72BD0)
#define CLASS_1_43B0AF86156D9901_METHOD_1_5800B8C2CE59928F_OFFSET UNITYSDK_OFFSET(0x16D72990)
#define CLASS_1_43B0AF86156D9901_METHOD_1_65B378624FF5673B_OFFSET UNITYSDK_OFFSET(0x16D72A10)
#define CLASS_1_43B0AF86156D9901_METHOD_1_A306C9697DD477FE_OFFSET UNITYSDK_OFFSET(0x16D72790)
#define CLASS_1_43B0AF86156D9901_METHOD_1_A9D6C655762955BA_OFFSET UNITYSDK_OFFSET(0x16D72A90)
#define CLASS_1_43B0AF86156D9901_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16D72E70)
#define CLASS_1_43B0AF86156D9901_SET_SEED_OFFSET UNITYSDK_OFFSET(0x16D72E60)
#define CLASS_1_43B0AF86156D9901__CTOR_OFFSET UNITYSDK_OFFSET(0x16D72700)

inline static constexpr unsigned int Class_1_43B0AF86156D9901_TypeDefinitionIndex = 53650;

class Class_1_43B0AF86156D9901 : public ::System::Object
{
public:
	::System::Random* Field_1_0; // 0x10
	::System::Int32 _Seed_k__BackingField; // 0x18
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_43B0AF86156D9901__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43B0AF86156D9901_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_A306C9697DD477FE()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43B0AF86156D9901_METHOD_1_A306C9697DD477FE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_65B378624FF5673B(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_43B0AF86156D9901_METHOD_1_65B378624FF5673B_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_A9D6C655762955BA(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_43B0AF86156D9901_METHOD_1_A9D6C655762955BA_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_55C834350BC72541(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_43B0AF86156D9901_METHOD_1_55C834350BC72541_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_000201E2543EC20C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43B0AF86156D9901_METHOD_1_000201E2543EC20C_OFFSET))(this);
	}

	::System::Int32 get_Seed()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43B0AF86156D9901_GET_SEED_OFFSET))(this);
	}

	::System::Void set_Seed(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_43B0AF86156D9901_SET_SEED_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43B0AF86156D9901_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_5800B8C2CE59928F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_43B0AF86156D9901_METHOD_1_5800B8C2CE59928F_OFFSET))(this, a1);
	}
};
