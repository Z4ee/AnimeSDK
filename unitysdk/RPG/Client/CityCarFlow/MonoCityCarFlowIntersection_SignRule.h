#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CityCarFlow/MonoCityCarFlowIntersection_SignRuleData.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWINTERSECTION_SIGNRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBFE270)

namespace RPG::Client::CityCarFlow
{
	inline static constexpr unsigned int MonoCityCarFlowIntersection_SignRule_TypeDefinitionIndex = 80849;

	class MonoCityCarFlowIntersection_SignRule : public ::System::Object
	{
	public:
		::System::String* Comment; // 0x10
		::Il2CppArray<::RPG::Client::CityCarFlow::MonoCityCarFlowIntersection_SignRuleData>* Datas; // 0x18
		::Il2CppArray<::System::String*>* IntersectionNames; // 0x20
		::Il2CppArray<::System::String*>* PedestrianIntersectionNames; // 0x28
		::System::String* DetectPedestrianIntersectionName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CITYCARFLOW_MONOCITYCARFLOWINTERSECTION_SIGNRULE__CTOR_OFFSET))(this);
		}
	};
}
