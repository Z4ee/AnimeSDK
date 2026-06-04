#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_701;
class Class_1_A4D134A7DAD941E3;
class Class_1_F0343F1186CF346B;
class Class_1_FD3C35FC150AF234;
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_68598CDF0B0102C7_METHOD_1_8B679DDFD7AAA9B5_OFFSET UNITYSDK_OFFSET(0x1064A2A0)
#define CLASS_1_68598CDF0B0102C7_METHOD_1_DAF492D6D1F5AAF9_OFFSET UNITYSDK_OFFSET(0x1064A450)
#define CLASS_1_68598CDF0B0102C7__CTOR_OFFSET UNITYSDK_OFFSET(0x1064A210)

inline static constexpr unsigned int Class_1_68598CDF0B0102C7_TypeDefinitionIndex = 58777;

class Class_1_68598CDF0B0102C7 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_701* Field_1_0; // 0x10
	::Class_1_FD3C35FC150AF234* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_FD3C35FC150AF234* a1, ::Class_0_16E4307DCC419505_701* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD3C35FC150AF234*, ::Class_0_16E4307DCC419505_701*))((::PBYTE)hIl2Cpp + CLASS_1_68598CDF0B0102C7__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_F0343F1186CF346B* Method_1_8B679DDFD7AAA9B5(::Struct_2_AAD4F4215611A944& a1, ::RPG::GameCore::SpecialAvatarRow* a2)
	{
		return ((::Class_1_F0343F1186CF346B*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_68598CDF0B0102C7_METHOD_1_8B679DDFD7AAA9B5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_A4D134A7DAD941E3*>* Method_1_DAF492D6D1F5AAF9(::RPG::GameCore::SpecialAvatarRow* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_A4D134A7DAD941E3*>*(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_68598CDF0B0102C7_METHOD_1_DAF492D6D1F5AAF9_OFFSET))(this, a1);
	}
};
