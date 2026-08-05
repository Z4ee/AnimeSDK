#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_38FCE313D8A6C18C_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13C50170)
#define CLASS_3_38FCE313D8A6C18C_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x13C50250)
#define CLASS_3_38FCE313D8A6C18C_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x13C50690)
#define CLASS_3_38FCE313D8A6C18C_METHOD_3_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0x13C502E0)
#define CLASS_3_38FCE313D8A6C18C_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13C4FFD0)
#define CLASS_3_38FCE313D8A6C18C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C501C0)
#define CLASS_3_38FCE313D8A6C18C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C50240)

inline static constexpr unsigned int Class_3_38FCE313D8A6C18C_TypeDefinitionIndex = 80535;

class Class_3_38FCE313D8A6C18C : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_6 = 0x9D; // 0x0
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_3_0; // 0x48
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_3_7; // 0x50
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* Field_3_1; // 0x58
	::System::Int32 Field_3_2; // 0x60
	::System::Boolean Field_3_3; // 0x64

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_38FCE313D8A6C18C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38FCE313D8A6C18C__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38FCE313D8A6C18C_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38FCE313D8A6C18C_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38FCE313D8A6C18C_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_D109CE569415FA03()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_38FCE313D8A6C18C_METHOD_3_D109CE569415FA03_OFFSET))(this);
	}

	static ::Class_3_38FCE313D8A6C18C* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_38FCE313D8A6C18C*(*)())((::PBYTE)hIl2Cpp + CLASS_3_38FCE313D8A6C18C_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
