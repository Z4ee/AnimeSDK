#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_827373C1CEDFE355_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC062C0)
#define CLASS_1_827373C1CEDFE355_GET_SEED_OFFSET UNITYSDK_OFFSET(0xCC06810)
#define CLASS_1_827373C1CEDFE355_METHOD_1_0D6FECF72F6835ED_OFFSET UNITYSDK_OFFSET(0xCC06680)
#define CLASS_1_827373C1CEDFE355_METHOD_1_5800B8C2CE59928F_OFFSET UNITYSDK_OFFSET(0xCC064B0)
#define CLASS_1_827373C1CEDFE355_METHOD_1_65B378624FF5673B_OFFSET UNITYSDK_OFFSET(0xCC06530)
#define CLASS_1_827373C1CEDFE355_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xCC06830)
#define CLASS_1_827373C1CEDFE355_METHOD_1_C8045E0EF1BCD487_OFFSET UNITYSDK_OFFSET(0xCC06310)
#define CLASS_1_827373C1CEDFE355_METHOD_1_FBF0C7BD596E3DD5_OFFSET UNITYSDK_OFFSET(0xCC06750)
#define CLASS_1_827373C1CEDFE355_METHOD_1_FC360C32F0C9BB03_OFFSET UNITYSDK_OFFSET(0xCC065B0)
#define CLASS_1_827373C1CEDFE355_SET_SEED_OFFSET UNITYSDK_OFFSET(0xCC06820)
#define CLASS_1_827373C1CEDFE355__CTOR_OFFSET UNITYSDK_OFFSET(0xCC06280)

inline static constexpr unsigned int Class_1_827373C1CEDFE355_TypeDefinitionIndex = 52446;

class Class_1_827373C1CEDFE355 : public ::System::Object
{
public:
	::System::Random* Field_1_0; // 0x10
	::System::Int32 _Seed_k__BackingField; // 0x18
	::System::Int32 Field_1_2; // 0x1C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_827373C1CEDFE355__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_827373C1CEDFE355_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_C8045E0EF1BCD487()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_827373C1CEDFE355_METHOD_1_C8045E0EF1BCD487_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_65B378624FF5673B(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_827373C1CEDFE355_METHOD_1_65B378624FF5673B_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_FC360C32F0C9BB03(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_827373C1CEDFE355_METHOD_1_FC360C32F0C9BB03_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_0D6FECF72F6835ED(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_827373C1CEDFE355_METHOD_1_0D6FECF72F6835ED_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_FBF0C7BD596E3DD5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_827373C1CEDFE355_METHOD_1_FBF0C7BD596E3DD5_OFFSET))(this);
	}

	::System::Int32 get_Seed()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_827373C1CEDFE355_GET_SEED_OFFSET))(this);
	}

	::System::Void set_Seed(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_827373C1CEDFE355_SET_SEED_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_827373C1CEDFE355_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_5800B8C2CE59928F(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_827373C1CEDFE355_METHOD_1_5800B8C2CE59928F_OFFSET))(this, a1);
	}
};
