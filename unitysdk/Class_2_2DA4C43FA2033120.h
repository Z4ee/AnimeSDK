#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class TurnBattleEntityUnit; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_0_16E4307DCC419505_109;
template <typename T> class Class_2_F16D73323D71766B;

#define CLASS_2_2DA4C43FA2033120_METHOD_2_6CF93C63C9513BEF_OFFSET UNITYSDK_OFFSET(0x128516F0)
#define CLASS_2_2DA4C43FA2033120_METHOD_2_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x12852380)
#define CLASS_2_2DA4C43FA2033120_METHOD_2_745A8491BBF2771B_OFFSET UNITYSDK_OFFSET(0x128525B0)
#define CLASS_2_2DA4C43FA2033120_METHOD_2_A8F6F688241E6DBC_1_OFFSET UNITYSDK_OFFSET(0x12852A70)
#define CLASS_2_2DA4C43FA2033120_METHOD_2_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x12852460)
#define CLASS_2_2DA4C43FA2033120_METHOD_2_E11BB58CDF5EE653_1_OFFSET UNITYSDK_OFFSET(0x12851F80)
#define CLASS_2_2DA4C43FA2033120_METHOD_2_E11BB58CDF5EE653_OFFSET UNITYSDK_OFFSET(0x12851B80)
#define CLASS_2_2DA4C43FA2033120__CTOR_OFFSET UNITYSDK_OFFSET(0x12851B30)

inline static constexpr unsigned int Class_2_2DA4C43FA2033120_TypeDefinitionIndex = 60900;

class Class_2_2DA4C43FA2033120 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_F16D73323D71766B<::UnityEngine::Transform*>* Field_2_2; // 0x50
	::Class_0_16E4307DCC419505_109<::MoleMole::TurnBattleEntityUnit*>* Field_2_0; // 0x58
	::Class_2_F16D73323D71766B<::UnityEngine::Vector3>* Field_2_3; // 0x60
	::Class_2_F16D73323D71766B<::UnityEngine::Transform*>* Field_2_1; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DA4C43FA2033120__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6CF93C63C9513BEF(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_2DA4C43FA2033120_METHOD_2_6CF93C63C9513BEF_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Transform* Method_2_E11BB58CDF5EE653()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DA4C43FA2033120_METHOD_2_E11BB58CDF5EE653_OFFSET))(this);
	}

	::UnityEngine::Transform* Method_2_E11BB58CDF5EE653_1()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DA4C43FA2033120_METHOD_2_E11BB58CDF5EE653_1_OFFSET))(this);
	}

	::System::Boolean Method_2_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DA4C43FA2033120_METHOD_2_70589F89E4D22649_OFFSET))(this);
	}

	::System::Boolean Method_2_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DA4C43FA2033120_METHOD_2_A8F6F688241E6DBC_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_745A8491BBF2771B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DA4C43FA2033120_METHOD_2_745A8491BBF2771B_OFFSET))(this);
	}

	::System::Boolean Method_2_A8F6F688241E6DBC_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2DA4C43FA2033120_METHOD_2_A8F6F688241E6DBC_1_OFFSET))(this);
	}
};
