#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AtomicInt.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2AllocFcn; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class b2FreeFcn; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BUFFERS_B2GETBYTECOUNT_OFFSET UNITYSDK_OFFSET(0xB613F70)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BUFFERS_B2SETALLOCATOR_OFFSET UNITYSDK_OFFSET(0xB613FB0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Buffers_TypeDefinitionIndex = 35054;

	class B2Buffers : public ::System::Object
	{
	public:
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2AllocFcn** StaticGet_b2_allocFcn()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2AllocFcn**)Il2CppClass::FromTypeDefinitionIndex(B2Buffers_TypeDefinitionIndex)->GetStaticField(0x5A3E0);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FreeFcn** StaticGet_b2_freeFcn()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FreeFcn**)Il2CppClass::FromTypeDefinitionIndex(B2Buffers_TypeDefinitionIndex)->GetStaticField(0x5A3E8);
		}
		static ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicInt* StaticGet_b2_byteCount()
		{
			return (::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicInt*)Il2CppClass::FromTypeDefinitionIndex(B2Buffers_TypeDefinitionIndex)->GetStaticField(0xF490);
		}

		static ::System::Int32 b2GetByteCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BUFFERS_B2GETBYTECOUNT_OFFSET))();
		}

		static ::System::Void b2SetAllocator(::RPG::LittleGameShare::HoyoPhysics::Box2D::b2AllocFcn* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FreeFcn* a2)
		{
			return ((::System::Void(*)(::RPG::LittleGameShare::HoyoPhysics::Box2D::b2AllocFcn*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::b2FreeFcn*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BUFFERS_B2SETALLOCATOR_OFFSET))(a1, a2);
		}
	};
}
