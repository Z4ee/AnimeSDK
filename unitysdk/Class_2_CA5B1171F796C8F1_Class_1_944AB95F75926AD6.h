#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2C2DA62D5BBB20B1_PreloadType.h"
#include "unitysdk/System/Object.h"

namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace RPG::Client { class BattleAssetPreload_CharacterPreloadGroupBase; }
namespace System { class String; }

#define CLASS_2_CA5B1171F796C8F1_CLASS_1_944AB95F75926AD6_CLEAR_OFFSET UNITYSDK_OFFSET(0x1193FE70)
#define CLASS_2_CA5B1171F796C8F1_CLASS_1_944AB95F75926AD6_METHOD_1_6CEB13E5CE1E4BCD_OFFSET UNITYSDK_OFFSET(0x1193EB60)
#define CLASS_2_CA5B1171F796C8F1_CLASS_1_944AB95F75926AD6_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0x1193F0A0)
#define CLASS_2_CA5B1171F796C8F1_CLASS_1_944AB95F75926AD6__CTOR_OFFSET UNITYSDK_OFFSET(0x1193FF50)

inline static constexpr unsigned int Class_2_CA5B1171F796C8F1_Class_1_944AB95F75926AD6_TypeDefinitionIndex = 55087;

class Class_2_CA5B1171F796C8F1_Class_1_944AB95F75926AD6 : public ::System::Object
{
public:
	::Collections::Pooled::PooledDictionary_2<::System::String*, ::Class_1_2C2DA62D5BBB20B1_PreloadType>* Field_1_2; // 0x10
	::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* Field_1_0; // 0x18
	::Collections::Pooled::PooledDictionary_2<::System::String*, ::Class_1_2C2DA62D5BBB20B1_PreloadType>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5B1171F796C8F1_CLASS_1_944AB95F75926AD6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5B1171F796C8F1_CLASS_1_944AB95F75926AD6_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_6CEB13E5CE1E4BCD(::System::String* a1, ::Class_1_2C2DA62D5BBB20B1_PreloadType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_2C2DA62D5BBB20B1_PreloadType))((::PBYTE)hIl2Cpp + CLASS_2_CA5B1171F796C8F1_CLASS_1_944AB95F75926AD6_METHOD_1_6CEB13E5CE1E4BCD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA5B1171F796C8F1_CLASS_1_944AB95F75926AD6_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
	}
};
