#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_2_E0E8B7AE6E718844;
namespace System { class String; }

#define CLASS_3_65B48AA9E8A7B14E_METHOD_3_660F257C3D2E4349_OFFSET UNITYSDK_OFFSET(0x1B2FD790)
#define CLASS_3_65B48AA9E8A7B14E_METHOD_3_B0676F272208923C_OFFSET UNITYSDK_OFFSET(0x1B2FD7D0)
#define CLASS_3_65B48AA9E8A7B14E__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2FD7C0)

inline static constexpr unsigned int Class_3_65B48AA9E8A7B14E_TypeDefinitionIndex = 21597;

class Class_3_65B48AA9E8A7B14E : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_0; // 0x18
	::Il2CppArray<::Class_2_E0E8B7AE6E718844*>* Field_3_1; // 0x20
	::System::String* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65B48AA9E8A7B14E__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_660F257C3D2E4349(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_65B48AA9E8A7B14E*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_65B48AA9E8A7B14E*&))((::PBYTE)hIl2Cpp + CLASS_3_65B48AA9E8A7B14E_METHOD_3_660F257C3D2E4349_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B0676F272208923C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_65B48AA9E8A7B14E* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_65B48AA9E8A7B14E*))((::PBYTE)hIl2Cpp + CLASS_3_65B48AA9E8A7B14E_METHOD_3_B0676F272208923C_OFFSET))(a1, a2);
	}
};
