#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define RPG_CLIENT_MONOMAP3DTOUCH_STRUCT_2_89E69CD783F83437_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x80F40)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoMap3DTouch_Struct_2_89E69CD783F83437_TypeDefinitionIndex = 56404;

	struct alignas(8) MonoMap3DTouch_Struct_2_89E69CD783F83437
	{
		::System::Action_3<::System::UInt32, ::UnityEngine::Vector2, ::System::Boolean>* Field_2_0; // 0x10
		::System::Action_2<::System::Boolean, ::UnityEngine::Vector2>* Field_2_1; // 0x18
		::System::Action_3<::System::Single, ::System::Boolean, ::UnityEngine::Vector2>* Field_2_2; // 0x20
		::System::Action_3<::System::Single, ::System::Boolean, ::UnityEngine::Vector2>* Field_2_3; // 0x28
		::System::Action* Field_2_4; // 0x30
		::System::Action* Field_2_5; // 0x38
		::System::Action* Field_2_6; // 0x40
		::System::Action* Field_2_7; // 0x48
		::System::Action* Field_2_8; // 0x50
		::System::Action_2<::UnityEngine::Vector2, ::System::Boolean>* Field_2_9; // 0x58

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOMAP3DTOUCH_STRUCT_2_89E69CD783F83437_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
