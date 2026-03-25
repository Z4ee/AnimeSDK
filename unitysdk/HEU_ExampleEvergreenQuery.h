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

#define HEU_EXAMPLEEVERGREENQUERY_CHANGEPARMSANDCOOK_OFFSET UNITYSDK_OFFSET(0x83E4EF0)
#define HEU_EXAMPLEEVERGREENQUERY_COOKASSET_OFFSET UNITYSDK_OFFSET(0x83E4ED0)
#define HEU_EXAMPLEEVERGREENQUERY_QUERYATTRIBUTEBYSTORAGETYPE_OFFSET UNITYSDK_OFFSET(0x83E68A0)
#define HEU_EXAMPLEEVERGREENQUERY_QUERYATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x83E56B0)
#define HEU_EXAMPLEEVERGREENQUERY_QUERYGEOPARTS_OFFSET UNITYSDK_OFFSET(0x83E5C50)
#define HEU_EXAMPLEEVERGREENQUERY_QUERYHOUDINIASSET_OFFSET UNITYSDK_OFFSET(0x83E4C70)
#define HEU_EXAMPLEEVERGREENQUERY_QUERYOBJECTS_OFFSET UNITYSDK_OFFSET(0x83E5300)
#define HEU_EXAMPLEEVERGREENQUERY_QUERYPARTATTRIBUTEBYOWNER_OFFSET UNITYSDK_OFFSET(0x83E63E0)
#define HEU_EXAMPLEEVERGREENQUERY_STARTQUERY_OFFSET UNITYSDK_OFFSET(0x83E4A60)
#define HEU_EXAMPLEEVERGREENQUERY__CTOR_OFFSET UNITYSDK_OFFSET(0x83E6AC0)

inline static constexpr unsigned int HEU_ExampleEvergreenQuery_TypeDefinitionIndex = 35087;

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

	static ::HoudiniEngineUnity::HEU_HoudiniAsset* QueryHoudiniAsset(::UnityEngine::GameObject* rootGO)
	{
		return ((::HoudiniEngineUnity::HEU_HoudiniAsset*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HEU_EXAMPLEEVERGREENQUERY_QUERYHOUDINIASSET_OFFSET))(rootGO);
	}

	static ::System::Void CookAsset(::HoudiniEngineUnity::HEU_HoudiniAsset* houdiniAsset)
	{
		return ((::System::Void(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HEU_EXAMPLEEVERGREENQUERY_COOKASSET_OFFSET))(houdiniAsset);
	}

	static ::System::Void ChangeParmsAndCook(::HoudiniEngineUnity::HEU_HoudiniAsset* houdiniAsset)
	{
		return ((::System::Void(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HEU_EXAMPLEEVERGREENQUERY_CHANGEPARMSANDCOOK_OFFSET))(houdiniAsset);
	}

	static ::System::Void QueryObjects(::HoudiniEngineUnity::HEU_HoudiniAsset* houdiniAsset)
	{
		return ((::System::Void(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*))((::PBYTE)hIl2Cpp + HEU_EXAMPLEEVERGREENQUERY_QUERYOBJECTS_OFFSET))(houdiniAsset);
	}

	static ::System::Void QueryGeoParts(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_GeoInfo& geoInfo)
	{
		return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HAPI_GeoInfo&))((::PBYTE)hIl2Cpp + HEU_EXAMPLEEVERGREENQUERY_QUERYGEOPARTS_OFFSET))(session, geoInfo);
	}

	static ::System::Void QueryPartAttributeByOwner(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::HoudiniEngineUnity::HAPI_AttributeOwner owner, ::System::Int32 count, ::System::Text::StringBuilder* sb)
	{
		return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HAPI_AttributeOwner, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + HEU_EXAMPLEEVERGREENQUERY_QUERYPARTATTRIBUTEBYOWNER_OFFSET))(session, geoID, partID, owner, count, sb);
	}

	static ::System::Void QueryAttributeByStorageType(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::Int32 geoID, ::System::Int32 partID, ::HoudiniEngineUnity::HAPI_AttributeInfo& attrInfo, ::System::String* attrName)
	{
		return ((::System::Void(*)(::HoudiniEngineUnity::HEU_SessionBase*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::HAPI_AttributeInfo&, ::System::String*))((::PBYTE)hIl2Cpp + HEU_EXAMPLEEVERGREENQUERY_QUERYATTRIBUTEBYSTORAGETYPE_OFFSET))(session, geoID, partID, attrInfo, attrName);
	}

	static ::System::Void QueryAttribute(::HoudiniEngineUnity::HEU_HoudiniAsset* houdiniAsset, ::System::String* objName, ::System::String* geoName, ::System::Int32 partID, ::System::String* attrName)
	{
		return ((::System::Void(*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::System::String*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + HEU_EXAMPLEEVERGREENQUERY_QUERYATTRIBUTE_OFFSET))(houdiniAsset, objName, geoName, partID, attrName);
	}
};
