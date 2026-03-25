#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4F79C408792F4D54.h"

class Class_1_43BD383C98B4C0C5_170;
class Class_1_C4FD36003027AC99;
class Class_1_FB3E7B71A45FEB7C;
class Class_2_49CAB3DE74280C58;
class Class_3_D637C1E17FCBBFB0;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_EAA193ACF8C362A1_METHOD_2_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x8BEFDF0)
#define CLASS_2_EAA193ACF8C362A1_METHOD_2_B7F6E872EAA67E57_OFFSET UNITYSDK_OFFSET(0x8BEFE50)
#define CLASS_2_EAA193ACF8C362A1__CTOR_OFFSET UNITYSDK_OFFSET(0x8BF0380)

inline static constexpr unsigned int Class_2_EAA193ACF8C362A1_TypeDefinitionIndex = 63008;

class Class_2_EAA193ACF8C362A1 : public ::Class_1_4F79C408792F4D54
{
public:
	::Class_1_FB3E7B71A45FEB7C* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAA193ACF8C362A1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4E22A18EF530BFA8(::Class_3_D637C1E17FCBBFB0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D637C1E17FCBBFB0*))((::PBYTE)hIl2Cpp + CLASS_2_EAA193ACF8C362A1_METHOD_2_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B7F6E872EAA67E57(::Class_1_C4FD36003027AC99* a1, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::Class_1_43BD383C98B4C0C5_170*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_C4FD36003027AC99*, ::System::Collections::Generic::List_1<::Class_2_49CAB3DE74280C58*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::Class_1_43BD383C98B4C0C5_170*&))((::PBYTE)hIl2Cpp + CLASS_2_EAA193ACF8C362A1_METHOD_2_B7F6E872EAA67E57_OFFSET))(this, a1, a2, a3, a4);
	}
};
