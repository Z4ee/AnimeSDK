#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeInfo.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_AttributeOwner.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_GeoInfo.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GameObject; }

#define HEU_EXAMPLEEVERGREENQUERY_CHANGEPARMSANDCOOK_OFFSET UNITYSDK_OFFSET(0x167B2F60)
#define HEU_EXAMPLEEVERGREENQUERY_COOKASSET_OFFSET UNITYSDK_OFFSET(0x167B2F40)
#define HEU_EXAMPLEEVERGREENQUERY_QUERYATTRIBUTEBYSTORAGETYPE_OFFSET UNITYSDK_OFFSET(0x167B5670)
#define HEU_EXAMPLEEVERGREENQUERY_QUERYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x167B3960)
#define HEU_EXAMPLEEVERGREENQUERY_QUERYGEOPARTS_OFFSET UNITYSDK_OFFSET(0x167B4750)
#define HEU_EXAMPLEEVERGREENQUERY_QUERYHOUDINIASSET_OFFSET UNITYSDK_OFFSET(0x167B2D50)
#define HEU_EXAMPLEEVERGREENQUERY_QUERYOBJECTS_OFFSET UNITYSDK_OFFSET(0x167B3400)
#define HEU_EXAMPLEEVERGREENQUERY_QUERYPARTATTRIBUTEBYOWNER_OFFSET UNITYSDK_OFFSET(0x167B4EF0)
#define HEU_EXAMPLEEVERGREENQUERY_STARTQUERY_OFFSET UNITYSDK_OFFSET(0x167B26C0)
#define HEU_EXAMPLEEVERGREENQUERY__CTOR_OFFSET UNITYSDK_OFFSET(0x167B5CC0)

inline static constexpr unsigned int HEU_ExampleEvergreenQuery_TypeDefinitionIndex = 39051;

class HEU_ExampleEvergreenQuery : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_EXAMPLEEVERGREENQUERY__CTOR_OFFSET))(this);
	}

	static ::System::Void StartQuery()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEU_EXAMPLEEVERGREENQUERY_STARTQUERY_OFFSET))();
	}

	static ::HoudiniEngineUnity::HEU_HoudiniAsset* QueryHoudiniAsset(::UnityEngine::GameObject* a1)
	{
		return ((::HoudiniEngineUnity::HEU_HoudiniAsset*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HEU_EXAMPLEEVERGREENQUERY_QUERYHOUDINIASSET_OFFSET))(a1);
	}

	static ::System::Void CookAsset(::HoudiniEngineUnity::HEU_HoudiniAsset* a1)
	{
		return ((::System::Void(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HEU_EXAMPLEEVERGREENQUERY_COOKASSET_OFFSET))(a1);
	}

	static ::System::Void ChangeParmsAndCook(::HoudiniEngineUnity::HEU_HoudiniAsset* a1)
	{
		return ((::System::Void(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HEU_EXAMPLEEVERGREENQUERY_CHANGEPARMSANDCOOK_OFFSET))(a1);
	}

	static ::System::Void QueryObjects(::HoudiniEngineUnity::HEU_HoudiniAsset* a1)
	{
		return ((::System::Void(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HEU_EXAMPLEEVERGREENQUERY_QUERYOBJECTS_OFFSET))(a1);
	}

	static ::System::Void QueryGeoParts(::HoudiniEngineUnity::HEU_SessionBase* a1, ::HoudiniEngineUnity::HAPI_GeoInfo& a2)
	{
		return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_GeoInfo&))((::PBYTE)hIl2Cpp + HEU_EXAMPLEEVERGREENQUERY_QUERYGEOPARTS_OFFSET))(a1, a2);
	}

	static ::System::Void QueryPartAttributeByOwner(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::HoudiniEngineUnity::HAPI_AttributeOwner a4, ::System::Int32 a5, ::System::Text::StringBuilder* a6)
	{
		return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HAPI_AttributeOwner, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + HEU_EXAMPLEEVERGREENQUERY_QUERYPARTATTRIBUTEBYOWNER_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void QueryAttributeByStorageType(::HoudiniEngineUnity::HEU_SessionBase* a1, ::System::Int32 a2, ::System::Int32 a3, ::HoudiniEngineUnity::HAPI_AttributeInfo& a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HAPI_AttributeInfo&, ::System::String*))((::PBYTE)hIl2Cpp + HEU_EXAMPLEEVERGREENQUERY_QUERYATTRIBUTEBYSTORAGETYPE_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void QueryAttribute(::HoudiniEngineUnity::HEU_HoudiniAsset* a1, ::System::String* a2, ::System::String* a3, ::System::Int32 a4, ::System::String* a5)
	{
		return ((::System::Void(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + HEU_EXAMPLEEVERGREENQUERY_QUERYATTRIBUTE_OFFSET))(a1, a2, a3, a4, a5);
	}
};
