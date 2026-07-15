#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class FloorCustomValueSnapshot; }

#define PROTO_FLOORCUSTOMVALUESNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF7FE10)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF7FE50)
#define PROTO_FLOORCUSTOMVALUESNAPSHOT___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1BF7FE60)

namespace Proto
{
	inline static constexpr unsigned int FloorCustomValueSnapshot___c_TypeDefinitionIndex = 24886;

	class FloorCustomValueSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::FloorCustomValueSnapshot___c** StaticGet___9()
		{
			return (::Proto::FloorCustomValueSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(FloorCustomValueSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x3C720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::FloorCustomValueSnapshot* __cctor_b__43_0()
		{
			return ((::Proto::FloorCustomValueSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FLOORCUSTOMVALUESNAPSHOT___C___CCTOR_B__43_0_OFFSET))(this);
		}
	};
}
