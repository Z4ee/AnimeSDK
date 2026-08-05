#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_70FF81FD8A684DFF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x185E02D0)
#define CLASS_3_70FF81FD8A684DFF_METHOD_3_3EC6F1A02156DBB2_OFFSET UNITYSDK_OFFSET(0x185E0670)
#define CLASS_3_70FF81FD8A684DFF_METHOD_3_59D91A5F9799FC61_OFFSET UNITYSDK_OFFSET(0x185E0440)
#define CLASS_3_70FF81FD8A684DFF_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x185E03B0)
#define CLASS_3_70FF81FD8A684DFF_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x185E05F0)
#define CLASS_3_70FF81FD8A684DFF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x185E0280)
#define CLASS_3_70FF81FD8A684DFF__CCTOR_OFFSET UNITYSDK_OFFSET(0x185E0320)
#define CLASS_3_70FF81FD8A684DFF__CTOR_OFFSET UNITYSDK_OFFSET(0x185E03A0)

inline static constexpr unsigned int Class_3_70FF81FD8A684DFF_TypeDefinitionIndex = 46593;

class Class_3_70FF81FD8A684DFF : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_0 = 0x54; // 0x0
	::System::UInt64 Field_3_3; // 0x48
	::System::UInt32 Field_3_2; // 0x50
	::System::Single Field_3_1; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_70FF81FD8A684DFF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70FF81FD8A684DFF__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70FF81FD8A684DFF_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70FF81FD8A684DFF_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70FF81FD8A684DFF_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_59D91A5F9799FC61()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70FF81FD8A684DFF_METHOD_3_59D91A5F9799FC61_OFFSET))(this);
	}

	static ::Class_3_70FF81FD8A684DFF* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_70FF81FD8A684DFF*(*)())((::PBYTE)hIl2Cpp + CLASS_3_70FF81FD8A684DFF_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::MoleMole::Battle::Entity* Method_3_3EC6F1A02156DBB2()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_70FF81FD8A684DFF_METHOD_3_3EC6F1A02156DBB2_OFFSET))(this);
	}
};
