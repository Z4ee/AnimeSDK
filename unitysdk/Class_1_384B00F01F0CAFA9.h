#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_F5FBDA629A1B439F.h"
#include "unitysdk/System/Object.h"

class Class_3_B277246A3FA15361;
namespace System { class String; }

#define CLASS_1_384B00F01F0CAFA9_METHOD_1_49EAA7F8EE26921A_1_OFFSET UNITYSDK_OFFSET(0x17630170)
#define CLASS_1_384B00F01F0CAFA9_METHOD_1_49EAA7F8EE26921A_2_OFFSET UNITYSDK_OFFSET(0x17630050)
#define CLASS_1_384B00F01F0CAFA9_METHOD_1_49EAA7F8EE26921A_OFFSET UNITYSDK_OFFSET(0x176300E0)
#define CLASS_1_384B00F01F0CAFA9_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1762FD30)
#define CLASS_1_384B00F01F0CAFA9_METHOD_1_CF0D3107F225FDF1_OFFSET UNITYSDK_OFFSET(0x1762FCE0)
#define CLASS_1_384B00F01F0CAFA9_METHOD_1_E50401D2A0A6EB7B_OFFSET UNITYSDK_OFFSET(0x1762FD80)
#define CLASS_1_384B00F01F0CAFA9__CTOR_OFFSET UNITYSDK_OFFSET(0x17630200)

inline static constexpr unsigned int Class_1_384B00F01F0CAFA9_TypeDefinitionIndex = 76235;

class Class_1_384B00F01F0CAFA9 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_384B00F01F0CAFA9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CF0D3107F225FDF1(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_384B00F01F0CAFA9_METHOD_1_CF0D3107F225FDF1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_384B00F01F0CAFA9_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_1_E50401D2A0A6EB7B(::System::String* a1, ::System::Object* a2, ::Class_3_B277246A3FA15361* a3, ::Struct_2_F5FBDA629A1B439F a4)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Object*, ::Class_3_B277246A3FA15361*, ::Struct_2_F5FBDA629A1B439F))((::PBYTE)hIl2Cpp + CLASS_1_384B00F01F0CAFA9_METHOD_1_E50401D2A0A6EB7B_OFFSET))(this, a1, a2, a3, a4);
	}

	static ::System::String* Method_1_49EAA7F8EE26921A(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_384B00F01F0CAFA9_METHOD_1_49EAA7F8EE26921A_OFFSET))(a1);
	}

	static ::System::String* Method_1_49EAA7F8EE26921A_1(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_384B00F01F0CAFA9_METHOD_1_49EAA7F8EE26921A_1_OFFSET))(a1);
	}

	static ::System::String* Method_1_49EAA7F8EE26921A_2(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_384B00F01F0CAFA9_METHOD_1_49EAA7F8EE26921A_2_OFFSET))(a1);
	}
};
