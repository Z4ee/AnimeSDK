#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define SIRENIX_ODININSPECTOR_ASSETSELECTORATTRIBUTE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C01F070)
#define SIRENIX_ODININSPECTOR_ASSETSELECTORATTRIBUTE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C01F0B0)
#define SIRENIX_ODININSPECTOR_ASSETSELECTORATTRIBUTE___C__SET_PATHS_B__12_0_OFFSET UNITYSDK_OFFSET(0x1C01F0C0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int AssetSelectorAttribute___c_TypeDefinitionIndex = 7129;

	class AssetSelectorAttribute___c : public ::System::Object
	{
	public:
		static ::Sirenix::OdinInspector::AssetSelectorAttribute___c** StaticGet___9()
		{
			return (::Sirenix::OdinInspector::AssetSelectorAttribute___c**)Il2CppClass::FromTypeDefinitionIndex(AssetSelectorAttribute___c_TypeDefinitionIndex)->GetStaticField(0x6020);
		}
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AssetSelectorAttribute___c_TypeDefinitionIndex)->GetStaticField(0x6028);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ASSETSELECTORATTRIBUTE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ASSETSELECTORATTRIBUTE___C__CTOR_OFFSET))(this);
		}

		::System::String* _set_Paths_b__12_0(::System::String* x)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_ASSETSELECTORATTRIBUTE___C__SET_PATHS_B__12_0_OFFSET))(this, x);
		}
	};
}
