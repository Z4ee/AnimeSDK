#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define RPG_CLIENT_MONOMAP3DTOUCH_STRUCT_2_89E69CD783F83437_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1533C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMap3DTouch_Struct_2_89E69CD783F83437_TypeDefinitionIndex = 69008;

	struct alignas(8) MonoMap3DTouch_Struct_2_89E69CD783F83437
	{
		::System::Action_3<::System::UInt32, ::UnityEngine::Vector2, ::System::Boolean>* OBKNANIDMKH; // 0x10
		::System::Action_2<::System::Boolean, ::UnityEngine::Vector2>* PEDFLCNLIOC; // 0x18
		::System::Action_3<::System::Single, ::System::Boolean, ::UnityEngine::Vector2>* OCMKMOHFIID; // 0x20
		::System::Action_3<::System::Single, ::System::Boolean, ::UnityEngine::Vector2>* FHNEEELAEGK; // 0x28
		::System::Action* DDGDOBDOMKD; // 0x30
		::System::Action* KFJLGBHOONO; // 0x38
		::System::Action* DHHAGHKLIJI; // 0x40
		::System::Action* KBPMBBIJBKB; // 0x48
		::System::Action* HBBAGPGNFKJ; // 0x50
		::System::Action_2<::UnityEngine::Vector2, ::System::Boolean>* KFOKCNMBKID; // 0x58

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_STRUCT_2_89E69CD783F83437_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
