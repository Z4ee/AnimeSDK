#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_CF9C7DF2A4F888F5_METHOD_3_2630ACAA1C726FBD_OFFSET UNITYSDK_OFFSET(0x1771D6E0)
#define CLASS_3_CF9C7DF2A4F888F5_METHOD_3_70D89F22B6EB766C_OFFSET UNITYSDK_OFFSET(0x1771D760)
#define CLASS_3_CF9C7DF2A4F888F5__CTOR_OFFSET UNITYSDK_OFFSET(0x1771D730)

inline static constexpr unsigned int Class_3_CF9C7DF2A4F888F5_TypeDefinitionIndex = 20581;

class Class_3_CF9C7DF2A4F888F5 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* Field_3_1; // 0x18
	::System::Boolean Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF9C7DF2A4F888F5__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_2630ACAA1C726FBD(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CF9C7DF2A4F888F5*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CF9C7DF2A4F888F5*&))((::PBYTE)hIl2Cpp + CLASS_3_CF9C7DF2A4F888F5_METHOD_3_2630ACAA1C726FBD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_70D89F22B6EB766C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_CF9C7DF2A4F888F5* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_CF9C7DF2A4F888F5*))((::PBYTE)hIl2Cpp + CLASS_3_CF9C7DF2A4F888F5_METHOD_3_70D89F22B6EB766C_OFFSET))(a1, a2);
	}
};
