#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9524C68D713A7E40.h"

class Class_3_C93CC3D2C2AC4067;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_4_6A60338DFEE8118F_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1546AE80)
#define CLASS_4_6A60338DFEE8118F_METHOD_4_2D0EF4C8B528FC1E_OFFSET UNITYSDK_OFFSET(0x1546B0D0)
#define CLASS_4_6A60338DFEE8118F_METHOD_4_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x1546B650)
#define CLASS_4_6A60338DFEE8118F_METHOD_4_DF9F9C336BA14A4A_OFFSET UNITYSDK_OFFSET(0x1546B310)
#define CLASS_4_6A60338DFEE8118F__CTOR_OFFSET UNITYSDK_OFFSET(0x1546B080)

inline static constexpr unsigned int Class_4_6A60338DFEE8118F_TypeDefinitionIndex = 58875;

class Class_4_6A60338DFEE8118F : public ::Class_3_9524C68D713A7E40
{
public:
	::Nap::NapECS::EcsFilter* Field_4_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6A60338DFEE8118F__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_4_6A60338DFEE8118F_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_4_2D0EF4C8B528FC1E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_6A60338DFEE8118F_METHOD_4_2D0EF4C8B528FC1E_OFFSET))(this, a1);
	}

	::System::Void Method_4_DF9F9C336BA14A4A(::Class_3_C93CC3D2C2AC4067* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_4_6A60338DFEE8118F_METHOD_4_DF9F9C336BA14A4A_OFFSET))(this, a1);
	}

	::System::Void Method_4_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_4_6A60338DFEE8118F_METHOD_4_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
