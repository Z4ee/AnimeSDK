#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GpuParticleOccluder; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_4_82EDCE14E0F2D012___C__CALCULATEOBBAABBINTERSECTIONS_B__16_0_OFFSET UNITYSDK_OFFSET(0x12432580)
#define CLASS_4_82EDCE14E0F2D012___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12432540)
#define CLASS_4_82EDCE14E0F2D012___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12432570)

inline static constexpr unsigned int Class_4_82EDCE14E0F2D012___c_TypeDefinitionIndex = 45915;

class Class_4_82EDCE14E0F2D012___c : public ::System::Object
{
public:
	static ::Class_4_82EDCE14E0F2D012___c** StaticGet___9()
	{
		return (::Class_4_82EDCE14E0F2D012___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012___c_TypeDefinitionIndex)->GetStaticField(0x7B50);
	}
	static ::System::Comparison_1<::RPG::Client::GpuParticleOccluder*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::RPG::Client::GpuParticleOccluder*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012___c_TypeDefinitionIndex)->GetStaticField(0x7B58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _CalculateOBBAABBIntersections_b__16_0(::RPG::Client::GpuParticleOccluder* a, ::RPG::Client::GpuParticleOccluder* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::GpuParticleOccluder*, ::RPG::Client::GpuParticleOccluder*))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012___C__CALCULATEOBBAABBINTERSECTIONS_B__16_0_OFFSET))(this, a, b);
	}
};
