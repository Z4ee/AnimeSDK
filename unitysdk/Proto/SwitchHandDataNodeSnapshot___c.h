#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class SwitchHandDataNodeSnapshot; }

#define PROTO_SWITCHHANDDATANODESNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A12D530)
#define PROTO_SWITCHHANDDATANODESNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A12D570)
#define PROTO_SWITCHHANDDATANODESNAPSHOT___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1A12D580)

namespace Proto
{
	inline static constexpr unsigned int SwitchHandDataNodeSnapshot___c_TypeDefinitionIndex = 24419;

	class SwitchHandDataNodeSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::SwitchHandDataNodeSnapshot___c** StaticGet___9()
		{
			return (::Proto::SwitchHandDataNodeSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(SwitchHandDataNodeSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x46400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::SwitchHandDataNodeSnapshot* __cctor_b__43_0()
		{
			return ((::Proto::SwitchHandDataNodeSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT___C___CCTOR_B__43_0_OFFSET))(this);
		}
	};
}
