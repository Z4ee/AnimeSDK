#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PropInstanceMatConfigBase.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_METHOD_2_1ECFB1C19B577E7A_OFFSET UNITYSDK_OFFSET(0xDD6F240)
#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_METHOD_2_2313F2256728F710_OFFSET UNITYSDK_OFFSET(0xDD6F1C0)
#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0xDD6F0A0)
#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_METHOD_2_8DF68C4BE895E6C3_OFFSET UNITYSDK_OFFSET(0xDD6EA30)
#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG_METHOD_2_90D369AA14AFEE1C_OFFSET UNITYSDK_OFFSET(0xDD6F120)
#define RPG_CLIENT_PROPINSTANCEMATFLOATCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xDD6F2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int PropInstanceMatFloatConfig_TypeDefinitionIndex = 70716;

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
	};
}
