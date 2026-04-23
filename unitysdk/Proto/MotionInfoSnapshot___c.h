#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MotionInfoSnapshot; }

#define PROTO_MOTIONINFOSNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1934C5B0)
#define PROTO_MOTIONINFOSNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1934C5F0)
#define PROTO_MOTIONINFOSNAPSHOT___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1934C600)

namespace Proto
{
	inline static constexpr unsigned int MotionInfoSnapshot___c_TypeDefinitionIndex = 24521;

	class MotionInfoSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::MotionInfoSnapshot___c** StaticGet___9()
		{
			return (::Proto::MotionInfoSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(MotionInfoSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x64A80);
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
