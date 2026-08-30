#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_73FF716382F12A48_Struct_2_132DEF2CD925D2DB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoInflatableFighter; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_1_73FF716382F12A48_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBBF80B0)
#define CLASS_1_73FF716382F12A48_METHOD_1_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0xBBF8420)
#define CLASS_1_73FF716382F12A48_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xBBF83C0)
#define CLASS_1_73FF716382F12A48_METHOD_1_1F288903ED1E85F3_OFFSET UNITYSDK_OFFSET(0xBBF8040)
#define CLASS_1_73FF716382F12A48_METHOD_1_549C4400577A60D4_OFFSET UNITYSDK_OFFSET(0xBBF8100)
#define CLASS_1_73FF716382F12A48_METHOD_1_640B24B23243B260_OFFSET UNITYSDK_OFFSET(0xBBF8480)
#define CLASS_1_73FF716382F12A48_METHOD_1_6D5B12EFA4768FA5_OFFSET UNITYSDK_OFFSET(0xBBF88E0)
#define CLASS_1_73FF716382F12A48__CTOR_OFFSET UNITYSDK_OFFSET(0xBBF7FC0)

inline static constexpr unsigned int Class_1_73FF716382F12A48_TypeDefinitionIndex = 68634;

class Class_1_73FF716382F12A48 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* KIHPPJILDGM; // 0x10
	::RPG::Client::MonoInflatableFighter* CEODOONOFBM; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* JJLOCCGHLIA; // 0x20

	::System::Void _ctor(::RPG::Client::MonoInflatableFighter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoInflatableFighter*))((::PBYTE)hIl2Cpp + CLASS_1_73FF716382F12A48__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_1F288903ED1E85F3(::RPG::Client::MonoInflatableFighter* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoInflatableFighter*))((::PBYTE)hIl2Cpp + CLASS_1_73FF716382F12A48_METHOD_1_1F288903ED1E85F3_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73FF716382F12A48_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_549C4400577A60D4(::Class_1_73FF716382F12A48* a1, ::Class_1_73FF716382F12A48_Struct_2_132DEF2CD925D2DB& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_73FF716382F12A48*, ::Class_1_73FF716382F12A48_Struct_2_132DEF2CD925D2DB&))((::PBYTE)hIl2Cpp + CLASS_1_73FF716382F12A48_METHOD_1_549C4400577A60D4_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_6D5B12EFA4768FA5(::Class_1_73FF716382F12A48* a1, ::Class_1_73FF716382F12A48_Struct_2_132DEF2CD925D2DB& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_73FF716382F12A48*, ::Class_1_73FF716382F12A48_Struct_2_132DEF2CD925D2DB&))((::PBYTE)hIl2Cpp + CLASS_1_73FF716382F12A48_METHOD_1_6D5B12EFA4768FA5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_640B24B23243B260(::UnityEngine::Collider* a1, ::UnityEngine::Collider* a2, ::UnityEngine::Vector3& a3, ::System::Single& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Collider*, ::UnityEngine::Vector3&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_1_73FF716382F12A48_METHOD_1_640B24B23243B260_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73FF716382F12A48_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73FF716382F12A48_METHOD_1_1D4018D4200358D0_1_OFFSET))(this);
	}
};
