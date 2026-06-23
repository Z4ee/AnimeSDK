#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ParticlesData;
namespace System { template <typename T1, typename T2> class Func_2; }

#define PERFRAMEDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C13CC90)
#define PERFRAMEDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C13CCD0)
#define PERFRAMEDATA___C__GET_PARTICLESCOUNT_B__2_0_OFFSET UNITYSDK_OFFSET(0x1C13CCE0)

inline static constexpr unsigned int PerFrameData___c_TypeDefinitionIndex = 27096;

class PerFrameData___c : public ::System::Object
{
public:
	static ::PerFrameData___c** StaticGet___9()
	{
		return (::PerFrameData___c**)Il2CppClass::FromTypeDefinitionIndex(PerFrameData___c_TypeDefinitionIndex)->GetStaticField(0x222F0);
	}
	static ::System::Func_2<::ParticlesData*, ::System::Int32>** StaticGet___9__2_0()
	{
		return (::System::Func_2<::ParticlesData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PerFrameData___c_TypeDefinitionIndex)->GetStaticField(0x222F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PERFRAMEDATA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PERFRAMEDATA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _get_ParticlesCount_b__2_0(::ParticlesData* g)
	{
		return ((::System::Int32(*)(::PVOID, ::ParticlesData*))((::PBYTE)hIl2Cpp + PERFRAMEDATA___C__GET_PARTICLESCOUNT_B__2_0_OFFSET))(this, g);
	}
};
