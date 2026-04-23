#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CUSTOMRP_SHAREDOBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18180B50)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int SharedObject_TypeDefinitionIndex = 35256;

	class SharedObject : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_TmpRenders()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(SharedObject_TypeDefinitionIndex)->GetStaticField(0xEE0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_TmpMats()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(SharedObject_TypeDefinitionIndex)->GetStaticField(0xEE8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Light*>** StaticGet_TmpLights()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Light*>**)Il2CppClass::FromTypeDefinitionIndex(SharedObject_TypeDefinitionIndex)->GetStaticField(0xEF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHAREDOBJECT__CCTOR_OFFSET))();
		}
	};
}
