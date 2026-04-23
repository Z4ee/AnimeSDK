#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MapInfoGroup; }

#define PROTO_MAPINFOGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19347B90)
#define PROTO_MAPINFOGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19347BC0)
#define PROTO_MAPINFOGROUP___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x19347BD0)

namespace Proto
{
	inline static constexpr unsigned int MapInfoGroup___c_TypeDefinitionIndex = 32185;

	class MapInfoGroup___c : public ::System::Object
	{
	public:
		static ::Proto::MapInfoGroup___c** StaticGet___9()
		{
			return (::Proto::MapInfoGroup___c**)Il2CppClass::FromTypeDefinitionIndex(MapInfoGroup___c_TypeDefinitionIndex)->GetStaticField(0x643F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP___C__CTOR_OFFSET))(this);
		}

		::Proto::MapInfoGroup* __cctor_b__43_0()
		{
			return ((::Proto::MapInfoGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPINFOGROUP___C___CCTOR_B__43_0_OFFSET))(this);
		}
	};
}
