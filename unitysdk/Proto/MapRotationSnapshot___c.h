#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class MapRotationSnapshot; }

#define PROTO_MAPROTATIONSNAPSHOT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0FBFD0)
#define PROTO_MAPROTATIONSNAPSHOT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0FC010)
#define PROTO_MAPROTATIONSNAPSHOT___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1A0FC020)

namespace Proto
{
	inline static constexpr unsigned int MapRotationSnapshot___c_TypeDefinitionIndex = 24415;

	class MapRotationSnapshot___c : public ::System::Object
	{
	public:
		static ::Proto::MapRotationSnapshot___c** StaticGet___9()
		{
			return (::Proto::MapRotationSnapshot___c**)Il2CppClass::FromTypeDefinitionIndex(MapRotationSnapshot___c_TypeDefinitionIndex)->GetStaticField(0x443A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT___C__CTOR_OFFSET))(this);
		}

		::Proto::MapRotationSnapshot* __cctor_b__33_0()
		{
			return ((::Proto::MapRotationSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAPROTATIONSNAPSHOT___C___CCTOR_B__33_0_OFFSET))(this);
		}
	};
}
