#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class IB2ArenaAllocatable; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { template <typename T> class B2ArenaAllocatorTyped_1; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATOR_ASSPAN_OFFSET UNITYSDK_OFFSET(0x1C2A9910)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATOR_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1C2A9830)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATOR_RESIZE_OFFSET UNITYSDK_OFFSET(0x1C2A9890)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A9850)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ArenaAllocator_TypeDefinitionIndex = 35885;

	class B2ArenaAllocator : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::IB2ArenaAllocatable*>* _lookup; // 0x10
		::System::Object* _lock; // 0x18
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::IB2ArenaAllocatable*>* _allocators; // 0x20
		::System::Int32 _capacity; // 0x28

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATOR__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATOR_GET_COUNT_OFFSET))(this);
		}

		static ::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::IB2ArenaAllocatable*>* Resize(::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::IB2ArenaAllocatable*>* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::IB2ArenaAllocatable*>*(*)(::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::IB2ArenaAllocatable*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATOR_RESIZE_OFFSET))(a1, a2);
		}

		::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::IB2ArenaAllocatable*> AsSpan()
		{
			return ((::System::Span_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::IB2ArenaAllocatable*>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ARENAALLOCATOR_ASSPAN_OFFSET))(this);
		}
	};
}
