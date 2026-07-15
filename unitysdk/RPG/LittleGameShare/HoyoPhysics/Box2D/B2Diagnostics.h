#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DIAGNOSTICS_B2_ASSERT_OFFSET UNITYSDK_OFFSET(0xB62E050)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2Diagnostics_TypeDefinitionIndex = 35108;

	class B2Diagnostics : public ::System::Object
	{
	public:
		static ::System::Void B2_ASSERT(::System::Boolean a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::String*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2DIAGNOSTICS_B2_ASSERT_OFFSET))(a1, a2, a3, a4, a5);
		}
	};
}
