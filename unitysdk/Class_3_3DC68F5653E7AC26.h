#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_3DC68F5653E7AC26_METHOD_3_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x1657E7E0)
#define CLASS_3_3DC68F5653E7AC26_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1657F400)
#define CLASS_3_3DC68F5653E7AC26_METHOD_3_E82718B50EFFCD4F_OFFSET UNITYSDK_OFFSET(0x1657F490)
#define CLASS_3_3DC68F5653E7AC26_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x1657E5E0)
#define CLASS_3_3DC68F5653E7AC26__CTOR_OFFSET UNITYSDK_OFFSET(0x1657F230)

inline static constexpr unsigned int Class_3_3DC68F5653E7AC26_TypeDefinitionIndex = 67175;

class Class_3_3DC68F5653E7AC26 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_3_B537A0AA78803363* Field_3_3; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_1; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_2; // 0x30
	::Class_3_CF43FA1E89397A1C* Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3DC68F5653E7AC26__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3DC68F5653E7AC26_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_C43DD7AFEEA2B827(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_3DC68F5653E7AC26_METHOD_3_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3DC68F5653E7AC26_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_E82718B50EFFCD4F(::Struct_2_29439DBE2B63DCF3 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::Struct_2_29439DBE2B63DCF3))((::PBYTE)hIl2Cpp + CLASS_3_3DC68F5653E7AC26_METHOD_3_E82718B50EFFCD4F_OFFSET))(a1);
	}
};
