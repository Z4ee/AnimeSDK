#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
#include "unitysdk/EnviromentSystem/EnviroPropertyType.h"

class Class_2_13E98E15113145AC;
namespace EnviromentSystem { class EnviroAssetProperty_Class_1_A15A0E0681486F86; }
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_118F997A80166222_OFFSET UNITYSDK_OFFSET(0xFB853D0)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0xFB850B0)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0xFB85190)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_A81C4710A13DD571_OFFSET UNITYSDK_OFFSET(0xFB86390)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0xFB84E10)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_C027CF3DBDF58558_OFFSET UNITYSDK_OFFSET(0xFB85930)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xFB86310)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xFB86450)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xFB864D0)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFB862D0)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_CA5F6DB703947009_OFFSET UNITYSDK_OFFSET(0xFB854C0)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_D33218A492B26449_OFFSET UNITYSDK_OFFSET(0xFB860F0)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0xFB84D90)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xFB84EB0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroAssetProperty_TypeDefinitionIndex = 40302;

	class EnviroAssetProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		static ::Class_2_13E98E15113145AC** StaticGet___Loader()
		{
			return (::Class_2_13E98E15113145AC**)Il2CppClass::FromTypeDefinitionIndex(EnviroAssetProperty_TypeDefinitionIndex)->GetStaticField(0xE270);
		}
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroAssetProperty_Class_1_A15A0E0681486F86*>* _AssetRequest; // 0x48

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::EnviromentSystem::EnviroPropertyType a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::EnviromentSystem::EnviroPropertyType, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void Method_2_F730968E2645E14B()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_F730968E2645E14B_OFFSET))();
		}

		static ::Class_2_13E98E15113145AC* Method_2_BEBC8F4773DC82AA()
		{
			return ((::Class_2_13E98E15113145AC*(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_BEBC8F4773DC82AA_OFFSET))();
		}

		::System::Void Method_2_4A41C63BFE58D26F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_4A41C63BFE58D26F_OFFSET))(this);
		}

		::System::Void Method_2_118F997A80166222(::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_118F997A80166222_OFFSET))(this, a1);
		}

		::System::Void Method_2_C027CF3DBDF58558()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_C027CF3DBDF58558_OFFSET))(this);
		}

		::System::Void Method_2_CA5F6DB703947009(::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_CA5F6DB703947009_OFFSET))(this, a1);
		}

		::System::Void Method_2_D33218A492B26449()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_D33218A492B26449_OFFSET))(this);
		}

		::System::Void Method_2_7F29568EA964E563()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_7F29568EA964E563_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_2_A81C4710A13DD571(::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* P0)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_A81C4710A13DD571_OFFSET))(this, P0);
		}

		::System::Void Method_2_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
		}
	};
}
