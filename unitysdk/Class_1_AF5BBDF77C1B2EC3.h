#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftDirectionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_AF5BBDF77C1B2EC3_METHOD_1_16AE594F07FD715B_1_OFFSET UNITYSDK_OFFSET(0x1C546450)
#define CLASS_1_AF5BBDF77C1B2EC3_METHOD_1_16AE594F07FD715B_OFFSET UNITYSDK_OFFSET(0x1C546390)
#define CLASS_1_AF5BBDF77C1B2EC3_METHOD_1_5FC6714894692FF9_OFFSET UNITYSDK_OFFSET(0x1C546310)
#define CLASS_1_AF5BBDF77C1B2EC3_METHOD_1_EFDD8C763E18B501_OFFSET UNITYSDK_OFFSET(0x1C546270)
#define CLASS_1_AF5BBDF77C1B2EC3__CTOR_OFFSET UNITYSDK_OFFSET(0x1C546510)

inline static constexpr unsigned int Class_1_AF5BBDF77C1B2EC3_TypeDefinitionIndex = 41655;

class Class_1_AF5BBDF77C1B2EC3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF5BBDF77C1B2EC3__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftDirectionType>* Method_1_EFDD8C763E18B501()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftDirectionType>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AF5BBDF77C1B2EC3_METHOD_1_EFDD8C763E18B501_OFFSET))();
	}

	static ::UnityEngine::Vector2Int Method_1_5FC6714894692FF9(::RPG::Client::MechCraft::MechCraftDirectionType a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector2Int(*)(::RPG::Client::MechCraft::MechCraftDirectionType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AF5BBDF77C1B2EC3_METHOD_1_5FC6714894692FF9_OFFSET))(a1, a2);
	}

	static ::System::Int32 Method_1_16AE594F07FD715B(::RPG::Client::MechCraft::MechCraftDirectionType a1)
	{
		return ((::System::Int32(*)(::RPG::Client::MechCraft::MechCraftDirectionType))((::PBYTE)hIl2Cpp + CLASS_1_AF5BBDF77C1B2EC3_METHOD_1_16AE594F07FD715B_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_16AE594F07FD715B_1(::RPG::Client::MechCraft::MechCraftDirectionType a1)
	{
		return ((::System::Int32(*)(::RPG::Client::MechCraft::MechCraftDirectionType))((::PBYTE)hIl2Cpp + CLASS_1_AF5BBDF77C1B2EC3_METHOD_1_16AE594F07FD715B_1_OFFSET))(a1);
	}
};
