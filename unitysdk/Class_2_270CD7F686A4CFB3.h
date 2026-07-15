#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_270CD7F686A4CFB3_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x17541740)
#define CLASS_2_270CD7F686A4CFB3_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x175416B0)
#define CLASS_2_270CD7F686A4CFB3_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x17541860)
#define CLASS_2_270CD7F686A4CFB3_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0x175415D0)
#define CLASS_2_270CD7F686A4CFB3_METHOD_2_E267E6DE0C47EF5F_OFFSET UNITYSDK_OFFSET(0x17541810)
#define CLASS_2_270CD7F686A4CFB3__CTOR_OFFSET UNITYSDK_OFFSET(0x175419C0)
#define CLASS_2_270CD7F686A4CFB3__ONBIND_OFFSET UNITYSDK_OFFSET(0x17541540)
#define CLASS_2_270CD7F686A4CFB3__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x17541660)

inline static constexpr unsigned int Class_2_270CD7F686A4CFB3_TypeDefinitionIndex = 68984;

class Class_2_270CD7F686A4CFB3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::BattleGridFightAvatarData* Field_2_1; // 0x60
	::System::String* Field_2_2; // 0x68
	::UnityEngine::Transform* Field_2_3; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_270CD7F686A4CFB3__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_270CD7F686A4CFB3__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_270CD7F686A4CFB3_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_270CD7F686A4CFB3__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_270CD7F686A4CFB3_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_E267E6DE0C47EF5F(::RPG::GameCore::BattleGridFightAvatarData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleGridFightAvatarData*))((::PBYTE)hIl2Cpp + CLASS_2_270CD7F686A4CFB3_METHOD_2_E267E6DE0C47EF5F_OFFSET))(this, a1);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_270CD7F686A4CFB3_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_270CD7F686A4CFB3_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
