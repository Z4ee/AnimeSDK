#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4D46F243DAF6A123;
class Class_1_A470F635D8F60A8B_Class_1_7DF6BFF6F9CE77C9;
class Class_3_7C94170F9FBB41A7;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A470F635D8F60A8B_COMPARETO_OFFSET UNITYSDK_OFFSET(0x14DE21C0)
#define CLASS_1_A470F635D8F60A8B_METHOD_1_0B63A0EF42BD601E_OFFSET UNITYSDK_OFFSET(0x14DE2360)
#define CLASS_1_A470F635D8F60A8B_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x14DE25E0)
#define CLASS_1_A470F635D8F60A8B_METHOD_1_248439007DD0E5AD_OFFSET UNITYSDK_OFFSET(0x14DE2120)
#define CLASS_1_A470F635D8F60A8B_METHOD_1_A3F2334211BC28FF_OFFSET UNITYSDK_OFFSET(0x14DE2230)
#define CLASS_1_A470F635D8F60A8B_METHOD_1_CDC893D8EEFE7A3E_OFFSET UNITYSDK_OFFSET(0x14DE2670)
#define CLASS_1_A470F635D8F60A8B__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE1F40)

inline static constexpr unsigned int Class_1_A470F635D8F60A8B_TypeDefinitionIndex = 86677;

class Class_1_A470F635D8F60A8B : public ::System::Object
{
public:
	::Class_1_A470F635D8F60A8B_Class_1_7DF6BFF6F9CE77C9* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_5; // 0x18
	::UnityEngine::Vector3 Field_1_6; // 0x24
	::System::Single Field_1_11; // 0x30
	::System::UInt32 Field_1_7; // 0x34
	::System::Int32 Field_1_10; // 0x38
	::System::UInt32 Field_1_4; // 0x3C

	::System::Void _ctor(::Class_3_7C94170F9FBB41A7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7C94170F9FBB41A7*))((::PBYTE)hIl2Cpp + CLASS_1_A470F635D8F60A8B__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 CompareTo(::Class_1_A470F635D8F60A8B* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_A470F635D8F60A8B*))((::PBYTE)hIl2Cpp + CLASS_1_A470F635D8F60A8B_COMPARETO_OFFSET))(this, a1);
	}

	static ::Class_1_A470F635D8F60A8B_Class_1_7DF6BFF6F9CE77C9* Method_1_248439007DD0E5AD(::Class_3_7C94170F9FBB41A7* a1)
	{
		return ((::Class_1_A470F635D8F60A8B_Class_1_7DF6BFF6F9CE77C9*(*)(::Class_3_7C94170F9FBB41A7*))((::PBYTE)hIl2Cpp + CLASS_1_A470F635D8F60A8B_METHOD_1_248439007DD0E5AD_OFFSET))(a1);
	}

	::Class_1_4D46F243DAF6A123* Method_1_A3F2334211BC28FF(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::Class_1_4D46F243DAF6A123*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_A470F635D8F60A8B_METHOD_1_A3F2334211BC28FF_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_1_0B63A0EF42BD601E(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_A470F635D8F60A8B_METHOD_1_0B63A0EF42BD601E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A470F635D8F60A8B_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_4D46F243DAF6A123*>* Method_1_CDC893D8EEFE7A3E(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_4D46F243DAF6A123*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A470F635D8F60A8B_METHOD_1_CDC893D8EEFE7A3E_OFFSET))(this, a1);
	}
};
