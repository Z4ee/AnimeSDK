#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CE3B674D22BBFC73.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C260E5F602A0806D;
namespace MoleMole { class MonoConfigurableCollider; }
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_8859DEA43D354F25_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x18DBC6F0)
#define CLASS_1_8859DEA43D354F25_METHOD_1_997CDD1C6806EB32_1_OFFSET UNITYSDK_OFFSET(0x18DBD6D0)
#define CLASS_1_8859DEA43D354F25_METHOD_1_997CDD1C6806EB32_OFFSET UNITYSDK_OFFSET(0x18DBD2D0)
#define CLASS_1_8859DEA43D354F25_METHOD_1_A667B9DB2623A4C9_OFFSET UNITYSDK_OFFSET(0x18DBD070)
#define CLASS_1_8859DEA43D354F25_METHOD_1_D155FDD6700EC2CB_OFFSET UNITYSDK_OFFSET(0x18DBCE50)
#define CLASS_1_8859DEA43D354F25_METHOD_1_E7ECD075AA41525D_OFFSET UNITYSDK_OFFSET(0x18DBC830)
#define CLASS_1_8859DEA43D354F25__CTOR_OFFSET UNITYSDK_OFFSET(0x18DBC5D0)

inline static constexpr unsigned int Class_1_8859DEA43D354F25_TypeDefinitionIndex = 81311;

class Class_1_8859DEA43D354F25 : public ::System::Object
{
public:
	::Class_1_C260E5F602A0806D* Field_1_6; // 0x10
	::MoleMole::MonoConfigurableCollider* Field_1_1; // 0x18
	::Class_1_C260E5F602A0806D* Field_1_5; // 0x20
	::UnityEngine::Vector3 Field_1_2; // 0x28
	::System::Boolean Field_1_0; // 0x34
	::System::Boolean Field_1_3; // 0x35
	::Enum_3_CE3B674D22BBFC73 Field_1_7; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8859DEA43D354F25__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8859DEA43D354F25_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Boolean Method_1_E7ECD075AA41525D(::UnityEngine::GameObject* a1, ::Enum_3_CE3B674D22BBFC73 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::Enum_3_CE3B674D22BBFC73))((::PBYTE)hIl2Cpp + CLASS_1_8859DEA43D354F25_METHOD_1_E7ECD075AA41525D_OFFSET))(this, a1, a2);
	}

	::MoleMole::Battle::Entity* Method_1_D155FDD6700EC2CB(::UnityEngine::Collider* a1)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_8859DEA43D354F25_METHOD_1_D155FDD6700EC2CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_A667B9DB2623A4C9(::MoleMole::MonoConfigurableCollider* a1, ::Enum_3_CE3B674D22BBFC73 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoConfigurableCollider*, ::Enum_3_CE3B674D22BBFC73))((::PBYTE)hIl2Cpp + CLASS_1_8859DEA43D354F25_METHOD_1_A667B9DB2623A4C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_997CDD1C6806EB32(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_8859DEA43D354F25_METHOD_1_997CDD1C6806EB32_OFFSET))(this, a1);
	}

	::System::Void Method_1_997CDD1C6806EB32_1(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_8859DEA43D354F25_METHOD_1_997CDD1C6806EB32_1_OFFSET))(this, a1);
	}
};
