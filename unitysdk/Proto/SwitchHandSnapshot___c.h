#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class SwitchHandSnapshot; }

#define PROTO_SWITCHHANDSNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A12DE50)
#define PROTO_SWITCHHANDSNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A12DE90)
#define PROTO_SWITCHHANDSNAPSHOT___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1A12DEA0)

namespace Proto
{
	inline static constexpr unsigned int SwitchHandSnapshot___c_TypeDefinitionIndex = 24421;

	class SwitchHandSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::SwitchHandSnapshot___c** StaticGet___9()
		{
			return (::Proto::SwitchHandSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(SwitchHandSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x46470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::SwitchHandSnapshot* __cctor_b__23_0()
		{
			return ((::Proto::SwitchHandSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT___C___CCTOR_B__23_0_OFFSET))(this);
		}
	};
}
