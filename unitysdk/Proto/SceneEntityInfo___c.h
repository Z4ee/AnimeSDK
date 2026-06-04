#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class SceneEntityInfo; }

#define PROTO_SCENEENTITYINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A127920)
#define PROTO_SCENEENTITYINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A127950)
#define PROTO_SCENEENTITYINFO___C___CCTOR_B__64_0_OFFSET UNITYSDK_OFFSET(0x1A127960)

namespace Proto
{
	inline static constexpr unsigned int SceneEntityInfo___c_TypeDefinitionIndex = 32138;

	class SceneEntityInfo___c : public ::System::Object
	{
	public:
		static ::Proto::SceneEntityInfo___c** StaticGet___9()
		{
			return (::Proto::SceneEntityInfo___c**)Il2CppClass::FromTypeDefinitionIndex(SceneEntityInfo___c_TypeDefinitionIndex)->GetStaticField(0x45CD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO___C__CTOR_OFFSET))(this);
		}

		::Proto::SceneEntityInfo* __cctor_b__64_0()
		{
			return ((::Proto::SceneEntityInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SCENEENTITYINFO___C___CCTOR_B__64_0_OFFSET))(this);
		}
	};
}
