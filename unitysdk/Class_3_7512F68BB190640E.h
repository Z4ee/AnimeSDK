#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_3_7512F68BB190640E_METHOD_3_2D9B1DEC829F4427_OFFSET UNITYSDK_OFFSET(0x1CB4E030)
#define CLASS_3_7512F68BB190640E_METHOD_3_A18832F1E35D7A11_OFFSET UNITYSDK_OFFSET(0x1CB4DFF0)
#define CLASS_3_7512F68BB190640E__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB4E020)

inline static constexpr unsigned int Class_3_7512F68BB190640E_TypeDefinitionIndex = 22633;

class Class_3_7512F68BB190640E : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::String*>* NGIMHEEFALB; // 0x18
	::System::String* ECNKCCNJNPJ; // 0x20
	::Il2CppArray<::System::String*>* ANLGDGBOHCA; // 0x28
	::Il2CppArray<::System::String*>* OJFKGJBEDEG; // 0x30
	::Il2CppArray<::System::String*>* JGDMGEKAHMI; // 0x38
	::Il2CppArray<::System::String*>* MFMLJBGBBJI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_7512F68BB190640E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A18832F1E35D7A11(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7512F68BB190640E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7512F68BB190640E*&))((::PBYTE)hIl2Cpp + CLASS_3_7512F68BB190640E_METHOD_3_A18832F1E35D7A11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_2D9B1DEC829F4427(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_7512F68BB190640E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_7512F68BB190640E*))((::PBYTE)hIl2Cpp + CLASS_3_7512F68BB190640E_METHOD_3_2D9B1DEC829F4427_OFFSET))(a1, a2);
	}
};
