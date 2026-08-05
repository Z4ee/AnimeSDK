#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_E36C894DCA3F304A_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class MovableTrait; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define CLASS_3_AC3DEFDC8A1EF971_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x165B08E0)
#define CLASS_3_AC3DEFDC8A1EF971_METHOD_3_5A91F33D5C1C8C6D_OFFSET UNITYSDK_OFFSET(0x165B0A40)
#define CLASS_3_AC3DEFDC8A1EF971_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x165B0DC0)
#define CLASS_3_AC3DEFDC8A1EF971_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x165B0D40)
#define CLASS_3_AC3DEFDC8A1EF971_METHOD_3_CEE72EAC18ECC163_OFFSET UNITYSDK_OFFSET(0x165B09C0)
#define CLASS_3_AC3DEFDC8A1EF971_METHOD_3_E55D5827A7205F63_OFFSET UNITYSDK_OFFSET(0x165B0C50)
#define CLASS_3_AC3DEFDC8A1EF971_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x165B0880)
#define CLASS_3_AC3DEFDC8A1EF971__CCTOR_OFFSET UNITYSDK_OFFSET(0x165B0930)
#define CLASS_3_AC3DEFDC8A1EF971__CTOR_OFFSET UNITYSDK_OFFSET(0x165B09B0)

inline static constexpr unsigned int Class_3_AC3DEFDC8A1EF971_TypeDefinitionIndex = 66701;

class Class_3_AC3DEFDC8A1EF971 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_10 = 0xBC; // 0x0
	::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer* Field_3_11; // 0x48
	::System::String* Field_3_2; // 0x50
	::UnityEngine::Vector3 Field_3_0; // 0x58
	::Enum_3_E36C894DCA3F304A_2 Field_3_1; // 0x64
	::System::Single Field_3_4; // 0x68
	::UnityEngine::Vector3 Field_3_7; // 0x6C
	::System::Boolean Field_3_5; // 0x78
	::System::Single Field_3_6; // 0x7C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_AC3DEFDC8A1EF971__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC3DEFDC8A1EF971__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC3DEFDC8A1EF971_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC3DEFDC8A1EF971_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_CEE72EAC18ECC163(::System::Boolean a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_AC3DEFDC8A1EF971_METHOD_3_CEE72EAC18ECC163_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_5A91F33D5C1C8C6D(::MoleMole::Config::MovableTrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MovableTrait*))((::PBYTE)hIl2Cpp + CLASS_3_AC3DEFDC8A1EF971_METHOD_3_5A91F33D5C1C8C6D_OFFSET))(this, a1);
	}

	::System::Void Method_3_E55D5827A7205F63(::System::String* a1, ::Enum_3_E36C894DCA3F304A_2 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Enum_3_E36C894DCA3F304A_2, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_3_AC3DEFDC8A1EF971_METHOD_3_E55D5827A7205F63_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::Class_3_AC3DEFDC8A1EF971* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_AC3DEFDC8A1EF971*(*)())((::PBYTE)hIl2Cpp + CLASS_3_AC3DEFDC8A1EF971_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC3DEFDC8A1EF971_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
