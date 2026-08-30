#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OPENTRAINPARTYBUILDUI_METHOD_3_32F24078513CA029_OFFSET UNITYSDK_OFFSET(0x1CE985F0)
#define RPG_GAMECORE_OPENTRAINPARTYBUILDUI_METHOD_3_519CAE9F902F2930_OFFSET UNITYSDK_OFFSET(0x1CE985B0)
#define RPG_GAMECORE_OPENTRAINPARTYBUILDUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE985E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenTrainPartyBuildUI_TypeDefinitionIndex = 22108;

	class OpenTrainPartyBuildUI : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean OpenDIYPage; // 0x18
		::System::Boolean OpenTaskPage; // 0x19
		::System::UInt32 AreaID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTRAINPARTYBUILDUI__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_519CAE9F902F2930(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenTrainPartyBuildUI*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenTrainPartyBuildUI*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTRAINPARTYBUILDUI_METHOD_3_519CAE9F902F2930_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_32F24078513CA029(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenTrainPartyBuildUI* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenTrainPartyBuildUI*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENTRAINPARTYBUILDUI_METHOD_3_32F24078513CA029_OFFSET))(a1, a2);
		}
	};
}
