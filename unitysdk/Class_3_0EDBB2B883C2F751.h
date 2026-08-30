#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_E5D38AB31F1F266B;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_0EDBB2B883C2F751_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x1ADFB9A0)
#define CLASS_3_0EDBB2B883C2F751_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x1ADFB8A0)
#define CLASS_3_0EDBB2B883C2F751__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADFB930)

inline static constexpr unsigned int Class_3_0EDBB2B883C2F751_TypeDefinitionIndex = 22606;

class Class_3_0EDBB2B883C2F751 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* CFINJMDGNCA; // 0x18
	::RPG::GameCore::TargetEvaluator* BPIBFOGDDHD; // 0x20
	::System::String* EEKMBBCAGDH; // 0x28
	::RPG::GameCore::DynamicFloat* AEMCMEKJFAI; // 0x30
	::Class_2_E5D38AB31F1F266B* GBGBACIMHOO; // 0x38
	::System::String* KANLBGHKBDK; // 0x40
	::System::String* CHHGHIGBAPH; // 0x48
	::System::String* PPPKKLJJCIJ; // 0x50
	::System::String* ECHFEMAFJNN; // 0x58
	::RPG::GameCore::StringHash DLHAAEGHLKF; // 0x60
	::System::Boolean NMMJBGFDNAI; // 0x64
	::System::Boolean BMLBIIEDPBK; // 0x65
	::System::Single FIHJJLCBHHA; // 0x68
	::System::Single FMJNJDMKEGN; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0EDBB2B883C2F751__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0EDBB2B883C2F751*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0EDBB2B883C2F751*&))((::PBYTE)hIl2Cpp + CLASS_3_0EDBB2B883C2F751_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0EDBB2B883C2F751* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0EDBB2B883C2F751*))((::PBYTE)hIl2Cpp + CLASS_3_0EDBB2B883C2F751_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
