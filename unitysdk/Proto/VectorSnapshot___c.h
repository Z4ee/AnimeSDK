#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class VectorSnapshot; }

#define PROTO_VECTORSNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2F5150)
#define PROTO_VECTORSNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F5190)
#define PROTO_VECTORSNAPSHOT___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1D2F51A0)

namespace Proto
{
	inline static constexpr unsigned int VectorSnapshot___c_TypeDefinitionIndex = 24882;

	class VectorSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::VectorSnapshot___c** StaticGet___9()
		{
			return (::Proto::VectorSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(VectorSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::VectorSnapshot* __cctor_b__33_0()
		{
			return ((::Proto::VectorSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_VECTORSNAPSHOT___C___CCTOR_B__33_0_OFFSET))(this);
		}
	};
}
