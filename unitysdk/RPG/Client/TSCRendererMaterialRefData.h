#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_TSCRENDERERMATERIALREFDATA_METHOD_1_30FA428D12D403DC_OFFSET UNITYSDK_OFFSET(0xB2783E0)
#define RPG_CLIENT_TSCRENDERERMATERIALREFDATA_METHOD_1_BBA149001B495317_OFFSET UNITYSDK_OFFSET(0xB278140)
#define RPG_CLIENT_TSCRENDERERMATERIALREFDATA_METHOD_1_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0xB278380)
#define RPG_CLIENT_TSCRENDERERMATERIALREFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB278060)

namespace RPG::Client
{
	inline static constexpr unsigned int TSCRendererMaterialRefData_TypeDefinitionIndex = 64726;

	class TSCRendererMaterialRefData : public ::System::Object
	{
	public:
		::UnityEngine::MeshRenderer* TargetRenderer; // 0x10
		::System::Int32 TargetMaterailID; // 0x18
		::System::String* MatPath; // 0x20
		::UnityEngine::Material* _MatRes; // 0x28

		::System::Void _ctor(::UnityEngine::MeshRenderer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshRenderer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TSCRENDERERMATERIALREFDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_BBA149001B495317(::System::Collections::Generic::List_1<::System::String*>*& a1, ::System::Collections::Generic::List_1<::System::Action_1<::UnityEngine::Material*>*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Action_1<::UnityEngine::Material*>*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TSCRENDERERMATERIALREFDATA_METHOD_1_BBA149001B495317_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_30FA428D12D403DC(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TSCRENDERERMATERIALREFDATA_METHOD_1_30FA428D12D403DC_OFFSET))(this, a1);
		}

		::System::Void Method_1_F5B4708E7805566C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TSCRENDERERMATERIALREFDATA_METHOD_1_F5B4708E7805566C_OFFSET))(this);
		}
	};
}
