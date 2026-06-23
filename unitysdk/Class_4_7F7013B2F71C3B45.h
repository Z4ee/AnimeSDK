#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/Struct_2_57572BE5B21BFA95.h"

class Class_3_B537A0AA78803363;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_7F7013B2F71C3B45_METHOD_4_07EFC4E4799D9944_OFFSET UNITYSDK_OFFSET(0x14306D70)
#define CLASS_4_7F7013B2F71C3B45_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x14306C20)
#define CLASS_4_7F7013B2F71C3B45_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x13745250)
#define CLASS_4_7F7013B2F71C3B45_METHOD_4_454A9AEF874BD91C_OFFSET UNITYSDK_OFFSET(0x13745260)
#define CLASS_4_7F7013B2F71C3B45__CTOR_OFFSET UNITYSDK_OFFSET(0x14307500)

inline static constexpr unsigned int Class_4_7F7013B2F71C3B45_TypeDefinitionIndex = 71827;

class Class_4_7F7013B2F71C3B45 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_B537A0AA78803363* Field_4_2; // 0x28
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_4_1; // 0x30
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F7013B2F71C3B45__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F7013B2F71C3B45_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_07EFC4E4799D9944(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_7F7013B2F71C3B45_METHOD_4_07EFC4E4799D9944_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7F7013B2F71C3B45_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_4_454A9AEF874BD91C(::Struct_2_29439DBE2B63DCF3 a1, ::Struct_2_57572BE5B21BFA95 a2)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3, ::Struct_2_57572BE5B21BFA95))((::PBYTE)hIl2Cpp + CLASS_4_7F7013B2F71C3B45_METHOD_4_454A9AEF874BD91C_OFFSET))(this, a1, a2);
	}
};
