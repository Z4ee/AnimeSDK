#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1152250B69783505;
namespace Entitas { class IContext; }

#define CLASS_1_B4357A1C72BABC6B_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x1677C2A0)
#define CLASS_1_B4357A1C72BABC6B_1_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1677C3F0)
#define CLASS_1_B4357A1C72BABC6B_1_GET_PINGPONGGAME_OFFSET UNITYSDK_OFFSET(0x1677C3E0)
#define CLASS_1_B4357A1C72BABC6B_1_METHOD_1_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x1677C250)
#define CLASS_1_B4357A1C72BABC6B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1677C130)

inline static constexpr unsigned int Class_1_B4357A1C72BABC6B_1_TypeDefinitionIndex = 32867;

class Class_1_B4357A1C72BABC6B_1 : public ::System::Object
{
public:
	::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x10
	::Class_2_1152250B69783505* _pingPongGame_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4357A1C72BABC6B_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4357A1C72BABC6B_1_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4357A1C72BABC6B_1_METHOD_1_8F7825DAFFB9B517_OFFSET))(this);
	}

	::Class_2_1152250B69783505* get_pingPongGame()
	{
		return ((::Class_2_1152250B69783505*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4357A1C72BABC6B_1_GET_PINGPONGGAME_OFFSET))(this);
	}

	::Il2CppArray<::Entitas::IContext*>* get_allContexts()
	{
		return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4357A1C72BABC6B_1_GET_ALLCONTEXTS_OFFSET))(this);
	}
};
