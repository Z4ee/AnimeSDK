#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class SceneEntityInfo; }

#define PROTO_SCENEENTITYINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEF0ED0)
#define PROTO_SCENEENTITYINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEF0F00)
#define PROTO_SCENEENTITYINFO___C___CCTOR_B__64_0_OFFSET UNITYSDK_OFFSET(0x1BEF0F10)

namespace Proto
{
	inline static constexpr unsigned int SceneEntityInfo___c_TypeDefinitionIndex = 32536;

	class SceneEntityInfo___c : public ::System::Object
	{
	public:
		static ::Proto::SceneEntityInfo___c** StaticGet___9()
		{
			return (::Proto::SceneEntityInfo___c**)Il2CppClass::FromTypeDefinitionIndex(SceneEntityInfo___c_TypeDefinitionIndex)->GetStaticField(0x3FF30);
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
