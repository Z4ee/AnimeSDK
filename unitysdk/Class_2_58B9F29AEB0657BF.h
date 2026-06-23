#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_495D7A3E0E5529B6.h"
#include "unitysdk/Enum_3_D97372C4EB93BA22.h"
#include "unitysdk/Struct_2_48460350BA079E78.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_2_58B9F29AEB0657BF_METHOD_2_03F55E696C12D10F_OFFSET UNITYSDK_OFFSET(0x137B8DE0)
#define CLASS_2_58B9F29AEB0657BF_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x137B92D0)
#define CLASS_2_58B9F29AEB0657BF_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x137B8DB0)
#define CLASS_2_58B9F29AEB0657BF__CTOR_OFFSET UNITYSDK_OFFSET(0x137B8DC0)

inline static constexpr unsigned int Class_2_58B9F29AEB0657BF_TypeDefinitionIndex = 53711;

class Class_2_58B9F29AEB0657BF : public ::Class_1_495D7A3E0E5529B6
{
public:
	::UnityEngine::Camera* Field_2_3; // 0x28
	::Struct_2_48460350BA079E78 Field_2_1; // 0x30
	::UnityEngine::Transform* Field_2_5; // 0x40
	::Struct_2_48460350BA079E78 Field_2_0; // 0x48
	::UnityEngine::Transform* Field_2_4; // 0x58
	::System::Int32 Field_2_2; // 0x60

	::System::Void _ctor(::UnityEngine::Camera* a1, ::Struct_2_48460350BA079E78 a2, ::Struct_2_48460350BA079E78 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::Struct_2_48460350BA079E78, ::Struct_2_48460350BA079E78, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_58B9F29AEB0657BF__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::Enum_3_D97372C4EB93BA22 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D97372C4EB93BA22(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58B9F29AEB0657BF_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Boolean Method_2_03F55E696C12D10F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58B9F29AEB0657BF_METHOD_2_03F55E696C12D10F_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58B9F29AEB0657BF_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
