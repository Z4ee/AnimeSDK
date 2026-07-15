#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_0399F40049476FEF_METHOD_3_0EA31FDFD4AC3DFF_OFFSET UNITYSDK_OFFSET(0x1BE9CB50)
#define CLASS_3_0399F40049476FEF_METHOD_3_F39F86C4A9457EE8_OFFSET UNITYSDK_OFFSET(0x1BE9CAB0)
#define CLASS_3_0399F40049476FEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE9CB10)

inline static constexpr unsigned int Class_3_0399F40049476FEF_TypeDefinitionIndex = 20280;

class Class_3_0399F40049476FEF : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::UInt32>* Field_3_0; // 0x18
	::System::String* Field_3_1; // 0x20
	::RPG::GameCore::PlayNPCBubbleTalk* Field_3_2; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0399F40049476FEF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_F39F86C4A9457EE8(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0399F40049476FEF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0399F40049476FEF*&))((::PBYTE)hIl2Cpp + CLASS_3_0399F40049476FEF_METHOD_3_F39F86C4A9457EE8_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_0EA31FDFD4AC3DFF(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_0399F40049476FEF* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_0399F40049476FEF*))((::PBYTE)hIl2Cpp + CLASS_3_0399F40049476FEF_METHOD_3_0EA31FDFD4AC3DFF_OFFSET))(a1, a2);
	}
};
