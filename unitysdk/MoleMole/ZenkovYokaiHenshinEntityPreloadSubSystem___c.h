#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_ZENKOVYOKAIHENSHINENTITYPRELOADSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14DA8AB0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINENTITYPRELOADSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14DA8AF0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINENTITYPRELOADSUBSYSTEM___C___CTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x14DA8B00)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovYokaiHenshinEntityPreloadSubSystem___c_TypeDefinitionIndex = 77581;

	class ZenkovYokaiHenshinEntityPreloadSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EntityHandle>*>** StaticGet___9__18_0()
		{
			return (::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EntityHandle>*>**)Il2CppClass::FromTypeDefinitionIndex(ZenkovYokaiHenshinEntityPreloadSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x334D0);
		}
		static ::MoleMole::ZenkovYokaiHenshinEntityPreloadSubSystem___c** StaticGet___9()
		{
			return (::MoleMole::ZenkovYokaiHenshinEntityPreloadSubSystem___c**)Il2CppClass::FromTypeDefinitionIndex(ZenkovYokaiHenshinEntityPreloadSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x334D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINENTITYPRELOADSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINENTITYPRELOADSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EntityHandle>* __ctor_b__18_0()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINENTITYPRELOADSUBSYSTEM___C___CTOR_B__18_0_OFFSET))(this);
		}
	};
}
