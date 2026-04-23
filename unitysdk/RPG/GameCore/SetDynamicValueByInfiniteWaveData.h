#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/InfiniteWaveDataType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYINFINITEWAVEDATA_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x18E23370)
#define RPG_GAMECORE_SETDYNAMICVALUEBYINFINITEWAVEDATA_METHOD_4_011D96502E737EA8_OFFSET UNITYSDK_OFFSET(0x18E230C0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYINFINITEWAVEDATA_METHOD_4_B4BA3640302C1FC0_OFFSET UNITYSDK_OFFSET(0x18E23190)
#define RPG_GAMECORE_SETDYNAMICVALUEBYINFINITEWAVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18E23140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByInfiniteWaveData_TypeDefinitionIndex = 22231;

	class SetDynamicValueByInfiniteWaveData : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::InfiniteWaveDataType ValueType; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYINFINITEWAVEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_011D96502E737EA8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByInfiniteWaveData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByInfiniteWaveData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYINFINITEWAVEDATA_METHOD_4_011D96502E737EA8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B4BA3640302C1FC0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByInfiniteWaveData* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByInfiniteWaveData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYINFINITEWAVEDATA_METHOD_4_B4BA3640302C1FC0_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYINFINITEWAVEDATA_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
