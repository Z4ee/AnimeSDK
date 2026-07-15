#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_4.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2FFB70)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2FFBB0)
#define RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C___COLLECTAFFECTBLOCKANDITEM_B__39_0_OFFSET UNITYSDK_OFFSET(0x1A2FFBC0)

namespace RPG::Client
{
	inline static constexpr unsigned int PartialFlipDeviceComponent___c_TypeDefinitionIndex = 69966;

	class PartialFlipDeviceComponent___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::ValueTuple_4<::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::EraStateType>, ::System::ValueTuple_2<::System::String*, ::System::String*>>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::System::ValueTuple_4<::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::EraStateType>, ::System::ValueTuple_2<::System::String*, ::System::String*>>**)Il2CppClass::FromTypeDefinitionIndex(PartialFlipDeviceComponent___c_TypeDefinitionIndex)->GetStaticField(0x650C0);
		}
		static ::RPG::Client::PartialFlipDeviceComponent___c** StaticGet___9()
		{
			return (::RPG::Client::PartialFlipDeviceComponent___c**)Il2CppClass::FromTypeDefinitionIndex(PartialFlipDeviceComponent___c_TypeDefinitionIndex)->GetStaticField(0x650C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C__CTOR_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::String*, ::System::String*> __CollectAffectBlockAndItem_b__39_0(::System::ValueTuple_4<::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::EraStateType> a1)
		{
			return ((::System::ValueTuple_2<::System::String*, ::System::String*>(*)(::PVOID, ::System::ValueTuple_4<::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::EraStateType>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARTIALFLIPDEVICECOMPONENT___C___COLLECTAFFECTBLOCKANDITEM_B__39_0_OFFSET))(this, a1);
		}
	};
}
