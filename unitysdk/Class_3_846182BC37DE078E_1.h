#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_846182BC37DE078E_1_Enum_3_9D1552100EF9921D.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class MonoWayPath; }
namespace MoleMole { class MonoWayPoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_3_846182BC37DE078E_1_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14049400)
#define CLASS_3_846182BC37DE078E_1_GET_DEBUGPATHROOT_OFFSET UNITYSDK_OFFSET(0x140491C0)
#define CLASS_3_846182BC37DE078E_1_GET_PATHINDEX_OFFSET UNITYSDK_OFFSET(0x140491B0)
#define CLASS_3_846182BC37DE078E_1_METHOD_3_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x14049610)
#define CLASS_3_846182BC37DE078E_1_METHOD_3_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x14049600)
#define CLASS_3_846182BC37DE078E_1_METHOD_3_323F95926A2F616E_OFFSET UNITYSDK_OFFSET(0x14049660)
#define CLASS_3_846182BC37DE078E_1_METHOD_3_7D201B4343E63821_OFFSET UNITYSDK_OFFSET(0x14049770)
#define CLASS_3_846182BC37DE078E_1_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14049570)
#define CLASS_3_846182BC37DE078E_1_METHOD_3_D0EAD389D0C45B35_OFFSET UNITYSDK_OFFSET(0x140491A0)
#define CLASS_3_846182BC37DE078E_1_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x140490E0)
#define CLASS_3_846182BC37DE078E_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x14049450)
#define CLASS_3_846182BC37DE078E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x140494D0)

inline static constexpr unsigned int Class_3_846182BC37DE078E_1_TypeDefinitionIndex = 56553;

class Class_3_846182BC37DE078E_1 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::String* Field_3_23; // 0x0
	// static const ::System::Int32 Field_3_24 = 0x56; // 0x0
	::UnityEngine::Collider* Field_3_22; // 0x48
	::MoleMole::MonoWayPath* Field_3_2; // 0x50
	::MoleMole::MonoWayPoint* Field_3_3; // 0x58
	::System::String* Field_3_1; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Field_3_4; // 0x68
	::System::Int32 Field_3_6; // 0x70
	::System::Single Field_3_20; // 0x74
	::System::Single Field_3_9; // 0x78
	::System::Single Field_3_10; // 0x7C
	::System::Single Field_3_11; // 0x80
	::System::Single Field_3_19; // 0x84
	::Class_3_846182BC37DE078E_1_Enum_3_9D1552100EF9921D Field_3_8; // 0x88
	::System::Single Field_3_13; // 0x8C
	::System::Single Field_3_18; // 0x90
	::UnityEngine::Vector3 Field_3_5; // 0x94
	::System::Single Field_3_12; // 0xA0
	::System::Single Field_3_15; // 0xA4
	::System::Single Field_3_17; // 0xA8
	::System::Single Field_3_16; // 0xAC
	::System::Single Field_3_14; // 0xB0
	::System::Single Field_3_21; // 0xB4
	::System::Boolean Field_3_0; // 0xB8
	::System::Int32 Field_3_7; // 0xBC

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_1__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_1__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_1_ONCLEAN_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_3_D0EAD389D0C45B35()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_1_METHOD_3_D0EAD389D0C45B35_OFFSET))(this);
	}

	::System::Int32 get_PathIndex()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_1_GET_PATHINDEX_OFFSET))(this);
	}

	::UnityEngine::Transform* get_DebugPathRoot()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_1_GET_DEBUGPATHROOT_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_1_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_1_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::String* Method_3_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_1_METHOD_3_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_3_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_1_METHOD_3_050E70FEDB783306_OFFSET))(this, a1);
	}

	static ::Class_3_846182BC37DE078E_1* Method_3_323F95926A2F616E()
	{
		return ((::Class_3_846182BC37DE078E_1*(*)())((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_1_METHOD_3_323F95926A2F616E_OFFSET))();
	}

	::System::Void Method_3_7D201B4343E63821(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_846182BC37DE078E_1_METHOD_3_7D201B4343E63821_OFFSET))(this, a1);
	}
};
