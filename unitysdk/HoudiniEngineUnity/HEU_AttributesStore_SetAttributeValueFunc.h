#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace HoudiniEngineUnity { class HEU_AttributeData; }
namespace HoudiniEngineUnity { class HEU_ToolsInfo; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEVALUEFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x840FA50)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEVALUEFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x840FAF0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEVALUEFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x840D9B0)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEVALUEFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x840F7F0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AttributesStore_SetAttributeValueFunc_TypeDefinitionIndex = 37651;

	class HEU_AttributesStore_SetAttributeValueFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEVALUEFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::System::Int32 targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, ::System::Int32 sourceIndex, ::System::Single factor)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEVALUEFUNC_INVOKE_OFFSET))(this, attributeData, targetIndex, sourceTools, sourceIndex, factor);
		}

		::System::IAsyncResult* BeginInvoke(::HoudiniEngineUnity::HEU_AttributeData* attributeData, ::System::Int32 targetIndex, ::HoudiniEngineUnity::HEU_ToolsInfo* sourceTools, ::System::Int32 sourceIndex, ::System::Single factor, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEVALUEFUNC_BEGININVOKE_OFFSET))(this, attributeData, targetIndex, sourceTools, sourceIndex, factor, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_SETATTRIBUTEVALUEFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
