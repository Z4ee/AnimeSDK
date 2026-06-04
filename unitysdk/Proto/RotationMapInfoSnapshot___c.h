#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class RotationMapInfoSnapshot; }

#define PROTO_ROTATIONMAPINFOSNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A125670)
#define PROTO_ROTATIONMAPINFOSNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1256B0)
#define PROTO_ROTATIONMAPINFOSNAPSHOT___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A1256C0)

namespace Proto
{
	inline static constexpr unsigned int RotationMapInfoSnapshot___c_TypeDefinitionIndex = 24413;

	class RotationMapInfoSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::RotationMapInfoSnapshot___c** StaticGet___9()
		{
			return (::Proto::RotationMapInfoSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(RotationMapInfoSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x45950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::RotationMapInfoSnapshot* __cctor_b__28_0()
		{
			return ((::Proto::RotationMapInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ROTATIONMAPINFOSNAPSHOT___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
