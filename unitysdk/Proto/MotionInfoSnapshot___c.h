#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MotionInfoSnapshot; }

#define PROTO_MOTIONINFOSNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A11A5E0)
#define PROTO_MOTIONINFOSNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A11A620)
#define PROTO_MOTIONINFOSNAPSHOT___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A11A630)

namespace Proto
{
	inline static constexpr unsigned int MotionInfoSnapshot___c_TypeDefinitionIndex = 24382;

	class MotionInfoSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::MotionInfoSnapshot___c** StaticGet___9()
		{
			return (::Proto::MotionInfoSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(MotionInfoSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x44C60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::MotionInfoSnapshot* __cctor_b__28_0()
		{
			return ((::Proto::MotionInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MOTIONINFOSNAPSHOT___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
