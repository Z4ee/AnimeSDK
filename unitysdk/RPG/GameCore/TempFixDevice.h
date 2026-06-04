#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CPUGPUInfo; }

#define RPG_GAMECORE_TEMPFIXDEVICE_METHOD_2_C5EE0DD73960CA66_OFFSET UNITYSDK_OFFSET(0x19DDEB50)
#define RPG_GAMECORE_TEMPFIXDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DDEC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TempFixDevice_TypeDefinitionIndex = 17368;

	class TempFixDevice : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CPUGPUInfo*>* TempFixDeviceModelList; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEMPFIXDEVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C5EE0DD73960CA66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TempFixDevice*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TempFixDevice*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEMPFIXDEVICE_METHOD_2_C5EE0DD73960CA66_OFFSET))(a1, a2);
		}
	};
}
