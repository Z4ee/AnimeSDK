#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class PropInfoSnapshot; }

#define PROTO_PROPINFOSNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19354A00)
#define PROTO_PROPINFOSNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19354A40)
#define PROTO_PROPINFOSNAPSHOT___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x19354A50)

namespace Proto
{
	inline static constexpr unsigned int PropInfoSnapshot___c_TypeDefinitionIndex = 24527;

	class PropInfoSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::PropInfoSnapshot___c** StaticGet___9()
		{
			return (::Proto::PropInfoSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(PropInfoSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x65870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::PropInfoSnapshot* __cctor_b__23_0()
		{
			return ((::Proto::PropInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT___C___CCTOR_B__23_0_OFFSET))(this);
		}
	};
}
