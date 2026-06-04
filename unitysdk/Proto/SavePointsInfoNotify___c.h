#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class SavePointsInfoNotify; }

#define PROTO_SAVEPOINTSINFONOTIFY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A125E70)
#define PROTO_SAVEPOINTSINFONOTIFY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A125EB0)
#define PROTO_SAVEPOINTSINFONOTIFY___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A125EC0)

namespace Proto
{
	inline static constexpr unsigned int SavePointsInfoNotify___c_TypeDefinitionIndex = 32235;

	class SavePointsInfoNotify___c : public ::System::Object
	{
	public:
		static ::Proto::SavePointsInfoNotify___c** StaticGet___9()
		{
			return (::Proto::SavePointsInfoNotify___c**)Il2CppClass::FromTypeDefinitionIndex(SavePointsInfoNotify___c_TypeDefinitionIndex)->GetStaticField(0x459D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY___C__CTOR_OFFSET))(this);
		}

		::Proto::SavePointsInfoNotify* __cctor_b__28_0()
		{
			return ((::Proto::SavePointsInfoNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
