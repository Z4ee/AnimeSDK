#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GpuParticleOccluder; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_4_82EDCE14E0F2D012___C__CALCULATEOBBAABBINTERSECTIONS_B__16_0_OFFSET UNITYSDK_OFFSET(0x15A84100)
#define CLASS_4_82EDCE14E0F2D012___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15A840C0)
#define CLASS_4_82EDCE14E0F2D012___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15A840F0)

inline static constexpr unsigned int Class_4_82EDCE14E0F2D012___c_TypeDefinitionIndex = 49743;

class Class_4_82EDCE14E0F2D012___c : public ::System::Object
{
public:
	static ::Class_4_82EDCE14E0F2D012___c** StaticGet___9()
	{
		return (::Class_4_82EDCE14E0F2D012___c**)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012___c_TypeDefinitionIndex)->GetStaticField(0x5E220);
	}
	static ::System::Comparison_1<::RPG::Client::GpuParticleOccluder*>** StaticGet___9__16_0()
	{
		return (::System::Comparison_1<::RPG::Client::GpuParticleOccluder*>**)Il2CppClass::FromTypeDefinitionIndex(Class_4_82EDCE14E0F2D012___c_TypeDefinitionIndex)->GetStaticField(0x5E228);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _CalculateOBBAABBIntersections_b__16_0(::RPG::Client::GpuParticleOccluder* a1, ::RPG::Client::GpuParticleOccluder* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::GpuParticleOccluder*, ::RPG::Client::GpuParticleOccluder*))((::PBYTE)hIl2Cpp + CLASS_4_82EDCE14E0F2D012___C__CALCULATEOBBAABBINTERSECTIONS_B__16_0_OFFSET))(this, a1, a2);
	}
};
