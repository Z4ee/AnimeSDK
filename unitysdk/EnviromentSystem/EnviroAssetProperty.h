#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
#include "unitysdk/EnviromentSystem/EnviroPropertyType.h"

class Class_2_3547B9D7F2C7CCA9;
namespace EnviromentSystem { class EnviroAssetProperty_Class_1_A15A0E0681486F86; }
namespace EnviromentSystem { class EnviromentClip_OnEnvironmentClipLoadDelegate; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_118F997A80166222_OFFSET UNITYSDK_OFFSET(0xF2F9130)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_1C1946CD7FEA6415_OFFSET UNITYSDK_OFFSET(0xF2F9AD0)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0xF2F8E10)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xF2F9A70)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xF2F9B50)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0xF2F9BB0)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xF2F9A10)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_7F29568EA964E563_OFFSET UNITYSDK_OFFSET(0xF2F8EF0)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_BEBC8F4773DC82AA_OFFSET UNITYSDK_OFFSET(0xF2F8CE0)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_C027CF3DBDF58558_OFFSET UNITYSDK_OFFSET(0xF2F9690)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_CA5F6DB703947009_OFFSET UNITYSDK_OFFSET(0xF2F9220)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_D33218A492B26449_OFFSET UNITYSDK_OFFSET(0xF2F9870)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0xF2F8C60)
#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xF2F8D80)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroAssetProperty_TypeDefinitionIndex = 46211;

	class EnviroAssetProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		static ::Class_2_3547B9D7F2C7CCA9** StaticGet___Loader()
		{
			return (::Class_2_3547B9D7F2C7CCA9**)Il2CppClass::FromTypeDefinitionIndex(EnviroAssetProperty_TypeDefinitionIndex)->GetStaticField(0x12400);
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

		static ::Class_2_3547B9D7F2C7CCA9* Method_2_BEBC8F4773DC82AA()
		{
			return ((::Class_2_3547B9D7F2C7CCA9*(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_BEBC8F4773DC82AA_OFFSET))();
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

		::System::Void Method_2_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_2_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_2_1C1946CD7FEA6415(::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate* P0)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentClip_OnEnvironmentClipLoadDelegate*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_1C1946CD7FEA6415_OFFSET))(this, P0);
		}

		::System::Void Method_2_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_2_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_METHOD_2_5790A55946AA509D_3_OFFSET))(this);
		}
	};
}
