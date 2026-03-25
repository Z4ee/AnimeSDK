#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IEntity; }

#define ENTITAS_PUBLICMEMBERINFOENTITYEXTENSION_COPYTO_OFFSET UNITYSDK_OFFSET(0x11A87090)

namespace Entitas
{
	inline static constexpr unsigned int PublicMemberInfoEntityExtension_TypeDefinitionIndex = 9715;

	class PublicMemberInfoEntityExtension : public ::System::Object
	{
	public:
		static ::System::Void CopyTo(::Entitas::IEntity* entity, ::Entitas::IEntity* target, ::System::Boolean replaceExisting, ::Il2CppArray<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::Entitas::IEntity*, ::Entitas::IEntity*, ::System::Boolean, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ENTITAS_PUBLICMEMBERINFOENTITYEXTENSION_COPYTO_OFFSET))(entity, target, replaceExisting, indices);
		}
	};
}
