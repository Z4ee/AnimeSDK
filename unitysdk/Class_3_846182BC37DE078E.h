#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_846182BC37DE078E_Enum_3_9D1552100EF9921D.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoWayPath; }
namespace MoleMole { class MonoWayPoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_3_846182BC37DE078E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16FEA590)
#define CLASS_3_846182BC37DE078E_GET_DEBUGPATHROOT_OFFSET UNITYSDK_OFFSET(0x16FEA350)
#define CLASS_3_846182BC37DE078E_GET_PATHINDEX_OFFSET UNITYSDK_OFFSET(0x16FEA340)
#define CLASS_3_846182BC37DE078E_METHOD_3_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x16FEA700)
#define CLASS_3_846182BC37DE078E_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x16FEA7F0)
#define CLASS_3_846182BC37DE078E_METHOD_3_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0x16FEA800)
#define CLASS_3_846182BC37DE078E_METHOD_3_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x16FEA750)
#define CLASS_3_846182BC37DE078E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16FEA760)
#define CLASS_3_846182BC37DE078E_METHOD_3_D0EAD389D0C45B35_OFFSET UNITYSDK_OFFSET(0x16FEA330)
#define CLASS_3_846182BC37DE078E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x16FEA250)
#define CLASS_3_846182BC37DE078E__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FEA5E0)
#define CLASS_3_846182BC37DE078E__CTOR_OFFSET UNITYSDK_OFFSET(0x16FEA660)

inline static constexpr unsigned int Class_3_846182BC37DE078E_TypeDefinitionIndex = 64881;

class Class_3_846182BC37DE078E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::String* Field_3_23; // 0x0
	// static const ::System::Int32 Field_3_24 = 0x59; // 0x0
	::System::String* Field_3_1; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_3_4; // 0x50
	::MoleMole::MonoWayPath* Field_3_2; // 0x58
	::MoleMole::MonoWayPoint* Field_3_3; // 0x60
	::UnityEngine::Collider* Field_3_22; // 0x68
	::System::Single Field_3_12; // 0x70
	::System::Single Field_3_19; // 0x74
	::System::Single Field_3_13; // 0x78
	::System::Single Field_3_10; // 0x7C
	::System::Single Field_3_17; // 0x80
	::System::Single Field_3_16; // 0x84
	::System::Single Field_3_18; // 0x88
	::System::Single Field_3_11; // 0x8C
	::Class_3_846182BC37DE078E_Enum_3_9D1552100EF9921D Field_3_8; // 0x90
	::System::Single Field_3_14; // 0x94
	::System::Int32 Field_3_6; // 0x98
	::System::Single Field_3_20; // 0x9C
	::System::Boolean Field_3_0; // 0xA0
	::System::Single Field_3_15; // 0xA4
	::System::Single Field_3_21; // 0xA8
	::UnityEngine::Vector3 Field_3_5; // 0xAC
	::System::Int32 Field_3_7; // 0xB8
	::System::Single Field_3_9; // 0xBC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_ONCLEAN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_3_D0EAD389D0C45B35()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_METHOD_3_D0EAD389D0C45B35_OFFSET))(this);
	}

	::System::Int32 get_PathIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_GET_PATHINDEX_OFFSET))(this);
	}

	::UnityEngine::Transform* get_DebugPathRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_GET_DEBUGPATHROOT_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_METHOD_3_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_3_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_METHOD_3_7D201B4343E63821_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	static ::Class_3_846182BC37DE078E* Method_3_323F95926A2F616E()
	{
		return ((::Class_3_846182BC37DE078E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_METHOD_3_323F95926A2F616E_OFFSET))();
	}
};
