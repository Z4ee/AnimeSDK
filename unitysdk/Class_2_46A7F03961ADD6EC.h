#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_44.h"
#include "unitysdk/MoleMole/UICameraAtom.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_5BD3EF046502B972;
class Class_1_F356FCA60006484C;
namespace MoleMole::Config { class ConfigHollowCameraInit; }
namespace System { class Object; }

#define CLASS_2_46A7F03961ADD6EC_METHOD_2_5832818CA4605784_OFFSET UNITYSDK_OFFSET(0x1488A820)
#define CLASS_2_46A7F03961ADD6EC_METHOD_2_7A8AC8365BFD8B87_OFFSET UNITYSDK_OFFSET(0x1488A680)
#define CLASS_2_46A7F03961ADD6EC__CTOR_OFFSET UNITYSDK_OFFSET(0x1488A920)

inline static constexpr unsigned int Class_2_46A7F03961ADD6EC_TypeDefinitionIndex = 75185;

class Class_2_46A7F03961ADD6EC : public ::Class_1_43BD383C98B4C0C5_44
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_46A7F03961ADD6EC__CTOR_OFFSET))(this);
	}

	::Class_1_F356FCA60006484C* Method_2_7A8AC8365BFD8B87(::Il2CppArray<::System::Object*>* a1)
	{
		return ((::Class_1_F356FCA60006484C*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_46A7F03961ADD6EC_METHOD_2_7A8AC8365BFD8B87_OFFSET))(this, a1);
	}

	static ::Class_1_5BD3EF046502B972* Method_2_5832818CA4605784(::MoleMole::UICameraAtom& a1, ::UnityEngine::Vector3& a2, ::MoleMole::Config::ConfigHollowCameraInit*& a3)
	{
		return ((::Class_1_5BD3EF046502B972*(*)(::MoleMole::UICameraAtom&, ::UnityEngine::Vector3&, ::MoleMole::Config::ConfigHollowCameraInit*&))((::PBYTE)hIl2Cpp + CLASS_2_46A7F03961ADD6EC_METHOD_2_5832818CA4605784_OFFSET))(a1, a2, a3);
	}
};
