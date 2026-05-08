#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_024EA6F6E906A88E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x10415730)
#define CLASS_3_024EA6F6E906A88E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x10415810)
#define CLASS_3_024EA6F6E906A88E_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x104158A0)
#define CLASS_3_024EA6F6E906A88E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x104156F0)
#define CLASS_3_024EA6F6E906A88E__CCTOR_OFFSET UNITYSDK_OFFSET(0x10415780)
#define CLASS_3_024EA6F6E906A88E__CTOR_OFFSET UNITYSDK_OFFSET(0x10415800)

inline static constexpr unsigned int Class_3_024EA6F6E906A88E_TypeDefinitionIndex = 59250;

class Class_3_024EA6F6E906A88E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_5 = 0x33; // 0x0
	::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* Field_3_2; // 0x48
	::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* Field_3_1; // 0x50
	::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* Field_3_4; // 0x58
	::System::Action_1<::MoleMole::Battle::Entity*>* Field_3_0; // 0x60
	::System::Action_2<::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*>* Field_3_3; // 0x68

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_024EA6F6E906A88E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_024EA6F6E906A88E__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_024EA6F6E906A88E_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_024EA6F6E906A88E_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_024EA6F6E906A88E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_024EA6F6E906A88E* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_024EA6F6E906A88E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_024EA6F6E906A88E_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}
};
