#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_PROPINSTANCEMATCONFIGBASE_METHOD_1_42314D937731DCE7_OFFSET UNITYSDK_OFFSET(0xC665030)
#define RPG_CLIENT_PROPINSTANCEMATCONFIGBASE_METHOD_1_5620A498479AEA0C_OFFSET UNITYSDK_OFFSET(0xC664FE0)
#define RPG_CLIENT_PROPINSTANCEMATCONFIGBASE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC664A10)
#define RPG_CLIENT_PROPINSTANCEMATCONFIGBASE_METHOD_1_F1E2CFDA70BD4DCE_OFFSET UNITYSDK_OFFSET(0xC664F90)
#define RPG_CLIENT_PROPINSTANCEMATCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xC665080)

namespace RPG::Client
{
	inline static constexpr unsigned int PropInstanceMatConfigBase_TypeDefinitionIndex = 66167;

	class PropInstanceMatConfigBase : public ::System::Object
	{
	public:
		::System::String* PropertyName; // 0x10
		::System::Int32 _PropertyID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATCONFIGBASE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATCONFIGBASE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_F1E2CFDA70BD4DCE(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATCONFIGBASE_METHOD_1_F1E2CFDA70BD4DCE_OFFSET))(this, a1);
		}

		::System::Void Method_1_5620A498479AEA0C(::Unity::Collections::NativeArray_1<::System::Single> a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATCONFIGBASE_METHOD_1_5620A498479AEA0C_OFFSET))(this, a1);
		}

		::System::Void Method_1_42314D937731DCE7(::Il2CppArray<::UnityEngine::Color>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATCONFIGBASE_METHOD_1_42314D937731DCE7_OFFSET))(this, a1);
		}
	};
}
