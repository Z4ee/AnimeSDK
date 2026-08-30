#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IEntity; }

#define ENTITAS_PUBLICMEMBERINFOENTITYEXTENSION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1EECCE70)

namespace Entitas
{
	inline static constexpr unsigned int PublicMemberInfoEntityExtension_TypeDefinitionIndex = 9968;

	class PublicMemberInfoEntityExtension : public ::System::Object
	{
	public:
		static ::System::Void CopyTo(::Entitas::IEntity* a1, ::Entitas::IEntity* a2, ::System::Boolean a3, ::Il2CppArray<::System::Int32>* a4)
		{
			return ((::System::Void(*)(::Entitas::IEntity*, ::Entitas::IEntity*, ::System::Boolean, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + ENTITAS_PUBLICMEMBERINFOENTITYEXTENSION_COPYTO_OFFSET))(a1, a2, a3, a4);
		}
	};
}
