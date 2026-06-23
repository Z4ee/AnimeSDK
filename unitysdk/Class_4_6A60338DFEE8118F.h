#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_9524C68D713A7E40.h"

class Class_3_DFD5D1FDB9D2A4AC;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_4_6A60338DFEE8118F_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xFBE2770)
#define CLASS_4_6A60338DFEE8118F_METHOD_4_6950DFC9E62DCDC3_OFFSET UNITYSDK_OFFSET(0xFBE2D90)
#define CLASS_4_6A60338DFEE8118F_METHOD_4_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xFBE2D00)
#define CLASS_4_6A60338DFEE8118F_METHOD_4_DF9F9C336BA14A4A_OFFSET UNITYSDK_OFFSET(0xFBE29C0)
#define CLASS_4_6A60338DFEE8118F__CTOR_OFFSET UNITYSDK_OFFSET(0xFBE2970)

inline static constexpr unsigned int Class_4_6A60338DFEE8118F_TypeDefinitionIndex = 45411;

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

	::System::Void Method_4_DF9F9C336BA14A4A(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_4_6A60338DFEE8118F_METHOD_4_DF9F9C336BA14A4A_OFFSET))(this, a1);
	}

	::System::Void Method_4_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_4_6A60338DFEE8118F_METHOD_4_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_4_6950DFC9E62DCDC3(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_4_6A60338DFEE8118F_METHOD_4_6950DFC9E62DCDC3_OFFSET))(this, a1);
	}
};
