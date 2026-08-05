#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_AB4261DB06E3A6BD;
class Class_3_3EB2168D97754EAD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F5B35B1B6669CF16_METHOD_1_2368DFE07F28F7DA_OFFSET UNITYSDK_OFFSET(0x1585FBD0)
#define CLASS_1_F5B35B1B6669CF16_METHOD_1_659B881A8763C779_OFFSET UNITYSDK_OFFSET(0x1585FCE0)
#define CLASS_1_F5B35B1B6669CF16_METHOD_1_76520072717813DE_OFFSET UNITYSDK_OFFSET(0x158605C0)
#define CLASS_1_F5B35B1B6669CF16_METHOD_1_8608350DFEDEE4FD_OFFSET UNITYSDK_OFFSET(0x1585FEA0)
#define CLASS_1_F5B35B1B6669CF16_METHOD_1_A95D7484FE7E3803_OFFSET UNITYSDK_OFFSET(0x15860530)
#define CLASS_1_F5B35B1B6669CF16__CTOR_OFFSET UNITYSDK_OFFSET(0x1585FB00)

inline static constexpr unsigned int Class_1_F5B35B1B6669CF16_TypeDefinitionIndex = 43663;

class Class_1_F5B35B1B6669CF16 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_AB4261DB06E3A6BD*>* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_AB4261DB06E3A6BD*>* Field_1_1; // 0x18
	::System::Boolean Field_1_6; // 0x20
	::System::Boolean Field_1_7; // 0x21

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5B35B1B6669CF16__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2368DFE07F28F7DA(::Class_2_AB4261DB06E3A6BD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AB4261DB06E3A6BD*))((::PBYTE)hIl2Cpp + CLASS_1_F5B35B1B6669CF16_METHOD_1_2368DFE07F28F7DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_659B881A8763C779()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F5B35B1B6669CF16_METHOD_1_659B881A8763C779_OFFSET))(this);
	}

	::System::Void Method_1_8608350DFEDEE4FD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F5B35B1B6669CF16_METHOD_1_8608350DFEDEE4FD_OFFSET))(this, a1);
	}

	::System::Void Method_1_A95D7484FE7E3803(::Class_2_AB4261DB06E3A6BD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AB4261DB06E3A6BD*))((::PBYTE)hIl2Cpp + CLASS_1_F5B35B1B6669CF16_METHOD_1_A95D7484FE7E3803_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_76520072717813DE(::Class_3_3EB2168D97754EAD* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_3EB2168D97754EAD*))((::PBYTE)hIl2Cpp + CLASS_1_F5B35B1B6669CF16_METHOD_1_76520072717813DE_OFFSET))(this, a1);
	}
};
