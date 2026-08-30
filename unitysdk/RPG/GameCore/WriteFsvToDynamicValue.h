#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_WRITEFSVTODYNAMICVALUE_METHOD_3_9E46DA249B8C8BF9_OFFSET UNITYSDK_OFFSET(0x1D6B8E10)
#define RPG_GAMECORE_WRITEFSVTODYNAMICVALUE_METHOD_3_AE26D26B49E8EB3A_OFFSET UNITYSDK_OFFSET(0x1D6B8DD0)
#define RPG_GAMECORE_WRITEFSVTODYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B8E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WriteFsvToDynamicValue_TypeDefinitionIndex = 21788;

	class WriteFsvToDynamicValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* FsvName; // 0x18
		::RPG::GameCore::DynamicString* ValueName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WRITEFSVTODYNAMICVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_AE26D26B49E8EB3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WriteFsvToDynamicValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WriteFsvToDynamicValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WRITEFSVTODYNAMICVALUE_METHOD_3_AE26D26B49E8EB3A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9E46DA249B8C8BF9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WriteFsvToDynamicValue* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WriteFsvToDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WRITEFSVTODYNAMICVALUE_METHOD_3_9E46DA249B8C8BF9_OFFSET))(a1, a2);
		}
	};
}
