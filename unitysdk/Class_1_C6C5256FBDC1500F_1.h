#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1152250B69783505;
namespace Entitas { class IContext; }

#define CLASS_1_C6C5256FBDC1500F_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x18B90F00)
#define CLASS_1_C6C5256FBDC1500F_1_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x18B91010)
#define CLASS_1_C6C5256FBDC1500F_1_GET_PINGPONGGAME_OFFSET UNITYSDK_OFFSET(0x18B91000)
#define CLASS_1_C6C5256FBDC1500F_1_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x18B90EB0)
#define CLASS_1_C6C5256FBDC1500F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18B90DB0)

inline static constexpr unsigned int Class_1_C6C5256FBDC1500F_1_TypeDefinitionIndex = 39424;

class Class_1_C6C5256FBDC1500F_1 : public ::System::Object
{
public:
	::Class_2_1152250B69783505* _pingPongGame_k__BackingField; // 0x10
	::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C5256FBDC1500F_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C5256FBDC1500F_1_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C5256FBDC1500F_1_METHOD_1_E693A0026D178D8E_OFFSET))(this);
	}

	::Class_2_1152250B69783505* get_pingPongGame()
	{
		return ((::Class_2_1152250B69783505*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C5256FBDC1500F_1_GET_PINGPONGGAME_OFFSET))(this);
	}

	::Il2CppArray<::Entitas::IContext*>* get_allContexts()
	{
		return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6C5256FBDC1500F_1_GET_ALLCONTEXTS_OFFSET))(this);
	}
};
