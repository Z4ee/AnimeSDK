#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectPoolUsage.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class OnPreloadOperationDelegate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_00E76D0E78638101_METHOD_1_561EF82680627FF8_OFFSET UNITYSDK_OFFSET(0x15EBDB60)
#define CLASS_1_00E76D0E78638101_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x15EBDAD0)
#define CLASS_1_00E76D0E78638101_METHOD_1_9E4AEA2423BD95F5_OFFSET UNITYSDK_OFFSET(0x15EBE160)
#define CLASS_1_00E76D0E78638101_METHOD_1_AD877BA2B7553E4B_OFFSET UNITYSDK_OFFSET(0x15EBD900)
#define CLASS_1_00E76D0E78638101_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x15EBE3A0)
#define CLASS_1_00E76D0E78638101_METHOD_1_E5D6139DEACCF9E3_OFFSET UNITYSDK_OFFSET(0x15EBDE30)
#define CLASS_1_00E76D0E78638101__CTOR_OFFSET UNITYSDK_OFFSET(0x15EBD7F0)

inline static constexpr unsigned int Class_1_00E76D0E78638101_TypeDefinitionIndex = 57028;

class Class_1_00E76D0E78638101 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00E76D0E78638101__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AD877BA2B7553E4B(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_00E76D0E78638101_METHOD_1_AD877BA2B7553E4B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00E76D0E78638101_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_561EF82680627FF8(::System::Boolean a1, ::RPG::Client::GameObjectPoolUsage a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + CLASS_1_00E76D0E78638101_METHOD_1_561EF82680627FF8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E5D6139DEACCF9E3(::RPG::Client::OnPreloadOperationDelegate* a1, ::RPG::Client::GameObjectPoolUsage a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::OnPreloadOperationDelegate*, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + CLASS_1_00E76D0E78638101_METHOD_1_E5D6139DEACCF9E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9E4AEA2423BD95F5(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_00E76D0E78638101_METHOD_1_9E4AEA2423BD95F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00E76D0E78638101_METHOD_1_B9A97467188E4B69_OFFSET))(this);
	}
};
