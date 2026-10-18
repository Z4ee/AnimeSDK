#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class EraFlipperSnapshot; }

#define PROTO_ERAFLIPPERSNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFC34C0)
#define PROTO_ERAFLIPPERSNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFC3500)
#define PROTO_ERAFLIPPERSNAPSHOT___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DFC3510)

namespace Proto
{
	inline static constexpr unsigned int EraFlipperSnapshot___c_TypeDefinitionIndex = 25845;

	class EraFlipperSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::EraFlipperSnapshot___c** StaticGet___9()
		{
			return (::Proto::EraFlipperSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(EraFlipperSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x4A330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::EraFlipperSnapshot* __cctor_b__23_0()
		{
			return ((::Proto::EraFlipperSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERSNAPSHOT___C___CCTOR_B__23_0_OFFSET))(this);
		}
	};
}
