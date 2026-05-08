#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_495D7A3E0E5529B6.h"
#include "unitysdk/Enum_3_9CDCD2BA9C118D10.h"
#include "unitysdk/Enum_3_D97372C4EB93BA22.h"
#include "unitysdk/Struct_2_48460350BA079E78.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C3CE4E71F6E286AF_METHOD_2_03F55E696C12D10F_OFFSET UNITYSDK_OFFSET(0xB4F01B0)
#define CLASS_2_C3CE4E71F6E286AF_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB4F06C0)
#define CLASS_2_C3CE4E71F6E286AF_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0xB4F0170)
#define CLASS_2_C3CE4E71F6E286AF__CTOR_OFFSET UNITYSDK_OFFSET(0xB4F0180)

inline static constexpr unsigned int Class_2_C3CE4E71F6E286AF_TypeDefinitionIndex = 74590;

class Class_2_C3CE4E71F6E286AF : public ::Class_1_495D7A3E0E5529B6
{
public:
	::UnityEngine::Transform* Field_2_5; // 0x28
	::UnityEngine::Camera* Field_2_6; // 0x30
	::Struct_2_48460350BA079E78 Field_2_1; // 0x38
	::Struct_2_48460350BA079E78 Field_2_0; // 0x48
	::UnityEngine::Transform* Field_2_4; // 0x58
	::Enum_3_9CDCD2BA9C118D10 Field_2_2; // 0x60
	::System::Int32 Field_2_3; // 0x64

	::System::Void _ctor(::UnityEngine::Camera* a1, ::Struct_2_48460350BA079E78 a2, ::Struct_2_48460350BA079E78 a3, ::Enum_3_9CDCD2BA9C118D10 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::Struct_2_48460350BA079E78, ::Struct_2_48460350BA079E78, ::Enum_3_9CDCD2BA9C118D10, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C3CE4E71F6E286AF__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::Enum_3_D97372C4EB93BA22 Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_D97372C4EB93BA22(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3CE4E71F6E286AF_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}

	::System::Boolean Method_2_03F55E696C12D10F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3CE4E71F6E286AF_METHOD_2_03F55E696C12D10F_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3CE4E71F6E286AF_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
