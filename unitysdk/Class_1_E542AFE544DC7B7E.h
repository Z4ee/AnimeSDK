#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_EBB880A8D2C9B0D4;
namespace RPG::Client { class MapDef; }
namespace RPG::Client::NavMap { class MapData; }
namespace RPG::GameCore { class LittleGameNavMapIconConfig; }
namespace System { class String; }

#define CLASS_1_E542AFE544DC7B7E_METHOD_1_1BBB1B041EEDA2D5_OFFSET UNITYSDK_OFFSET(0x12E854A0)
#define CLASS_1_E542AFE544DC7B7E_METHOD_1_4771E2BCC497DFBE_OFFSET UNITYSDK_OFFSET(0x12E85B90)
#define CLASS_1_E542AFE544DC7B7E_METHOD_1_616BE1BFD7797108_OFFSET UNITYSDK_OFFSET(0x12E85920)
#define CLASS_1_E542AFE544DC7B7E_METHOD_1_676723D10EAD0982_OFFSET UNITYSDK_OFFSET(0x12E85760)
#define CLASS_1_E542AFE544DC7B7E_METHOD_1_DD0848EFBC8B2BAB_OFFSET UNITYSDK_OFFSET(0x12E85660)

inline static constexpr unsigned int Class_1_E542AFE544DC7B7E_TypeDefinitionIndex = 74548;

class Class_1_E542AFE544DC7B7E : public ::System::Object
{
public:
	// static const ::System::String* BAHLDFMIJFG; // 0x0

	static ::System::Boolean Method_1_1BBB1B041EEDA2D5(::RPG::Client::NavMap::MapData* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::Struct_2_EAC1BB0F093534A5& a5)
	{
		return ((::System::Boolean(*)(::RPG::Client::NavMap::MapData*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::Struct_2_EAC1BB0F093534A5&))((::PBYTE)hIl2Cpp + CLASS_1_E542AFE544DC7B7E_METHOD_1_1BBB1B041EEDA2D5_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_DD0848EFBC8B2BAB(::RPG::Client::NavMap::MapData* a1, ::Class_1_EBB880A8D2C9B0D4* a2, ::System::UInt32 a3, ::System::String* a4, ::Il2CppArray<::System::Int16>* a5)
	{
		return ((::System::Boolean(*)(::RPG::Client::NavMap::MapData*, ::Class_1_EBB880A8D2C9B0D4*, ::System::UInt32, ::System::String*, ::Il2CppArray<::System::Int16>*))((::PBYTE)hIl2Cpp + CLASS_1_E542AFE544DC7B7E_METHOD_1_DD0848EFBC8B2BAB_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_676723D10EAD0982(::RPG::Client::NavMap::MapData* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::GameCore::LittleGameNavMapIconConfig*& a5)
	{
		return ((::System::Boolean(*)(::RPG::Client::NavMap::MapData*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameNavMapIconConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_E542AFE544DC7B7E_METHOD_1_676723D10EAD0982_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Boolean Method_1_616BE1BFD7797108(::RPG::Client::MapDef* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4, ::RPG::GameCore::LittleGameNavMapIconConfig*& a5)
	{
		return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::LittleGameNavMapIconConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_E542AFE544DC7B7E_METHOD_1_616BE1BFD7797108_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Quaternion Method_1_4771E2BCC497DFBE(::Struct_2_EAC1BB0F093534A5 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::Struct_2_EAC1BB0F093534A5))((::PBYTE)hIl2Cpp + CLASS_1_E542AFE544DC7B7E_METHOD_1_4771E2BCC497DFBE_OFFSET))(a1);
	}
};
