#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::CustomRP { class SWRTPass; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_STRUCT_2_ACF31E46266D259A_EQUALS_OFFSET UNITYSDK_OFFSET(0xF1CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpRTXSystemBehavior_Struct_2_ACF31E46266D259A_TypeDefinitionIndex = 70950;

	struct alignas(8) SimpRTXSystemBehavior_Struct_2_ACF31E46266D259A
	{
		::System::Int32 HHLFNJCMNIJ; // 0x10
		::RPG::CustomRP::SWRTPass* HFCBBEBJCAP; // 0x18
		::System::Int32 OIHOOKMKEIP; // 0x20
		::System::Int32 JHICCHKPHEM; // 0x24
		::System::Single KEEEGLEECCN; // 0x28
		::UnityEngine::Texture* BEPAPPGDIEN; // 0x30
		::UnityEngine::Texture* BIKPANECDKP; // 0x38
		::System::Single EIGMMFGILLJ; // 0x40
		::System::Single CPALGIIINBO; // 0x44
		::System::Single KOAHLCAOOKJ; // 0x48
		::UnityEngine::Vector4 NJBCFCIDNGD; // 0x4C

		::System::Boolean Equals(::RPG::Client::SimpRTXSystemBehavior_Struct_2_ACF31E46266D259A a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SimpRTXSystemBehavior_Struct_2_ACF31E46266D259A))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPRTXSYSTEMBEHAVIOR_STRUCT_2_ACF31E46266D259A_EQUALS_OFFSET))(this, a1);
		}
	};
}
