#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define RPG_CLIENT_TSCRENDERERMATERIALREFDATA_METHOD_1_0CDD9FD39783A4B5_OFFSET UNITYSDK_OFFSET(0x1B401220)
#define RPG_CLIENT_TSCRENDERERMATERIALREFDATA_METHOD_1_45D00B3FDD3C2A62_OFFSET UNITYSDK_OFFSET(0x1B400EB0)
#define RPG_CLIENT_TSCRENDERERMATERIALREFDATA_METHOD_1_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x1B4011C0)
#define RPG_CLIENT_TSCRENDERERMATERIALREFDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B400DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int TSCRendererMaterialRefData_TypeDefinitionIndex = 70172;

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

		::System::Void Method_1_45D00B3FDD3C2A62(::System::Collections::Generic::List_1<::System::String*>*& a1, ::System::Collections::Generic::List_1<::System::Action_1<::UnityEngine::Material*>*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Action_1<::UnityEngine::Material*>*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_TSCRENDERERMATERIALREFDATA_METHOD_1_45D00B3FDD3C2A62_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_0CDD9FD39783A4B5(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TSCRENDERERMATERIALREFDATA_METHOD_1_0CDD9FD39783A4B5_OFFSET))(this, a1);
		}

		::System::Void Method_1_9F8F6511E8EF1235()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TSCRENDERERMATERIALREFDATA_METHOD_1_9F8F6511E8EF1235_OFFSET))(this);
		}
	};
}
