#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_51.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5BD3EF046502B972;
class Class_1_F356FCA60006484C;
namespace MoleMole::Config { class ConfigHollowCameraEasing; }
namespace System { class Object; }

#define CLASS_2_954470B5468267C8_METHOD_2_7A8AC8365BFD8B87_OFFSET UNITYSDK_OFFSET(0x12DD9990)
#define CLASS_2_954470B5468267C8_METHOD_2_B0DB84599FBD1FA0_OFFSET UNITYSDK_OFFSET(0x12DD9B30)
#define CLASS_2_954470B5468267C8__CTOR_OFFSET UNITYSDK_OFFSET(0x12DD9C40)

inline static constexpr unsigned int Class_2_954470B5468267C8_TypeDefinitionIndex = 44215;

class Class_2_954470B5468267C8 : public ::Class_1_43BD383C98B4C0C5_51
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_954470B5468267C8__CTOR_OFFSET))(this);
	}

	::Class_1_F356FCA60006484C* Method_2_7A8AC8365BFD8B87(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::Class_1_F356FCA60006484C*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_954470B5468267C8_METHOD_2_7A8AC8365BFD8B87_OFFSET))(this, a1);
	}

	static ::Class_1_5BD3EF046502B972* Method_2_B0DB84599FBD1FA0(::MoleMole::UICameraAtom& a1, ::UnityEngine::Vector3& a2, ::MoleMole::Config::ConfigHollowCameraEasing*& a3)
	{
		return ((::Class_1_5BD3EF046502B972*(*)(::MoleMole::UICameraAtom&, ::UnityEngine::Vector3&, ::MoleMole::Config::ConfigHollowCameraEasing*&))((::PBYTE)hIl2Cpp + CLASS_2_954470B5468267C8_METHOD_2_B0DB84599FBD1FA0_OFFSET))(a1, a2, a3);
	}
};
