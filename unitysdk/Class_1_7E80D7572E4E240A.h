#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_583;
class Class_1_0B3F882C321B1B31;
class Class_1_A4D134A7DAD941E3;
class Class_1_FD3C35FC150AF234;
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7E80D7572E4E240A_METHOD_1_DAF492D6D1F5AAF9_OFFSET UNITYSDK_OFFSET(0x1186E650)
#define CLASS_1_7E80D7572E4E240A_METHOD_1_E18CA95C66C0EDEC_OFFSET UNITYSDK_OFFSET(0x1186E470)
#define CLASS_1_7E80D7572E4E240A__CTOR_OFFSET UNITYSDK_OFFSET(0x1186E3C0)

inline static constexpr unsigned int Class_1_7E80D7572E4E240A_TypeDefinitionIndex = 50993;

class Class_1_7E80D7572E4E240A : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_583* Field_1_1; // 0x10
	::Class_1_FD3C35FC150AF234* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_FD3C35FC150AF234* a1, ::Class_0_16E4307DCC419505_583* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FD3C35FC150AF234*, ::Class_0_16E4307DCC419505_583*))((::PBYTE)hIl2Cpp + CLASS_1_7E80D7572E4E240A__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_0B3F882C321B1B31* Method_1_E18CA95C66C0EDEC(::Struct_2_AAD4F4215611A944& a1, ::RPG::GameCore::SpecialAvatarRow* a2)
	{
		return ((::Class_1_0B3F882C321B1B31*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_7E80D7572E4E240A_METHOD_1_E18CA95C66C0EDEC_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_A4D134A7DAD941E3*>* Method_1_DAF492D6D1F5AAF9(::RPG::GameCore::SpecialAvatarRow* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_A4D134A7DAD941E3*>*(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_7E80D7572E4E240A_METHOD_1_DAF492D6D1F5AAF9_OFFSET))(this, a1);
	}
};
