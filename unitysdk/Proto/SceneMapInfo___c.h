#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class SceneMapInfo; }

#define PROTO_SCENEMAPINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1935B580)
#define PROTO_SCENEMAPINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1935B5B0)
#define PROTO_SCENEMAPINFO___C___CCTOR_B__98_0_OFFSET UNITYSDK_OFFSET(0x1935B5C0)

namespace Proto
{
	inline static constexpr unsigned int SceneMapInfo___c_TypeDefinitionIndex = 32191;

	class SceneMapInfo___c : public ::System::Object
	{
	public:
		static ::Proto::SceneMapInfo___c** StaticGet___9()
		{
			return (::Proto::SceneMapInfo___c**)Il2CppClass::FromTypeDefinitionIndex(SceneMapInfo___c_TypeDefinitionIndex)->GetStaticField(0x65C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO___C__CTOR_OFFSET))(this);
		}

		::Proto::SceneMapInfo* __cctor_b__98_0()
		{
			return ((::Proto::SceneMapInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEMAPINFO___C___CCTOR_B__98_0_OFFSET))(this);
		}
	};
}
