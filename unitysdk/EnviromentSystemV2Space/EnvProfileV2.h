#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace EnviromentSystemV2Space { class BoolCurvePropertyData; }
namespace EnviromentSystemV2Space { class BoolPropertyData; }
namespace EnviromentSystemV2Space { class EnvLayoutInfo; }
namespace EnviromentSystemV2Space { class EnvResourceCurvePropertyData; }
namespace EnviromentSystemV2Space { class EnvResourceDataAdapterPropertyData; }
namespace EnviromentSystemV2Space { class FloatCurvePropertyData; }
namespace EnviromentSystemV2Space { class FloatPropertyData; }
namespace EnviromentSystemV2Space { class GradientPropertyData; }
namespace EnviromentSystemV2Space { class IntCurvePropertyData; }
namespace EnviromentSystemV2Space { class IntPropertyData; }
namespace EnviromentSystemV2Space { class PrefabCurvePropertyData; }
namespace EnviromentSystemV2Space { class PrefabPropertyData; }
namespace EnviromentSystemV2Space { class PropertyDataBase; }
namespace EnviromentSystemV2Space { class StructureData; }
namespace EnviromentSystemV2Space { class TextCurvePropertyData; }
namespace EnviromentSystemV2Space { class TextPropertyData; }
namespace EnviromentSystemV2Space { class TexturePropertyData; }
namespace EnviromentSystemV2Space { class Vector4CurvePropertyData; }
namespace EnviromentSystemV2Space { class Vector4PropertyData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_METHOD_3_33D362272DC28DD2_OFFSET UNITYSDK_OFFSET(0xF922080)
#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_METHOD_3_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0xF920230)
#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_METHOD_3_54820ED244BEEFAC_OFFSET UNITYSDK_OFFSET(0xF9205F0)
#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_METHOD_3_6EDCA900CAD178C3_OFFSET UNITYSDK_OFFSET(0xF920810)
#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_METHOD_3_88F597A5A1C86674_OFFSET UNITYSDK_OFFSET(0xF922100)
#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_METHOD_3_93CA3DB332CE3E20_OFFSET UNITYSDK_OFFSET(0xF921FF0)
#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_METHOD_3_D378B8603F19F57B_OFFSET UNITYSDK_OFFSET(0xF922380)
#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_METHOD_3_FE05356E47D9A94A_OFFSET UNITYSDK_OFFSET(0xF920020)
#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2__CCTOR_OFFSET UNITYSDK_OFFSET(0xF922950)
#define ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2__CTOR_OFFSET UNITYSDK_OFFSET(0xF9226B0)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvProfileV2_TypeDefinitionIndex = 46002;

	class EnvProfileV2 : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::Collections::Generic::List_1<::EnviromentSystemV2Space::PropertyDataBase*>** StaticGet__tempList()
		{
			return (::System::Collections::Generic::List_1<::EnviromentSystemV2Space::PropertyDataBase*>**)Il2CppClass::FromTypeDefinitionIndex(EnvProfileV2_TypeDefinitionIndex)->GetStaticField(0xC340);
		}
		::System::Boolean isSubclip; // 0x18
		::System::String* profilePath; // 0x20
		::System::Boolean enableLayout; // 0x28
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::EnvLayoutInfo*>* layoutInfo; // 0x30
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::IntPropertyData*>* intPropertyDatas; // 0x38
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::FloatPropertyData*>* floatPropertyDatas; // 0x40
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::TextPropertyData*>* textPropertyDatas; // 0x48
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::BoolPropertyData*>* boolPropertyDatas; // 0x50
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::Vector4PropertyData*>* Vector4PropertyDatas; // 0x58
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::TexturePropertyData*>* texturePropertyDatas; // 0x60
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::PrefabPropertyData*>* prefabPropertyDatas; // 0x68
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::FloatCurvePropertyData*>* curvePropertyDatas; // 0x70
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::GradientPropertyData*>* gradientPropertyDatas; // 0x78
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::Vector4CurvePropertyData*>* curve4PropertyDatas; // 0x80
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::StructureData*>* structureDatas; // 0x88
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::EnvResourceDataAdapterPropertyData*>* resourceAdapterPropertyDatas; // 0x90
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::EnvResourceCurvePropertyData*>* resourceCurvePropertyDatas; // 0x98
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::BoolCurvePropertyData*>* BoolCurvePropertyDatas; // 0xA0
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::IntCurvePropertyData*>* IntCurvePropertyDatas; // 0xA8
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::TextCurvePropertyData*>* TextCurvePropertyDatas; // 0xB0
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::PrefabCurvePropertyData*>* PrefabCurvePropertyDatas; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2__CCTOR_OFFSET))();
		}

		::System::Void Method_3_FE05356E47D9A94A(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_METHOD_3_FE05356E47D9A94A_OFFSET))(this, a1);
		}

		::System::Void Method_3_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_METHOD_3_497833CF065C1894_OFFSET))(this);
		}

		::System::Int32 Method_3_54820ED244BEEFAC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_METHOD_3_54820ED244BEEFAC_OFFSET))(this);
		}

		::System::Void Method_3_6EDCA900CAD178C3(::System::Collections::Generic::List_1<::EnviromentSystemV2Space::PropertyDataBase*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EnviromentSystemV2Space::PropertyDataBase*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_METHOD_3_6EDCA900CAD178C3_OFFSET))(this, a1);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::EnviromentSystemV2Space::PropertyDataBase*>* Method_3_93CA3DB332CE3E20()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::EnviromentSystemV2Space::PropertyDataBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_METHOD_3_93CA3DB332CE3E20_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::EnviromentSystemV2Space::PropertyDataBase*>* Method_3_33D362272DC28DD2()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::EnviromentSystemV2Space::PropertyDataBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_METHOD_3_33D362272DC28DD2_OFFSET))(this);
		}

		::System::Boolean Method_3_88F597A5A1C86674()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_METHOD_3_88F597A5A1C86674_OFFSET))(this);
		}

		::System::Boolean Method_3_D378B8603F19F57B(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVPROFILEV2_METHOD_3_D378B8603F19F57B_OFFSET))(this, a1);
		}
	};
}
