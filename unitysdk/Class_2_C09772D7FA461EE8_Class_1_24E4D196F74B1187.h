#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2C2DA62D5BBB20B1_PreloadType.h"
#include "unitysdk/System/Object.h"

namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace RPG::Client { class BattleAssetPreload_CharacterPreloadGroupBase; }
namespace System { class String; }

#define CLASS_2_C09772D7FA461EE8_CLASS_1_24E4D196F74B1187_CLEAR_OFFSET UNITYSDK_OFFSET(0xB7971D0)
#define CLASS_2_C09772D7FA461EE8_CLASS_1_24E4D196F74B1187_METHOD_1_6CEB13E5CE1E4BCD_OFFSET UNITYSDK_OFFSET(0xB796460)
#define CLASS_2_C09772D7FA461EE8_CLASS_1_24E4D196F74B1187_METHOD_1_CD8EB704BDED69B6_OFFSET UNITYSDK_OFFSET(0xB796A70)
#define CLASS_2_C09772D7FA461EE8_CLASS_1_24E4D196F74B1187__CTOR_OFFSET UNITYSDK_OFFSET(0xB7972E0)

inline static constexpr unsigned int Class_2_C09772D7FA461EE8_Class_1_24E4D196F74B1187_TypeDefinitionIndex = 59850;

class Class_2_C09772D7FA461EE8_Class_1_24E4D196F74B1187 : public ::System::Object
{
public:
	::Collections::Pooled::PooledDictionary_2<::System::String*, ::Class_1_2C2DA62D5BBB20B1_PreloadType>* GLIKDELPEGH; // 0x10
	::Collections::Pooled::PooledDictionary_2<::System::String*, ::Class_1_2C2DA62D5BBB20B1_PreloadType>* JAOJGPCKENL; // 0x18
	::RPG::Client::BattleAssetPreload_CharacterPreloadGroupBase* DBALOLNOLGL; // 0x20
	::System::Boolean KNEJHCOHLNN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C09772D7FA461EE8_CLASS_1_24E4D196F74B1187__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C09772D7FA461EE8_CLASS_1_24E4D196F74B1187_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_6CEB13E5CE1E4BCD(::System::String* a1, ::Class_1_2C2DA62D5BBB20B1_PreloadType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_2C2DA62D5BBB20B1_PreloadType))((::PBYTE)hIl2Cpp + CLASS_2_C09772D7FA461EE8_CLASS_1_24E4D196F74B1187_METHOD_1_6CEB13E5CE1E4BCD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CD8EB704BDED69B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C09772D7FA461EE8_CLASS_1_24E4D196F74B1187_METHOD_1_CD8EB704BDED69B6_OFFSET))(this);
	}
};
