#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1DAB3ACF95C0CB35_Struct_2_F7C243F317D8E44A.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1DAB3ACF95C0CB35_METHOD_1_0840FEF47C845AC7_OFFSET UNITYSDK_OFFSET(0x179E33B0)
#define CLASS_1_1DAB3ACF95C0CB35_METHOD_1_0C78E57E5D4B30DE_OFFSET UNITYSDK_OFFSET(0x179E3290)
#define CLASS_1_1DAB3ACF95C0CB35_METHOD_1_65D154CF9A34E5A8_OFFSET UNITYSDK_OFFSET(0x179E3080)
#define CLASS_1_1DAB3ACF95C0CB35__CTOR_OFFSET UNITYSDK_OFFSET(0x179E4770)

inline static constexpr unsigned int Class_1_1DAB3ACF95C0CB35_TypeDefinitionIndex = 8481;

class Class_1_1DAB3ACF95C0CB35 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAB3ACF95C0CB35__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_65D154CF9A34E5A8(::Il2CppArray<::Class_1_1DAB3ACF95C0CB35_Struct_2_F7C243F317D8E44A>* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::Il2CppArray<::Class_1_1DAB3ACF95C0CB35_Struct_2_F7C243F317D8E44A>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1DAB3ACF95C0CB35_METHOD_1_65D154CF9A34E5A8_OFFSET))(a1, a2, a3);
	}

	static ::System::Single Method_1_0C78E57E5D4B30DE(::RPG::MVector2& a1, ::RPG::MVector2& a2, ::RPG::MVector2& a3)
	{
		return ((::System::Single(*)(::RPG::MVector2&, ::RPG::MVector2&, ::RPG::MVector2&))((::PBYTE)hIl2Cpp + CLASS_1_1DAB3ACF95C0CB35_METHOD_1_0C78E57E5D4B30DE_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_0840FEF47C845AC7(::Il2CppArray<::RPG::MVector2>* a1, ::Il2CppArray<::System::Int32>*& a2, ::Il2CppArray<::System::Int32>* a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::RPG::MVector2>*, ::Il2CppArray<::System::Int32>*&, ::Il2CppArray<::System::Int32>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1DAB3ACF95C0CB35_METHOD_1_0840FEF47C845AC7_OFFSET))(a1, a2, a3, a4, a5);
	}
};
