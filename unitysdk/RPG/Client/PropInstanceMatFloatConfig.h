#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PropInstanceMatConfigBase.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_METHOD_2_1ECFB1C19B577E7A_OFFSET UNITYSDK_OFFSET(0xC665230)
#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_METHOD_2_2313F2256728F710_OFFSET UNITYSDK_OFFSET(0xC6651B0)
#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0xC665090)
#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_METHOD_2_8DF68C4BE895E6C3_OFFSET UNITYSDK_OFFSET(0xC663E10)
#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_METHOD_2_90D369AA14AFEE1C_OFFSET UNITYSDK_OFFSET(0xC665110)
#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_METHOD_2_BF5FC31AA577C76F_OFFSET UNITYSDK_OFFSET(0xC665320)
#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_METHOD_2_F1E2CFDA70BD4DCE_OFFSET UNITYSDK_OFFSET(0xC6652D0)
#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xC6652C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PropInstanceMatFloatConfig_TypeDefinitionIndex = 66168;

	class PropInstanceMatFloatConfig : public ::RPG::Client::PropInstanceMatConfigBase
	{
	public:
		::Il2CppArray<::System::Single>* PropertyValues; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void Method_2_8DF68C4BE895E6C3(::UnityEngine::MaterialPropertyBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_METHOD_2_8DF68C4BE895E6C3_OFFSET))(this, a1);
		}

		::System::Void Method_2_7033EFB970A18315()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_METHOD_2_7033EFB970A18315_OFFSET))(this);
		}

		::System::Void Method_2_90D369AA14AFEE1C(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_METHOD_2_90D369AA14AFEE1C_OFFSET))(this, a1);
		}

		::System::Void Method_2_2313F2256728F710(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_METHOD_2_2313F2256728F710_OFFSET))(this, a1);
		}

		::System::Void Method_2_1ECFB1C19B577E7A(::Unity::Collections::NativeArray_1<::System::Single> a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_METHOD_2_1ECFB1C19B577E7A_OFFSET))(this, a1);
		}

		::System::Void Method_2_F1E2CFDA70BD4DCE(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_METHOD_2_F1E2CFDA70BD4DCE_OFFSET))(this, a1);
		}

		::System::Void Method_2_BF5FC31AA577C76F(::Unity::Collections::NativeArray_1<::System::Single> a1)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_METHOD_2_BF5FC31AA577C76F_OFFSET))(this, a1);
		}
	};
}
