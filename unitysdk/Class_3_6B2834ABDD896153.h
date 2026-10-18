#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_6B2834ABDD896153_METHOD_3_0EA31FDFD4AC3DFF_OFFSET UNITYSDK_OFFSET(0x1DCB5440)
#define CLASS_3_6B2834ABDD896153_METHOD_3_F39F86C4A9457EE8_OFFSET UNITYSDK_OFFSET(0x1DCB53A0)
#define CLASS_3_6B2834ABDD896153__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCB5400)

inline static constexpr unsigned int Class_3_6B2834ABDD896153_TypeDefinitionIndex = 23682;

class Class_3_6B2834ABDD896153 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* LICBONAHFPN; // 0x18
	::Il2CppArray<::System::String*>* JNAGOECIKPA; // 0x20
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
	::System::Boolean IOBJFEJFLJP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6B2834ABDD896153__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F39F86C4A9457EE8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6B2834ABDD896153*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6B2834ABDD896153*&))((::PBYTE)hIl2Cpp + CLASS_3_6B2834ABDD896153_METHOD_3_F39F86C4A9457EE8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0EA31FDFD4AC3DFF(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_6B2834ABDD896153* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_6B2834ABDD896153*))((::PBYTE)hIl2Cpp + CLASS_3_6B2834ABDD896153_METHOD_3_0EA31FDFD4AC3DFF_OFFSET))(a1, a2);
	}
};
