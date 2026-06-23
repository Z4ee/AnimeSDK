#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_29EEA995F8FD7C71;
class Class_2_0D6C43FE29D7C5E4;
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define CLASS_1_E2565D9DA1E3A032_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x172813E0)
#define CLASS_1_E2565D9DA1E3A032__CTOR_OFFSET UNITYSDK_OFFSET(0x172813D0)

inline static constexpr unsigned int Class_1_E2565D9DA1E3A032_TypeDefinitionIndex = 39645;

class Class_1_E2565D9DA1E3A032 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0xFFFFFFFF; // 0x0
	::Class_1_29EEA995F8FD7C71* Field_1_1; // 0x10
	::System::Tuple_2<::System::Int32, ::Class_2_0D6C43FE29D7C5E4*>* Field_1_2; // 0x18
	::System::Int32 Field_1_3; // 0x20

	::System::Void _ctor(::Class_1_29EEA995F8FD7C71* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_29EEA995F8FD7C71*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_E2565D9DA1E3A032__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E2565D9DA1E3A032_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}
};
