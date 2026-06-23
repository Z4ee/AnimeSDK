#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0FED320E7A82FE89_Class_1_7DF6BFF6F9CE77C9;
class Class_1_D276261F488D3DEB;
class Class_3_7C94170F9FBB41A7;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0FED320E7A82FE89_COMPARETO_OFFSET UNITYSDK_OFFSET(0x196421D0)
#define CLASS_1_0FED320E7A82FE89_METHOD_1_0B63A0EF42BD601E_OFFSET UNITYSDK_OFFSET(0x196422A0)
#define CLASS_1_0FED320E7A82FE89_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x19642520)
#define CLASS_1_0FED320E7A82FE89_METHOD_1_248439007DD0E5AD_OFFSET UNITYSDK_OFFSET(0x19642130)
#define CLASS_1_0FED320E7A82FE89_METHOD_1_CDC893D8EEFE7A3E_OFFSET UNITYSDK_OFFSET(0x19642240)
#define CLASS_1_0FED320E7A82FE89_METHOD_1_D7FB033567229658_OFFSET UNITYSDK_OFFSET(0x196425B0)
#define CLASS_1_0FED320E7A82FE89__CTOR_OFFSET UNITYSDK_OFFSET(0x19641EE0)

inline static constexpr unsigned int Class_1_0FED320E7A82FE89_TypeDefinitionIndex = 60559;

class Class_1_0FED320E7A82FE89 : public ::System::Object
{
public:
	::Class_1_0FED320E7A82FE89_Class_1_7DF6BFF6F9CE77C9* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::UInt32 Field_1_4; // 0x1C
	::System::Single Field_1_5; // 0x20
	::UnityEngine::Vector3 Field_1_2; // 0x24
	::UnityEngine::Vector3 Field_1_3; // 0x30
	::System::Int32 Field_1_6; // 0x3C

	::System::Void _ctor(::Class_3_7C94170F9FBB41A7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_7C94170F9FBB41A7*))((::PBYTE)hIl2Cpp + CLASS_1_0FED320E7A82FE89__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 CompareTo(::Class_1_0FED320E7A82FE89* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_0FED320E7A82FE89*))((::PBYTE)hIl2Cpp + CLASS_1_0FED320E7A82FE89_COMPARETO_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_D276261F488D3DEB*>* Method_1_CDC893D8EEFE7A3E(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_D276261F488D3DEB*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0FED320E7A82FE89_METHOD_1_CDC893D8EEFE7A3E_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_0B63A0EF42BD601E(::UnityEngine::Vector2 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_0FED320E7A82FE89_METHOD_1_0B63A0EF42BD601E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0FED320E7A82FE89_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::Class_1_D276261F488D3DEB* Method_1_D7FB033567229658(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector2 a2)
	{
		return ((::Class_1_D276261F488D3DEB*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_0FED320E7A82FE89_METHOD_1_D7FB033567229658_OFFSET))(this, a1, a2);
	}

	static ::Class_1_0FED320E7A82FE89_Class_1_7DF6BFF6F9CE77C9* Method_1_248439007DD0E5AD(::Class_3_7C94170F9FBB41A7* a1)
	{
		return ((::Class_1_0FED320E7A82FE89_Class_1_7DF6BFF6F9CE77C9*(*)(::Class_3_7C94170F9FBB41A7*))((::PBYTE)hIl2Cpp + CLASS_1_0FED320E7A82FE89_METHOD_1_248439007DD0E5AD_OFFSET))(a1);
	}
};
