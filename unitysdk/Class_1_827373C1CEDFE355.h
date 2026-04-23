#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_827373C1CEDFE355_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11C085E0)
#define CLASS_1_827373C1CEDFE355_GET_SEED_OFFSET UNITYSDK_OFFSET(0x11C08BA0)
#define CLASS_1_827373C1CEDFE355_METHOD_1_0D6FECF72F6835ED_OFFSET UNITYSDK_OFFSET(0x11C08A10)
#define CLASS_1_827373C1CEDFE355_METHOD_1_5800B8C2CE59928F_OFFSET UNITYSDK_OFFSET(0x11C08710)
#define CLASS_1_827373C1CEDFE355_METHOD_1_5B4D756422B781F0_OFFSET UNITYSDK_OFFSET(0x11C08630)
#define CLASS_1_827373C1CEDFE355_METHOD_1_6EFE8628340B9AC8_OFFSET UNITYSDK_OFFSET(0x11C08790)
#define CLASS_1_827373C1CEDFE355_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x11C08BC0)
#define CLASS_1_827373C1CEDFE355_METHOD_1_FBF0C7BD596E3DD5_OFFSET UNITYSDK_OFFSET(0x11C08AE0)
#define CLASS_1_827373C1CEDFE355_METHOD_1_FC360C32F0C9BB03_OFFSET UNITYSDK_OFFSET(0x11C08940)
#define CLASS_1_827373C1CEDFE355_SET_SEED_OFFSET UNITYSDK_OFFSET(0x11C08BB0)
#define CLASS_1_827373C1CEDFE355__CTOR_OFFSET UNITYSDK_OFFSET(0x11C085A0)

inline static constexpr unsigned int Class_1_827373C1CEDFE355_TypeDefinitionIndex = 51772;

class Class_1_827373C1CEDFE355 : public ::System::Object
{
public:
	::System::Random* Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 _Seed_k__BackingField; // 0x1C

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_827373C1CEDFE355__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_827373C1CEDFE355_DISPOSE_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_5B4D756422B781F0()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_827373C1CEDFE355_METHOD_1_5B4D756422B781F0_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_6EFE8628340B9AC8(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_827373C1CEDFE355_METHOD_1_6EFE8628340B9AC8_OFFSET))(this, a1, a2);
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

	::System::Void set_Seed(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_827373C1CEDFE355_SET_SEED_OFFSET))(this, value);
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
