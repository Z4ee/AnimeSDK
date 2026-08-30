#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class Tutorial; }

#define PROTO_TUTORIAL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D981820)
#define PROTO_TUTORIAL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D981850)
#define PROTO_TUTORIAL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1D981860)

namespace Proto
{
	inline static constexpr unsigned int Tutorial___c_TypeDefinitionIndex = 34373;

	class Tutorial___c : public ::System::Object
	{
	public:
		static ::Proto::Tutorial___c** StaticGet___9()
		{
			return (::Proto::Tutorial___c**)Il2CppClass::FromTypeDefinitionIndex(Tutorial___c_TypeDefinitionIndex)->GetStaticField(0x990);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_TUTORIAL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL___C__CTOR_OFFSET))(this);
		}

		::Proto::Tutorial* __cctor_b__28_0()
		{
			return ((::Proto::Tutorial*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
