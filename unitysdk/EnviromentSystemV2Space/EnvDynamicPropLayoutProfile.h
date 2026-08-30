#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace EnviromentSystemV2Space { class LayoutBoolPropertyData; }
namespace EnviromentSystemV2Space { class LayoutFloatCurvePropertyData; }
namespace EnviromentSystemV2Space { class LayoutFloatPropertyData; }
namespace EnviromentSystemV2Space { class LayoutGradientPropertyData; }
namespace EnviromentSystemV2Space { class LayoutIntPropertyData; }
namespace EnviromentSystemV2Space { class LayoutPrefabPropertyData; }
namespace EnviromentSystemV2Space { class LayoutPropertyDataBase; }
namespace EnviromentSystemV2Space { class LayoutTextPropertyData; }
namespace EnviromentSystemV2Space { class LayoutTexturePropertyData; }
namespace EnviromentSystemV2Space { class LayoutVector4CurvePropertyData; }
namespace EnviromentSystemV2Space { class LayoutVector4PropertyData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define ENVIROMENTSYSTEMV2SPACE_ENVDYNAMICPROPLAYOUTPROFILE_METHOD_3_B247C6D88E785B91_OFFSET UNITYSDK_OFFSET(0x1534B9B0)
#define ENVIROMENTSYSTEMV2SPACE_ENVDYNAMICPROPLAYOUTPROFILE_METHOD_3_D760CBAEA5983162_OFFSET UNITYSDK_OFFSET(0x1534BC10)
#define ENVIROMENTSYSTEMV2SPACE_ENVDYNAMICPROPLAYOUTPROFILE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1534CFF0)
#define ENVIROMENTSYSTEMV2SPACE_ENVDYNAMICPROPLAYOUTPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x1534CE80)

namespace EnviromentSystemV2Space
{
	inline static constexpr unsigned int EnvDynamicPropLayoutProfile_TypeDefinitionIndex = 49804;

	class EnvDynamicPropLayoutProfile : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::Collections::Generic::List_1<::EnviromentSystemV2Space::LayoutPropertyDataBase*>** StaticGet__tempList()
		{
			return (::System::Collections::Generic::List_1<::EnviromentSystemV2Space::LayoutPropertyDataBase*>**)Il2CppClass::FromTypeDefinitionIndex(EnvDynamicPropLayoutProfile_TypeDefinitionIndex)->GetStaticField(0x65220);
		}
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::LayoutIntPropertyData*>* intPropertyDatas; // 0x18
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::LayoutFloatPropertyData*>* floatPropertyDatas; // 0x20
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::LayoutBoolPropertyData*>* boolPropertyDatas; // 0x28
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::LayoutVector4PropertyData*>* Vector4PropertyDatas; // 0x30
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::LayoutTexturePropertyData*>* texturePropertyDatas; // 0x38
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::LayoutPrefabPropertyData*>* prefabPropertyDatas; // 0x40
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::LayoutFloatCurvePropertyData*>* curvePropertyDatas; // 0x48
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::LayoutGradientPropertyData*>* gradientPropertyDatas; // 0x50
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::LayoutVector4CurvePropertyData*>* curveVector4PropertyDatas; // 0x58
		::System::Collections::Generic::List_1<::EnviromentSystemV2Space::LayoutTextPropertyData*>* textPropertyDatas; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVDYNAMICPROPLAYOUTPROFILE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVDYNAMICPROPLAYOUTPROFILE__CCTOR_OFFSET))();
		}

		::System::Void Method_3_B247C6D88E785B91()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVDYNAMICPROPLAYOUTPROFILE_METHOD_3_B247C6D88E785B91_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::EnviromentSystemV2Space::LayoutPropertyDataBase*>* Method_3_D760CBAEA5983162()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::EnviromentSystemV2Space::LayoutPropertyDataBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVDYNAMICPROPLAYOUTPROFILE_METHOD_3_D760CBAEA5983162_OFFSET))(this);
		}
	};
}
