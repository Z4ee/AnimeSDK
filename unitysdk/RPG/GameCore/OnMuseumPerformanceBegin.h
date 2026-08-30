#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ONMUSEUMPERFORMANCEBEGIN_METHOD_3_267C61149841E696_OFFSET UNITYSDK_OFFSET(0x1CE96520)
#define RPG_GAMECORE_ONMUSEUMPERFORMANCEBEGIN_METHOD_3_7ECCF8AA9FFE60D3_OFFSET UNITYSDK_OFFSET(0x1CE964E0)
#define RPG_GAMECORE_ONMUSEUMPERFORMANCEBEGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE96510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OnMuseumPerformanceBegin_TypeDefinitionIndex = 20666;

	class OnMuseumPerformanceBegin : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPerformanceBegin; // 0x18
		::System::UInt32 AreaID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONMUSEUMPERFORMANCEBEGIN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7ECCF8AA9FFE60D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OnMuseumPerformanceBegin*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OnMuseumPerformanceBegin*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONMUSEUMPERFORMANCEBEGIN_METHOD_3_7ECCF8AA9FFE60D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_267C61149841E696(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OnMuseumPerformanceBegin* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OnMuseumPerformanceBegin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ONMUSEUMPERFORMANCEBEGIN_METHOD_3_267C61149841E696_OFFSET))(a1, a2);
		}
	};
}
