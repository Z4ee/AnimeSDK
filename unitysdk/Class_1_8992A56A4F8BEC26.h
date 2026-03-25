#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/ViewLoadModePriorityLevel.h"
#include "unitysdk/RPG/GameCore/FiveDimLoadMode.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }

#define CLASS_1_8992A56A4F8BEC26_CLEAR_OFFSET UNITYSDK_OFFSET(0x169DE240)
#define CLASS_1_8992A56A4F8BEC26_METHOD_1_9DC11DF2AB61C577_OFFSET UNITYSDK_OFFSET(0x169DDFE0)
#define CLASS_1_8992A56A4F8BEC26_METHOD_1_A3ABFEB5E06AF4F2_OFFSET UNITYSDK_OFFSET(0x169DE1D0)
#define CLASS_1_8992A56A4F8BEC26_METHOD_1_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x169DE090)
#define CLASS_1_8992A56A4F8BEC26_ONALLOC_OFFSET UNITYSDK_OFFSET(0x169DE2A0)
#define CLASS_1_8992A56A4F8BEC26_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x169DE410)
#define CLASS_1_8992A56A4F8BEC26__CTOR_OFFSET UNITYSDK_OFFSET(0x169DE450)

inline static constexpr unsigned int Class_1_8992A56A4F8BEC26_TypeDefinitionIndex = 33368;

class Class_1_8992A56A4F8BEC26 : public ::System::Object
{
public:
	// static const ::RPG::GameCore::FiveDimLoadMode Field_1_1; // 0x0
	::RPG::PoolDictionary_2<::RPG::Client::LittleGame::FiveDim::ViewLoadModePriorityLevel, ::RPG::GameCore::FiveDimLoadMode>* Field_1_2; // 0x10
	::System::Boolean Field_1_3; // 0x18
	::RPG::GameCore::FiveDimLoadMode Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8992A56A4F8BEC26__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9DC11DF2AB61C577(::RPG::Client::LittleGame::FiveDim::ViewLoadModePriorityLevel a1, ::RPG::GameCore::FiveDimLoadMode a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ViewLoadModePriorityLevel, ::RPG::GameCore::FiveDimLoadMode))((::PBYTE)hIl2Cpp + CLASS_1_8992A56A4F8BEC26_METHOD_1_9DC11DF2AB61C577_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A3ABFEB5E06AF4F2(::RPG::Client::LittleGame::FiveDim::ViewLoadModePriorityLevel a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::ViewLoadModePriorityLevel))((::PBYTE)hIl2Cpp + CLASS_1_8992A56A4F8BEC26_METHOD_1_A3ABFEB5E06AF4F2_OFFSET))(this, a1);
	}

	::System::Void Method_1_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8992A56A4F8BEC26_METHOD_1_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8992A56A4F8BEC26_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8992A56A4F8BEC26_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8992A56A4F8BEC26_ONRECYCLE_OFFSET))(this);
	}
};
