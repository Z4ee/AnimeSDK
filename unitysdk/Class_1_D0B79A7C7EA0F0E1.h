#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectPoolUsage.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class OnPreloadOperationDelegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_D0B79A7C7EA0F0E1_METHOD_1_6303F749F6D26213_OFFSET UNITYSDK_OFFSET(0xA8D3CD0)
#define CLASS_1_D0B79A7C7EA0F0E1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xA8D3C40)
#define CLASS_1_D0B79A7C7EA0F0E1_METHOD_1_9E4AEA2423BD95F5_OFFSET UNITYSDK_OFFSET(0xA8D42A0)
#define CLASS_1_D0B79A7C7EA0F0E1_METHOD_1_AD877BA2B7553E4B_OFFSET UNITYSDK_OFFSET(0xA8D3A70)
#define CLASS_1_D0B79A7C7EA0F0E1_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0xA8D44B0)
#define CLASS_1_D0B79A7C7EA0F0E1_METHOD_1_E5D6139DEACCF9E3_OFFSET UNITYSDK_OFFSET(0xA8D3F70)
#define CLASS_1_D0B79A7C7EA0F0E1__CTOR_OFFSET UNITYSDK_OFFSET(0xA8D3960)

inline static constexpr unsigned int Class_1_D0B79A7C7EA0F0E1_TypeDefinitionIndex = 55791;

class Class_1_D0B79A7C7EA0F0E1 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0B79A7C7EA0F0E1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AD877BA2B7553E4B(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D0B79A7C7EA0F0E1_METHOD_1_AD877BA2B7553E4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0B79A7C7EA0F0E1_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_6303F749F6D26213(::System::Boolean a1, ::RPG::Client::GameObjectPoolUsage a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + CLASS_1_D0B79A7C7EA0F0E1_METHOD_1_6303F749F6D26213_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E5D6139DEACCF9E3(::RPG::Client::OnPreloadOperationDelegate* a1, ::RPG::Client::GameObjectPoolUsage a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OnPreloadOperationDelegate*, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + CLASS_1_D0B79A7C7EA0F0E1_METHOD_1_E5D6139DEACCF9E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9E4AEA2423BD95F5(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D0B79A7C7EA0F0E1_METHOD_1_9E4AEA2423BD95F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D0B79A7C7EA0F0E1_METHOD_1_B9A97467188E4B69_OFFSET))(this);
	}
};
