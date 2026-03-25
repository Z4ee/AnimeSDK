#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropCurveMoveStartMode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_TARGETPOINT_METHOD_3_4B87BDBF1A8B9694_OFFSET UNITYSDK_OFFSET(0x17518BC0)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_TARGETPOINT_METHOD_3_F071B12625B78CD1_OFFSET UNITYSDK_OFFSET(0x17518900)
#define RPG_GAMECORE_PROPCURVEMOVESTARTMODE_TARGETPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x175188F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropCurveMoveStartMode_TargetPoint_TypeDefinitionIndex = 19331;

	class PropCurveMoveStartMode_TargetPoint : public ::RPG::GameCore::PropCurveMoveStartMode
	{
	public:
		::RPG::GameCore::DynamicString* TargetPointIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_TARGETPOINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4B87BDBF1A8B9694(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveStartMode_TargetPoint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveStartMode_TargetPoint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_TARGETPOINT_METHOD_3_4B87BDBF1A8B9694_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F071B12625B78CD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropCurveMoveStartMode_TargetPoint* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropCurveMoveStartMode_TargetPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPCURVEMOVESTARTMODE_TARGETPOINT_METHOD_3_F071B12625B78CD1_OFFSET))(a1, a2);
		}
	};
}
