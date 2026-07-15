#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_22F2DBF11C448BFC_METHOD_3_2D9B1DEC829F4427_OFFSET UNITYSDK_OFFSET(0x193BF590)
#define CLASS_3_22F2DBF11C448BFC_METHOD_3_A18832F1E35D7A11_OFFSET UNITYSDK_OFFSET(0x193BF550)
#define CLASS_3_22F2DBF11C448BFC__CTOR_OFFSET UNITYSDK_OFFSET(0x193BF580)

inline static constexpr unsigned int Class_3_22F2DBF11C448BFC_TypeDefinitionIndex = 21296;

class Class_3_22F2DBF11C448BFC : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_1; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_2; // 0x28
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_3; // 0x30
	::System::String* Field_3_4; // 0x38
	::System::String* Field_3_5; // 0x40
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_6; // 0x48
	::System::String* Field_3_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22F2DBF11C448BFC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A18832F1E35D7A11(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_22F2DBF11C448BFC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_22F2DBF11C448BFC*&))((::PBYTE)hIl2Cpp + CLASS_3_22F2DBF11C448BFC_METHOD_3_A18832F1E35D7A11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2D9B1DEC829F4427(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_22F2DBF11C448BFC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_22F2DBF11C448BFC*))((::PBYTE)hIl2Cpp + CLASS_3_22F2DBF11C448BFC_METHOD_3_2D9B1DEC829F4427_OFFSET))(a1, a2);
	}
};
