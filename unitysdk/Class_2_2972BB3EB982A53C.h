#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class TurnBattleEntityUnit; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_0_16E4307DCC419505_152;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_2972BB3EB982A53C_METHOD_2_0B1EB5C9B94BAB66_1_OFFSET UNITYSDK_OFFSET(0x119AF5E0)
#define CLASS_2_2972BB3EB982A53C_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x119AEFB0)
#define CLASS_2_2972BB3EB982A53C_METHOD_2_6D80F67D57B3C37E_OFFSET UNITYSDK_OFFSET(0x119AF730)
#define CLASS_2_2972BB3EB982A53C_METHOD_2_91888C692DAC5E58_OFFSET UNITYSDK_OFFSET(0x119AEC40)
#define CLASS_2_2972BB3EB982A53C_METHOD_2_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x119AF500)
#define CLASS_2_2972BB3EB982A53C_METHOD_2_E11BB58CDF5EE653_1_OFFSET UNITYSDK_OFFSET(0x119AFBF0)
#define CLASS_2_2972BB3EB982A53C_METHOD_2_E11BB58CDF5EE653_OFFSET UNITYSDK_OFFSET(0x119AF100)
#define CLASS_2_2972BB3EB982A53C__CTOR_OFFSET UNITYSDK_OFFSET(0x119AEF60)

inline static constexpr unsigned int Class_2_2972BB3EB982A53C_TypeDefinitionIndex = 83879;

class Class_2_2972BB3EB982A53C : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_F16D73323D71766B<::UnityEngine::Vector3>* Field_2_5; // 0x50
	::Class_0_16E4307DCC419505_152<::MoleMole::TurnBattleEntityUnit*>* Field_2_0; // 0x58
	::Class_2_F16D73323D71766B<::UnityEngine::Transform*>* Field_2_7; // 0x60
	::Class_2_F16D73323D71766B<::UnityEngine::Transform*>* Field_2_6; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2972BB3EB982A53C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_91888C692DAC5E58(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_2972BB3EB982A53C_METHOD_2_91888C692DAC5E58_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2972BB3EB982A53C_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_E11BB58CDF5EE653()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2972BB3EB982A53C_METHOD_2_E11BB58CDF5EE653_OFFSET))(this);
	}

	::System::Boolean Method_2_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2972BB3EB982A53C_METHOD_2_ABFE6A357B89C69A_OFFSET))(this);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2972BB3EB982A53C_METHOD_2_0B1EB5C9B94BAB66_1_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_6D80F67D57B3C37E()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2972BB3EB982A53C_METHOD_2_6D80F67D57B3C37E_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_E11BB58CDF5EE653_1()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2972BB3EB982A53C_METHOD_2_E11BB58CDF5EE653_1_OFFSET))(this);
	}
};
