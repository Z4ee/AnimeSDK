#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
#include "unitysdk/EnviromentSystem/EnviroPropertyType.h"

class Class_2_7D53347CD75A5D8B;
namespace EnviromentSystem { class EnviroAssetProperty_Class_1_A15A0E0681486F86; }
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_C436A2848092EB88_OFFSET UNITYSDK_OFFSET(0x152F69D0)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_CA5F6DB703947009_OFFSET UNITYSDK_OFFSET(0x152F7080)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_D08A551686938D7D_OFFSET UNITYSDK_OFFSET(0x152F6ED0)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_E5630A859AA24FB3_OFFSET UNITYSDK_OFFSET(0x152F6750)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_E9EEDFB818CD2681_OFFSET UNITYSDK_OFFSET(0x152F7680)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_EA7C9571288E1295_OFFSET UNITYSDK_OFFSET(0x152F79C0)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_EBAB6A35C21A2A5B_OFFSET UNITYSDK_OFFSET(0x152F6B80)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x152F66F0)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x152F67D0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroAssetProperty_TypeDefinitionIndex = 50040;

	class EnviroAssetProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		static ::Class_2_7D53347CD75A5D8B** StaticGet___Loader()
		{
			return (::Class_2_7D53347CD75A5D8B**)Il2CppClass::FromTypeDefinitionIndex(EnviroAssetProperty_TypeDefinitionIndex)->GetStaticField(0x64C50);
		}
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroAssetProperty_Class_1_A15A0E0681486F86*>* _AssetRequest; // 0x48

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::EnviromentSystem::EnviroPropertyType a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::EnviromentSystem::EnviroPropertyType, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void Method_2_F8C7231308CD2C82()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_F8C7231308CD2C82_OFFSET))();
		}

		static ::Class_2_7D53347CD75A5D8B* Method_2_E5630A859AA24FB3()
		{
			return ((::Class_2_7D53347CD75A5D8B*(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_E5630A859AA24FB3_OFFSET))();
		}

		::System::Void Method_2_C436A2848092EB88()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_C436A2848092EB88_OFFSET))(this);
		}

		::System::Void Method_2_D08A551686938D7D(::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_D08A551686938D7D_OFFSET))(this, a1);
		}

		::System::Void Method_2_E9EEDFB818CD2681()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_E9EEDFB818CD2681_OFFSET))(this);
		}

		::System::Void Method_2_CA5F6DB703947009(::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_CA5F6DB703947009_OFFSET))(this, a1);
		}

		::System::Void Method_2_EA7C9571288E1295()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_EA7C9571288E1295_OFFSET))(this);
		}

		::System::Void Method_2_EBAB6A35C21A2A5B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_EBAB6A35C21A2A5B_OFFSET))(this);
		}
	};
}
