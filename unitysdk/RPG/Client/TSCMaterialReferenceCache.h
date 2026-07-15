#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TSCRendererMaterialRefData; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_TSCMATERIALREFERENCECACHE_METHOD_1_5F2883F9130D2889_OFFSET UNITYSDK_OFFSET(0x1975FCF0)
#define RPG_CLIENT_TSCMATERIALREFERENCECACHE_METHOD_1_D4FAD9DF8A6E1E94_OFFSET UNITYSDK_OFFSET(0x1975FFD0)
#define RPG_CLIENT_TSCMATERIALREFERENCECACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1975FB20)

namespace RPG::Client
{
	inline static constexpr unsigned int TSCMaterialReferenceCache_TypeDefinitionIndex = 67066;

	class TSCMaterialReferenceCache : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TSCRendererMaterialRefData*>* Datas; // 0x10

		::System::Void _ctor(::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TSCMATERIALREFERENCECACHE__CTOR_OFFSET))(this, a1);
		}

		::System::Void Method_1_5F2883F9130D2889(::System::Collections::Generic::List_1<::System::String*>*& a1, ::System::Collections::Generic::List_1<::System::Action_1<::UnityEngine::Material*>*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Action_1<::UnityEngine::Material*>*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TSCMATERIALREFERENCECACHE_METHOD_1_5F2883F9130D2889_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_D4FAD9DF8A6E1E94()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TSCMATERIALREFERENCECACHE_METHOD_1_D4FAD9DF8A6E1E94_OFFSET))(this);
		}
	};
}
